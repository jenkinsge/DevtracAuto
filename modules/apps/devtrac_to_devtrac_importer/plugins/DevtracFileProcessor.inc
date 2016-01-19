<?php
/**
 * @file
 * Class definition of DevtracFileProcessor.
 */

/**
 * Creates files from feed items.
 */
class DevtracFileProcessor extends FeedsProcessor {
  protected $debug;

   /**
   * The default list of allowed extensions.
   *
   * @param string
   */
  protected $allowed_extensions = 'jpg, jpeg, gif, png, txt, doc, xls, csv, pdf, ppt, pps, odt, ods, odp';

   /**
   * The default list of remote schemes.
   *
   * @param string
   */
  protected $remote_schemes = 'http, https, ftp, ftps, smb, nfs';

   /**
   * The default destination for imported files.
   *
   * @param string
   */
  protected $file_destination;

  /**
   * Define entity type.
   */
  public function entityType() {
    return 'file';
  }

  /**
   * Implements parent::entityInfo().
   */
  protected function entityInfo() {
    $info = parent::entityInfo();
    $info['label plural'] = t('Files');
    return $info;
  }

  /**
   * Create a new entity.
   *
   * @param $source
   *   The feeds source that spawns this entity.
   *
   * @return
   *   A new entity object.
   */
  protected function newEntity(FeedsSource $source) {
    $file = new stdClass();
    $file->type = $this->config['bundle'] ? $this->config['bundle'] : FILE_TYPE_NONE;
    $file->timestamp = REQUEST_TIME;
    $file->uid = $this->config['author'];
    $file->status = FILE_STATUS_PERMANENT;

    $this->debug($file, 'newEntity');

    return $file;
  }

  /**
   * Load an existing entity.
   *
   * @param $source
   *   The feeds source that spawns this entity.
   * @param $entity_id
   *   The unique id of the entity that should be loaded.
   *
   * @return
   *   A new entity object.
   *
   * @todo We should be able to batch load these, if we found all of the
   *   existing ids first.
   */
  protected function entityLoad(FeedsSource $source, $fid) {
    if ($this->config['update_existing'] == FEEDS_UPDATE_EXISTING) {
      $file = file_load($fid);
    }
    else {
      // We're replacing the existing file. Only load what's absolutely necessary.
      $file = db_query("SELECT fid, type, status, uri FROM {file_managed} WHERE fid = :fid", array(':fid' => $fid))->fetchObject();
      $file->uid = $this->config['author'];
    }

    $this->debug($file, 'entityLoad');

    return $file;
  }

  /**
   * Validate an entity.
   *
   * @throws FeedsValidationException $e
   *   If validation fails.
   */
  protected function entityValidate($entity) {
    if (empty($entity->filename)) {
      throw new FeedsValidationException(t('File name is missing.'));
    }
    if (empty($entity->uri)) {
      throw new FeedsValidationException(t('File URI is missing.'));
    }
    if (empty($entity->filemime)) {
      throw new FeedsValidationException(t('File MIME type is missing.'));
    }
  }

  /**
   * Access check for saving an enity.
   *
   * @param $entity
   *   Entity to be saved.
   *
   * @throws FeedsAccessException $e
   *   If the access check fails.
   */
  protected function entitySaveAccess($entity) {

    // The check will be skipped for anonymous files.
    if ($this->config['authorize'] && !empty($entity->uid)) {

      $author = user_load($entity->uid);

      // If the uid was mapped directly, rather than by email or username, it
      // could be invalid.
      if (!$author) {
        $message = 'User %uid is not a valid user.';
        throw new FeedsAccessException(t($message, array('%uid' => $entity->uid)));
      }

      if (empty($entity->fid)) {
        $op = 'create';
        $access = file_entity_access($op, $entity->type, $author);
      }
      else {
        $op = 'update';
        $access = file_entity_access($op, $entity, $author);
      }

      if (!$access) {
        $message = 'User %name is not authorized to %op file type %type.';
        throw new FeedsAccessException(t($message, array('%name' => $author->name, '%op' => $op, '%type' => $entity->type)));
      }
    }
  }

