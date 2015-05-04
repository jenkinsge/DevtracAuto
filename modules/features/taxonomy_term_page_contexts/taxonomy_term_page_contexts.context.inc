<?php
/**
 * @file
 * taxonomy_term_page_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function taxonomy_term_page_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_term_action_item_tag';
  $context->description = 'Action Item Tag pages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'action_item_tags' => 'action_item_tags',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-action_item_tags-block_5' => array(
          'module' => 'views',
          'delta' => 'action_item_tags-block_5',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'views-action_item_tags-block_1' => array(
          'module' => 'views',
          'delta' => 'action_item_tags-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-action_item_tags-block_3' => array(
          'module' => 'views',
          'delta' => 'action_item_tags-block_3',
          'region' => 'content',
          'weight' => '-9',
        ),
        'quicktabs-action_item_tag' => array(
          'module' => 'quicktabs',
          'delta' => 'action_item_tag',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-action_item_tags-block_2' => array(
          'module' => 'views',
          'delta' => 'action_item_tags-block_2',
          'region' => 'postscript_first',
          'weight' => '-9',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Action Item Tag pages');
  t('taxonomy');
  $export['context_term_action_item_tag'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_term_department';
  $context->description = 'Department pages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'vocabulary_4' => 'vocabulary_4',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-department-block_5' => array(
          'module' => 'views',
          'delta' => 'department-block_5',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'views-department-block_1' => array(
          'module' => 'views',
          'delta' => 'department-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-department-block_3' => array(
          'module' => 'views',
          'delta' => 'department-block_3',
          'region' => 'content',
          'weight' => '-9',
        ),
        'quicktabs-department' => array(
          'module' => 'quicktabs',
          'delta' => 'department',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-department-block_2' => array(
          'module' => 'views',
          'delta' => 'department-block_2',
          'region' => 'postscript_first',
          'weight' => '-8',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Department pages');
  t('taxonomy');
  $export['context_term_department'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_term_district_category';
  $context->description = 'District Category(Tags) pages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'district_category' => 'district_category',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-district_category-block_5' => array(
          'module' => 'views',
          'delta' => 'district_category-block_5',
          'region' => 'highlighted',
          'weight' => '-6',
        ),
        'views-district_category-block_1' => array(
          'module' => 'views',
          'delta' => 'district_category-block_1',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-district_category-block_3' => array(
          'module' => 'views',
          'delta' => 'district_category-block_3',
          'region' => 'content',
          'weight' => '-3',
        ),
        'quicktabs-district_category' => array(
          'module' => 'quicktabs',
          'delta' => 'district_category',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'views-district_category-block_2' => array(
          'module' => 'views',
          'delta' => 'district_category-block_2',
          'region' => 'postscript_first',
          'weight' => '-8',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('District Category(Tags) pages');
  t('taxonomy');
  $export['context_term_district_category'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_term_field_trip_tag';
  $context->description = 'Field Trip Tag pages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'fieldtrip_tags' => 'fieldtrip_tags',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-field_trip_tags-block_5' => array(
          'module' => 'views',
          'delta' => 'field_trip_tags-block_5',
          'region' => 'highlighted',
          'weight' => '-8',
        ),
        'views-field_trip_tags-block_1' => array(
          'module' => 'views',
          'delta' => 'field_trip_tags-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-field_trip_tags-block_3' => array(
          'module' => 'views',
          'delta' => 'field_trip_tags-block_3',
          'region' => 'content',
          'weight' => '-7',
        ),
        'quicktabs-field_trips_tag' => array(
          'module' => 'quicktabs',
          'delta' => 'field_trips_tag',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-field_trip_tags-block_2' => array(
          'module' => 'views',
          'delta' => 'field_trip_tags-block_2',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-dvtrc_field_trip-block_15' => array(
          'module' => 'views',
          'delta' => 'dvtrc_field_trip-block_15',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Field Trip Tag pages');
  t('taxonomy');
  $export['context_term_field_trip_tag'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_term_function';
  $context->description = 'Function pages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'vocabulary_5' => 'vocabulary_5',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-function-block_5' => array(
          'module' => 'views',
          'delta' => 'function-block_5',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'views-department-block_1' => array(
          'module' => 'views',
          'delta' => 'department-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-department-block_3' => array(
          'module' => 'views',
          'delta' => 'department-block_3',
          'region' => 'content',
          'weight' => '-9',
        ),
        'quicktabs-function' => array(
          'module' => 'quicktabs',
          'delta' => 'function',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-function-block_2' => array(
          'module' => 'views',
          'delta' => 'function-block_2',
          'region' => 'postscript_first',
          'weight' => '-7',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Function pages');
  t('taxonomy');
  $export['context_term_function'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_term_image_tag';
  $context->description = 'Image Tag pages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'image_tags' => 'image_tags',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-image_tags-block_5' => array(
          'module' => 'views',
          'delta' => 'image_tags-block_5',
          'region' => 'highlighted',
          'weight' => '-7',
        ),
        'views-image_tags-block_1' => array(
          'module' => 'views',
          'delta' => 'image_tags-block_1',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-image_tags-block_3' => array(
          'module' => 'views',
          'delta' => 'image_tags-block_3',
          'region' => 'content',
          'weight' => '-5',
        ),
        'quicktabs-images_tag' => array(
          'module' => 'quicktabs',
          'delta' => 'images_tag',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-image_tags-block_2' => array(
          'module' => 'views',
          'delta' => 'image_tags-block_2',
          'region' => 'postscript_first',
          'weight' => '-9',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Image Tag pages');
  t('taxonomy');
  $export['context_term_image_tag'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_term_location_type';
  $context->description = 'Location Type pages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'vocabulary_1' => 'vocabulary_1',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-location_type-block_5' => array(
          'module' => 'views',
          'delta' => 'location_type-block_5',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'views-location_type-block_1' => array(
          'module' => 'views',
          'delta' => 'location_type-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-location_type-block_3' => array(
          'module' => 'views',
          'delta' => 'location_type-block_3',
          'region' => 'content',
          'weight' => '-7',
        ),
        'quicktabs-location_type' => array(
          'module' => 'quicktabs',
          'delta' => 'location_type',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-location_type-block_2' => array(
          'module' => 'views',
          'delta' => 'location_type-block_2',
          'region' => 'postscript_first',
          'weight' => '-7',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Location Type pages');
  t('taxonomy');
  $export['context_term_location_type'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_term_purpose';
  $context->description = 'Purpose pages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'vocabulary_9' => 'vocabulary_9',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-purpose-block_5' => array(
          'module' => 'views',
          'delta' => 'purpose-block_5',
          'region' => 'highlighted',
          'weight' => '-7',
        ),
        'views-purpose-block_1' => array(
          'module' => 'views',
          'delta' => 'purpose-block_1',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-purpose-block_3' => array(
          'module' => 'views',
          'delta' => 'purpose-block_3',
          'region' => 'content',
          'weight' => '-5',
        ),
        'quicktabs-field_trips_tag' => array(
          'module' => 'quicktabs',
          'delta' => 'field_trips_tag',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-purpose-block_2' => array(
          'module' => 'views',
          'delta' => 'purpose-block_2',
          'region' => 'postscript_first',
          'weight' => '-9',
        ),
        'views-dvtrc_field_trip-block_16' => array(
          'module' => 'views',
          'delta' => 'dvtrc_field_trip-block_16',
          'region' => 'postscript_second',
          'weight' => '-9',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Purpose pages');
  t('taxonomy');
  $export['context_term_purpose'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_term_site_report_type';
  $context->description = 'Site Report pages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'vocabulary_7' => 'vocabulary_7',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-site_report_type-block_5' => array(
          'module' => 'views',
          'delta' => 'site_report_type-block_5',
          'region' => 'highlighted',
          'weight' => '-9',
        ),
        'views-site_report_type-block_1' => array(
          'module' => 'views',
          'delta' => 'site_report_type-block_1',
          'region' => 'content',
          'weight' => '-6',
        ),
        'views-site_report_type-block_3' => array(
          'module' => 'views',
          'delta' => 'site_report_type-block_3',
          'region' => 'content',
          'weight' => '-5',
        ),
        'quicktabs-site_report_type' => array(
          'module' => 'quicktabs',
          'delta' => 'site_report_type',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-site_report_type-block_2' => array(
          'module' => 'views',
          'delta' => 'site_report_type-block_2',
          'region' => 'postscript_first',
          'weight' => '-9',
        ),
        'views-dvtrc_site_visits-block_24' => array(
          'module' => 'views',
          'delta' => 'dvtrc_site_visits-block_24',
          'region' => 'postscript_second',
          'weight' => '-9',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site Report pages');
  t('taxonomy');
  $export['context_term_site_report_type'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_term_tag';
  $context->description = 'Tag pages';
  $context->tag = 'taxonomy';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'tags' => 'tags',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-tags-block_5' => array(
          'module' => 'views',
          'delta' => 'tags-block_5',
          'region' => 'highlighted',
          'weight' => '-8',
        ),
        'views-tags-block_1' => array(
          'module' => 'views',
          'delta' => 'tags-block_1',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-tags-block_3' => array(
          'module' => 'views',
          'delta' => 'tags-block_3',
          'region' => 'content',
          'weight' => '-7',
        ),
        'quicktabs-tags' => array(
          'module' => 'quicktabs',
          'delta' => 'tags',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'delta_blocks-breadcrumb' => array(
          'module' => 'delta_blocks',
          'delta' => 'breadcrumb',
          'region' => 'breadcrumb',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Tag pages');
  t('taxonomy');
  $export['context_term_tag'] = $context;

  return $export;
}
