<?php

/**
 * Define all progress checks provided by the module.
 *
 * @return array
 *   An associative array keyed by unique name of the field. Each check is an
 *   associative array containing:
 *   - name: The internal name of the progress check.
 *   - label: The human readable name of the progress check.
 *   - description: The description of the progress check.
 *   - url: An associative array that describes when and how a link should be
 *     rendered to allow the user to correct the check.
 *   - success_text: The text to display when the check succeeds.
 *   - fail_text: The text to display when the check fails.
 *   - function: The function that actually performs the progress check.
 *   - file_name: The file where that function is implemented.
 *   - required: Boolean determining whether the progress check is required
 *     or not. Is overridden by required_function.
 *   - required_function: Function determining whether the progress check is
 *     required or not. Overrides required.
 */
function devtrac7_field_collection_item_devtrac7_progress_field_checks_info() {
  $destination = current_path();
  $path = explode('/', $_GET['q']);
  $count = count($path);
  if (($count != 2) || $path[0] != 'node' || preg_match('/[0-9]+/',$path[1]) !== 1) {
    return array();
  }
  $nid = $path[1];
  // At the moment we're only using this for the contacts field collection on a
  // location.
  $progress_checks['devtrac7_field_collection_item_edit'] = array(
    'name' => t('devtrac7_field_collection_item_edit'),
    'label' => t('devtrac7_field_collection_item_edit'),
    'description' => 'Edit Contact Details.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Edit Contact Details'),
      'path' => 'modal/field-collection/%/' . $nid . '/edit/%/%ctools_js/go',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => '',
      'contextual' => TRUE,
      'override' => TRUE,
    ),
    'success_text' => 'Contact Edited',
    'fail_text' => 'Could not edit contact.',
    'function' => 'devtrac7_field_collection_item_edit_check',
    'filename' => 'devtrac7_field_collection_item.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  $progress_checks['devtrac7_field_collection_items_delete'] = array(
    'name' => t('devtrac7_field_collection_items_delete'),
    'label' => t('devtrac7_field_collection_items_delete'),
    'description' => 'Delete Contact Details.',
    'finished_condition' => 'none',
    'url' => array(
      'text' => t('Delete Contact'),
      'path' => 'modal/field-collection/%/' . $nid . '/delete/%/%ctools_js/go',
      'attributes' => array(),
      'query' => array(
        'destination' => $destination,
      ),
      'fragment' => '',
      'contextual' => TRUE,
      'override' => TRUE,
    ),
    'success_text' => 'Contact Deleted.',
    'fail_text' => 'Could not delete contact.',
    'function' => 'devtrac7_field_collection_items_delete_check',
    'filename' => 'devtrac7_field_collection_item.inc',
    'required' => TRUE,
    'required_function' => '',
  );
  return $progress_checks;
}

function devtrac7_field_collection_item_edit_check() {
  return TRUE;
}

function devtrac7_field_collection_items_delete_check() {
  return TRUE;
}