  /**
   * Save an entity.
   *
   * @param $entity
   *   Entity to be saved.
   */
  public function entitySave($entity) {
    $this->debug($entity, 'entitySave');

    // See if the media module is available. If it is, check to see
    // if it will handle the given URI.
    if (function_exists('media_parse_to_uri')) {
      try {
        $media_uri = media_parse_to_uri($entity->uri);
      }
      catch (Exception $e) {
        $media_uri = '';
      }
    }

    // If the media module is missing or can't handle the URL, we will see
    // try to copy it locally.
    if (!isset($media_uri) || !$media_uri) {
      // Is it remote?
      if (!file_entity_file_is_local($entity)) {
        $file = FALSE;
        try {
          $file = $this->entityCopyLocal($entity);
        }
        catch (Exception $e) {
          // Ignore any errors and let the file API try and handle things.
        }

        if ($file) {
          $entity = $file;
        }
      }

      // TODO: What if it's local but not in the Drupal path?
      // file_default_scheme() . ':/'
    }

    $file_uri_exists = FALSE;
    try {
      file_save($entity);
    }
    catch (Exception $e) {
      $message = $e->getMessage();
      // If the exception is because the current URI is already taken,
      // then query the database for the file that is using this URI and add
      // the current entity's file usage to that file.
      if (preg_match("/SQLSTATE\[23000\]: Integrity constraint violation: 1062 Duplicate entry \'[a-zA-Z:\/._\-0-9]+\' for key \'uri\'/", $message) !== FALSE) {
        $file_uri_exists = TRUE;
      }
    }

    if ($file_uri_exists) {
      // Query the database for the files uuid using the file's uri.
      $file_uuid = db_select('file_managed', 'fm')
        ->fields('fm', array('uuid'))
        ->condition('uri', $entity->uri)
        ->execute()->fetchField();
      // Load the file and add this entity's file usage to it.
      $file = entity_uuid_load('file', array($file_uuid));
      $file = reset($file);
      if (!empty($file->node_usage)) {
        $file->node_usage = array_merge($file->node_usage, $entity->node_usage);
      } else {
        $file->node_usage = $entity->node_usage;
      }
      if (!empty($file->term_usage)) {
        $file->term_usage = array_merge($file->term_usage, $entity->term_usage);
      } else {
        $file->term_usage = $entity->term_usage;
      }
      $this->entityAddUsage($file);
    }
    else {
      $this->entityAddUsage($entity);
    }

  }

  /**
   * Adds file Usage data to database.
   *
   * @param $entity
   *   Entity whose usage is to be saved.
   */
  public function entityAddUsage($entity) {
    // Add the file usage
    if (!empty($entity->node_usage)) {
      foreach ($entity->node_usage as $entity_id) {
        $using_entity = node_load($entity_id);
        $using_entity_instances = field_info_instances('node', $using_entity->type);
        foreach($using_entity_instances as $field_name => $instance) {
          $field_info = field_info_field($field_name);
          if ($field_info['type'] == $entity->type) {
            $using_entity->{$field_name}[LANGUAGE_NONE][] = (array)$entity;
            // This will also call the file_usage_add() function.
            node_save($using_entity);
          }
        }
      }
    }
    if (!empty($entity->term_usage)) {
      foreach ($entity->term_usage as $entity_id) {
        $using_entity = taxonomy_term_load($entity_id);
        $using_entity_instances = field_info_instances('taxonomy_term', $using_entity->type);
        foreach($using_entity_instances as $field_name => $instance) {
          $field_info = field_info_field($field_name);
          if ($field_info['type'] == $entity->type) {
            $using_entity->{$field_name}[LANGUAGE_NONE][] = (array)$entity;
            taxonomy_term_save($using_entity);
          }
        }
      }
    }
  }

