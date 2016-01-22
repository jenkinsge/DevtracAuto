<?php
/**
 * @file
 * devtrac_2_devtrac_feeds_importers.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function devtrac_2_devtrac_feeds_importers_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_detvrac_question_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Detvrac Question Import',
    'description' => 'Imports questions from another Devtrac installation csv export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Question',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'The type of question.',
            'target' => 'questionnaire_question_type',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Options',
            'target' => 'questionnaire_question_options',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Questions on',
            'target' => 'taxonomy_vocabulary_1',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'Sector',
            'target' => 'taxonomy_vocabulary_8',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'questionnaire_question',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_detvrac_question_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_devtrac_action_item_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Devtrac Action Item Import',
    'description' => 'Imports Action Items from another Devtrac installation csv export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'Sector',
            'target' => 'taxonomy_vocabulary_8',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'Status',
            'target' => 'field_actionitem_status',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Due Date',
            'target' => 'field_actionitem_due_date:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Task',
            'target' => 'field_actionitem_followuptask',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Tags (Categories)',
            'target' => 'field_action_items_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'Location UUID',
            'target' => 'field_actionitem_resp_place',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Sitereport UUID',
            'target' => 'field_actionitem_ftreportitem',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Author Email',
            'target' => 'user_mail',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Responsible UUID',
            'target' => 'field_actionitem_responsible',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Priority',
            'target' => 'field_actionitem_severity',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Date created',
            'target' => 'created',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'actionitem',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_devtrac_action_item_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_devtrac_field_trip_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Devtrac Field Trip Import',
    'description' => 'Imports Field Trips from another Devtrac installation csv export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'Narrative',
            'target' => 'field_fieldtrip_narrative',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Public Summary',
            'target' => 'field_fieldtrip_public_summary',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Approval Date',
            'target' => 'field_fieldtrip_approval_date:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Status',
            'target' => 'field_fieldtrip_status',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Start Date',
            'target' => 'field_fieldtrip_start_end_date:start',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'End Date',
            'target' => 'field_fieldtrip_start_end_date:end',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Locations',
            'target' => 'field_fieldtrip_places:label',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Author Email',
            'target' => 'user_mail',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'User UUID',
            'target' => 'field_fieldtrip_user',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Approved By UUID',
            'target' => 'field_fieldtrip_approved_by',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Tags',
            'target' => 'field_fieldtriptags',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'fieldtrip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_devtrac_field_trip_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_devtrac_image_importer';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Devtrac Image Importer',
    'description' => 'Imports images from another Devtrac installation csv export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'DevtracFileProcessor',
      'config' => array(
        'bundle' => 'image',
        'author' => 0,
        'authorize' => 1,
        'debug' => array(
          'newEntity' => 0,
          'entityLoad' => 0,
          'entitySave' => 0,
          'setTargetElement' => 0,
          'existingEntityId' => 0,
        ),
        'mappings' => array(
          0 => array(
            'source' => 'File UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'File Name',
            'target' => 'filename',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Title',
            'target' => 'field_file_image_title_text',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Alt Text',
            'target' => 'field_file_image_alt_text',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Site Visit UUID',
            'target' => 'node_usage',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Districts',
            'target' => 'taxonomy_vocabulary_6',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Sectors',
            'target' => 'taxonomy_vocabulary_8',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Date Visited',
            'target' => 'field_ftritem_date_visited:start',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Lat-Long',
            'target' => 'field_ftritem_lat_long:combined',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Location Type',
            'target' => 'taxonomy_vocabulary_1',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Owner',
            'target' => 'user_name',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'File URL',
            'target' => 'uri',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => NULL,
        'skip_hash_check' => 0,
        'allowed_extensions' => 'png, gif, jpg, jpeg',
        'remote_schemes' => 'http, https',
        'file_destination' => 'public://',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_devtrac_image_importer'] = $feeds_importer;


  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_devtrac_location_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Devtrac Location Import',
    'description' => 'Imports Locations from another Devtrac installation csv export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'Location Type',
            'target' => 'taxonomy_vocabulary_1',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'Author Email',
            'target' => 'user_mail',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Location Tags',
            'target' => 'field_place_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'Lat-Long (WKT)',
            'target' => 'field_place_lat_long:wkt',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'place',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_devtrac_location_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_devtrac_questionnaire_answer';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Devtrac Questionnaire Answer Import',
    'description' => 'Imports questionnaire answers from another Devtrac installation csv export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsQuestionnaireAnswerProcessor',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'Answer ID',
            'target' => 'id',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'Answer',
            'target' => 'answer',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Answer Text',
            'target' => 'answertext',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Answer Number',
            'target' => 'answernumber',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Date created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Date changed',
            'target' => 'changed',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Recepient UUID',
            'target' => 'recipient',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Recipient Type',
            'target' => 'recipient_type',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Question UUID',
            'target' => 'question',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Questionnaire UUID',
            'target' => 'questionnaire_id',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Context UUID',
            'target' => 'context_id',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Context Type',
            'target' => 'context_type',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Submission GUID',
            'target' => 'sid',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Answer GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'questionnaire_answer',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_devtrac_questionnaire_answer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_devtrac_questionnaire_submission';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Devtrac Questionnaire Submission Import',
    'description' => 'Imports questionnaire submissions from another Devtrac installation csv export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsQuestionnaireSubmissionProcessor',
      'config' => array(
        'mappings' => array(
          0 => array(
            'source' => 'Submission GUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Submission ID',
            'target' => 'sid',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'Context UUID',
            'target' => 'context_id',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Questionnaire UUID',
            'target' => 'questionnaire_id',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Recepient UUID',
            'target' => 'recipient',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Date created',
            'target' => 'created',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Date changed',
            'target' => 'changed',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Context Type',
            'target' => 'context_type',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Recipient Type',
            'target' => 'recipient_type',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'QuestionnaireSubmission',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_devtrac_questionnaire_submission'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_devtrac_site_reports_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Devtrac Site Reports Import',
    'description' => 'Imports Site Reports from another Devtrac installation csv export',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Sector',
            'target' => 'taxonomy_vocabulary_8',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'Status',
            'target' => 'field_ftritem_status',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Location Type',
            'target' => 'taxonomy_vocabulary_1',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'Site Report Type',
            'target' => 'taxonomy_vocabulary_7',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'Field Trip',
            'target' => 'entityreference:field_ftritem_field_trip',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Site Visit Lat',
            'target' => 'field_ftritem_lat_long:lat',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Site Visit Lon',
            'target' => 'field_ftritem_lat_long:lon',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Visited on',
            'target' => 'field_ftritem_date_visited:start',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Location UUID',
            'target' => 'field_ftritem_place',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Summary',
            'target' => 'field_ftritem_public_summary',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Field Trip UUID',
            'target' => 'field_ftritem_field_trip',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Notes',
            'target' => 'field_ftritem_narrative',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Author Email',
            'target' => 'user_mail',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'User UUID',
            'target' => 'field_ftritem_user',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'Purpose',
            'target' => 'field_ftritem_purpose',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          17 => array(
            'source' => 'Site Report Tags',
            'target' => 'field_ftritem_tags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ftritem',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_devtrac_site_reports_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_2_devtrac_user_import';
  $feeds_importer->config = array(
    'name' => 'Devtrac 2 Devtrac User Import',
    'description' => 'Imports Users from another Devtrac installation csv export.',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          5 => '5',
          3 => 0,
          4 => 0,
          6 => 0,
          7 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Username',
            'target' => 'name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'Title',
            'target' => 'field_user_title',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Function',
            'target' => 'taxonomy_vocabulary_5',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'Academic Degree(s)',
            'target' => 'field_user_degree',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Department',
            'target' => 'taxonomy_vocabulary_4',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'First Name',
            'target' => 'field_user_firstname',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Surname',
            'target' => 'field_user_surname',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'About Me',
            'target' => 'field_user_aboutme',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Admin Units',
            'target' => 'taxonomy_vocabulary_6',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          11 => array(
            'source' => 'Sectors',
            'target' => 'taxonomy_vocabulary_8',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          12 => array(
            'source' => 'Manager UUID',
            'target' => 'field_user_superior',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Status',
            'target' => 'status',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_2_devtrac_user_import'] = $feeds_importer;

  return $export;
}