  protected function entityCopyLocal($entity) {
    try {
      // Copy to temporary first.
      $source_uri = file_stream_wrapper_uri_normalize('temporary://' . basename($url));
      if (!@copy(@$entity->uri, $source_uri)) {
        throw new Exception('Unable to copy file ' . $entity->uri);
        return;
      }

      $source_file = file_uri_to_object($source_uri);
      $uri = file_build_uri($source_file->filename);

      // Now to its new home.
      $file = file_move($source_file, $uri, FILE_EXISTS_RENAME);

      return $file;
    }
    catch (Exception $e) {
      // Do nothing on error. We will let it fail out on entitySave if it's going to fail.
    }

    return FALSE;
  }

  /**
   * Delete a series of entities.
   *
   * @param $entity_ids
   *   Array of unique identity ids to be deleted.
   */
  protected function entityDeleteMultiple($fids) {
    $files = file_load_multiple($fids);
    foreach ($files as $file) {
      file_delete($file);
    }
  }

  /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    $entity_info = entity_get_info('file');
    $types = $entity_info['bundles'];
    $type = isset($types['image']) ? 'image' : FILE_TYPE_NONE;

    return array(
      'bundle' => $type,
      'author' => 0,
      'authorize' => TRUE,
      'debug' => array(),
      'allowed_extensions' => $this->allowed_extensions,
      'remote_schemes' => $this->remote_schemes,
      'file_destination' => file_default_scheme() . '://',
    ) + parent::configDefaults();
  }

  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $form = parent::configForm($form_state);

    // There is no body field on files.
    unset($form['input_format']);
    $form['allowed_extensions'] = array(
      '#type' => 'textfield',
      '#title' => t('Allowed Extensions'),
      '#description' => t('Indicate which file extensions should be allowed when creating files.'),
      '#default_value' => empty($this->config['allowed_extensions']) ?  $this->allowed_extensions : check_plain($this->config['allowed_extensions']),
    );

    $form['remote_schemes'] = array(
      '#type' => 'textfield',
      '#title' => t('Remote Schemes'),
      '#description' => t('Indicate which remote schemes should be allowed as sources when creating files.'),
      '#default_value' => empty($this->config['remote_schemes']) ?  $this->remote_schemes : check_plain($this->config['remote_schemes']),
    );

    $form['file_destination'] = array(
      '#type' => 'textfield',
      '#title' => t('File Destination'),
      '#description' => t('Indicate where imported files should be stored.'),
      '#default_value' => empty($this->config['file_destination']) ?  $this->file_destination : check_plain($this->config['file_destination']),
    );

    $author = user_load($this->config['author']);
    $form['author'] = array(
      '#type' => 'textfield',
      '#title' => t('Author'),
      '#description' => t('Select the author of the files to be created - leave empty to assign "anonymous".'),
      '#autocomplete_path' => 'user/autocomplete',
      '#default_value' => empty($author->name) ?  'anonymous' : check_plain($author->name),
    );
    $form['authorize'] = array(
      '#type' => 'checkbox',
      '#title' => t('Authorize'),
      '#description' => t('Check that the author has permission to create the file.'),
      '#default_value' => $this->config['authorize'],
    );

    $debug_options = array(
      'newEntity' => 'newEntity',
      'entityLoad' => 'entityLoad',
      'entitySave' => 'entitySave',
      'setTargetElement' => 'setTargetElement',
      'existingEntityId' => 'existingEntityId',
    );
    $form['debug_fieldset'] = array(
      '#type' => 'fieldset',
      '#title' => t('Debug'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );
    $form['debug_fieldset']['debug'] = array(
      '#type' => 'checkboxes',
      '#title' => t('Debug query'),
      '#options' => $debug_options,
      '#default_value' => isset($this->config['debug']) ? $this->config['debug'] : array(),
    );

    return $form;
  }

  /**
   * Override parent::configFormValidate().
   */
  public function configFormValidate(&$values) {
    if ($author = user_load_by_name($values['author'])) {
      $values['author'] = $author->uid;
    }
    else {
      $values['author'] = 0;
    }
  }

  /**
   * Return available mapping targets.
   */
  public function getMappingTargets() {
    $targets = parent::getMappingTargets();
    $targets['fid'] = array(
      'name' => t('File ID'),
      'description' => t('The fid of the file. NOTE: use this feature with care, file ids are usually assigned by Drupal.'),
      'optional_unique' => TRUE,
    );
    $targets['filename'] = array(
      'name' => t('Filename'),
      'description' => t('The filename of the file.'),
      'optional_unique' => TRUE,
    );
    $targets['uri'] = array(
      'name' => t('File URI'),
      'description' => t('The URI of the file. NOTE: use this feature with care, file URIs are usually assigned by Drupal. If the media module is installed, it will attempt to parse the passed URI for remote files.'),
      'optional_unique' => TRUE,
    );
    $targets['bundle'] = array(
      'name' => t('File Type'),
      'description' => t('The type/bundle of the file. NOTE: use this feature with care, file types are usually assigned by Drupal.'),
    );
    $targets['uid'] = array(
      'name' => t('User ID'),
      'description' => t('The Drupal user ID of the file author.'),
    );
    $targets['user_name'] = array(
      'name' => t('Username'),
      'description' => t('The Drupal username of the file author.'),
    );
    $targets['user_mail'] = array(
      'name' => t('User email'),
      'description' => t('The email address of the file author.'),
    );
    $targets['node_usage'] = array(
      'name' => t('File usage (node) by Feeds GUID'),
      'description' => t('The list of nodes that use a file.'),
      'optional_unique' => TRUE,
    );
    $targets['term_usage'] = array(
      'name' => t('File usage (term) by Feeds GUID'),
      'description' => t('The list of terms that use a file.'),
      'optional_unique' => TRUE,
    );

    // Let other modules expose mapping targets.
    self::loadMappers();
    $entity_type = $this->entityType();
    $bundle = $this->config['bundle'] ? $this->config['bundle'] : FILE_TYPE_NONE;
    drupal_alter('feeds_processor_targets', $targets, $entity_type, $bundle);

    return $targets;
  }

  /**
   * Downloads the content from the file URL.
   *
   * @param $uri
   *   The URI of the file.
   * @param $destination
   *   The folder where the file shall be stored.
   * @param $existing_files_option
   *   The replace behavior when the destination file already exists
   *
   * @return string
   *   The content of the referenced resource.
   */
  public function getFile($uri, $destination, $existing_files_option) {
    $parsed_uri = parse_url($uri);
    $remote_schemes = !empty($this->config['remote_schemes']) ?  $this->config['remote_schemes'] : $this->remote_schemes;

    if (!in_array($parsed_uri['scheme'], explode(', ', $remote_schemes), TRUE)) {
      // This is a local file, just return the path.
      return drupal_realpath($uri);
    }

    $local = $destination . drupal_basename($parsed_uri['path']);

    if (!file_exists($local) || update_delete_file_if_stale($local)) {
      return system_retrieve_file($uri, $local, FALSE, $existing_files_option);
    }
    else {
      return $local;
    }
  }

  /**
   * Override setTargetElement to operate on a target item that is a file.
   */
  public function setTargetElement(FeedsSource $source, $target_file, $target_element, $value) {
    $this->debug(array($source, $target_file, $target_element, $value), 'setTargetElement');

    switch ($target_element) {
      case 'uri':
        try {
          // First we extract the filename from the uri and check that it is
          // among the allowed extensions.
          $filename = rawurldecode(drupal_basename($value));
          // Remove leading and trailing whitespace and periods.
          $filename = trim($filename, " \t\n\r\0\x0B.");
          if (strpos($filename, '.') === FALSE) {
            $extension = FALSE;
          }
          else {
            $extension = drupal_strtolower(substr($filename, strrpos($filename, '.') + 1));
          }
          $allowed_extensions = !empty($this->config['allowed_extensions']) ?  $this->config['allowed_extensions'] : $this->allowed_extensions;
          if (!$extension || !in_array($extension, explode(', ', $allowed_extensions), TRUE)) {
            throw new RuntimeException(t('The file @file has an invalid extension.', array('@file' => $filename)));
          }

          // Next we get the destination and try to get the file.
          $destination = !empty($this->config['file_destination']) ?  $this->config['file_destination'] : $this->file_destination;
          if ($uri = $this->getFile($value, $destination, FILE_EXISTS_RENAME)) {
            $target_file->uri = $uri;
            $target_file->filemime = file_get_mimetype($target_file->uri);
          }
        }
        catch (Exception $e) {
          watchdog_exception('Feeds', $e, nl2br(check_plain($e)));
        }
        break;
      case 'user_name':
        if ($user = user_load_by_name($value)) {
          $target_file->uid = $user->uid;
        }
        else if ($user = $this->user_load_by_realname($value)) {
          $target_file->uid = $user->uid;
        }
        break;
      case 'user_mail':
        if ($user = user_load_by_mail($value)) {
          $target_file->uid = $user->uid;
        }
        break;
      case 'node_usage':
      case 'term_usage':
        $results = array();
        foreach ($value as $usage) {
          // Get the entity using it's feeds guid, add it to the results array.
          $entity_id = db_select('feeds_item', 'fi')
              ->fields('fi', array('entity_id'))
              ->condition('guid', $usage,'=')
              ->execute()
              ->fetchField();
          if (!empty($entity_id)) {
              array_push($results, $entity_id);
          }
        }
        $target_file->$target_element= $results;
        break;
      default:
        parent::setTargetElement($source, $target_file, $target_element, $value);
        break;
    }
  }

  /**
   * Get nid of an existing feed item node if available.
   */
  protected function existingEntityId(FeedsSource $source, FeedsParserResult $result) {
    if ($fid = parent::existingEntityId($source, $result)) {
      return $fid;
    }

    // Iterate through all unique targets and test whether they do already
    // exist in the database.
    $unique_targets = $this->uniqueTargets($source, $result);
    $this->debug($unique_targets, 'existingEntityId');

    foreach ($unique_targets as $target => $value) {
      switch ($target) {
        case 'fid':
          $fid = db_query("SELECT fid FROM {file_managed} WHERE fid = :fid", array(':fid' => $value))->fetchField();
          break;

        case 'filename':
          $fid = db_query("SELECT fid FROM {file_managed} WHERE filename = :filename", array(':filename' => $value))->fetchField();
          break;

        case 'uri':
          $value = trim($value);
          $uri = FALSE;

          // If the media module is present we will use it to match a URI.
          if (function_exists('media_parse_to_uri')) {
            try {
              $uri = media_parse_to_uri($value);
            }
            catch (Exception $e) {
              // TODO: watchdog the exception.
            }
          }
          // Else, do we have a valid preformed URI?
          elseif (file_valid_uri($value)) {
            $uri = $value;
          }
          // Else, just try to use the site's default scheme
          else {
            $uri = file_default_scheme() . '://' . $value;
          }

          if ($uri) {
            $uri = file_stream_wrapper_uri_normalize($uri);
            $fid = db_query("SELECT fid FROM {file_managed} WHERE uri = :uri", array(':uri' => $uri))->fetchField();
          }
          break;
      }
      if ($fid) {
        // Return with the first fid found.
        return $fid;
      }
    }
    return 0;
  }

  protected function debug($item, $source) {
    if (!isset($this->debug)) {
      $debug = isset($this->config['debug']) ? $this->config['debug'] : array();
      $this->debug = array_keys(array_filter($debug));
    }

    if (in_array($source, $this->debug)) {
      $o = '<ul>';
      foreach ($item as $key => $val) {
        $o .= '<li>' . check_plain($key) . ' => ' . check_plain(var_export($val, TRUE)) . '</li>';
      }
      $o .= '</ul>';
      drupal_set_message($source . ':' . $o);
    }
  }

  protected function user_load_by_realname($realname) {
    if (module_exists('realname')) {
      $query = db_select('users', 'u');
      $query->leftJoin('realname', 'r', 'u.uid = r.uid');
      $query->fields('u', array('uid'));
      $query->condition('r.realname', $realname);
      $uid = $query->execute()->fetchField();
      $user = user_load($uid);
      return $user;
    }
  }
}