<?php
/**
 * @file
 * devtrac_oecd_code_importer_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function devtrac_oecd_code_importer_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sector_icon_importer';
  $feeds_importer->config = array(
    'name' => 'Sector Icon importer',
    'description' => 'Imports Sector Icons',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExXml',
      'config' => array(
        'context' => array(
          'value' => '/codelist/Sector',
        ),
        'sources' => array(
          'code' => array(
            'name' => 'code',
            'value' => 'code',
            'raw' => 0,
            'debug' => 0,
            'weight' => '1',
          ),
          'name' => array(
            'name' => 'name',
            'value' => 'name',
            'raw' => 0,
            'debug' => 0,
            'weight' => '2',
          ),
          'description' => array(
            'name' => 'description',
            'value' => 'description',
            'raw' => 0,
            'debug' => 0,
            'weight' => '3',
          ),
          'category' => array(
            'name' => 'category',
            'value' => 'category',
            'raw' => 0,
            'debug' => 0,
            'weight' => '4',
          ),
          'category_name' => array(
            'name' => 'category-name',
            'value' => 'category-name',
            'raw' => 0,
            'debug' => 0,
            'weight' => '5',
          ),
          'category_description' => array(
            'name' => 'category-description',
            'value' => 'category-description',
            'raw' => 0,
            'debug' => 0,
            'weight' => '6',
          ),
          'url' => array(
            'name' => 'url',
            'value' => 'code',
            'raw' => 0,
            'debug' => 1,
            'weight' => '7',
          ),
        ),
        'display_errors' => 1,
        'debug_mode' => 1,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'use_tidy' => FALSE,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'code',
            'target' => 'field_oecd_code',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'name',
            'target' => 'name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'description',
            'target' => 'description',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'category',
            'target' => 'parentguid',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'code',
            'target' => 'guid',
            'unique' => 1,
          ),
          5 => array(
            'source' => 'url',
            'target' => 'field_term_icon',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'vocabulary_8',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sector_icon_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sector_icon_importer_level_one';
  $feeds_importer->config = array(
    'name' => 'Sector Icon importer Level One',
    'description' => 'Imports the parents of Sector Icons',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExXml',
      'config' => array(
        'context' => array(
          'value' => '/codelist/Sector',
        ),
        'sources' => array(
          'code' => array(
            'name' => 'code',
            'value' => 'category',
            'raw' => 0,
            'debug' => 0,
            'weight' => '1',
          ),
          'category_name' => array(
            'name' => 'category-name',
            'value' => 'category-name',
            'raw' => 0,
            'debug' => 0,
            'weight' => '5',
          ),
          'category_description' => array(
            'name' => 'category-description',
            'value' => 'category-description',
            'raw' => 0,
            'debug' => 0,
            'weight' => '6',
          ),
          'url' => array(
            'name' => 'url',
            'value' => 'category',
            'raw' => 0,
            'debug' => 1,
            'weight' => '7',
          ),
        ),
        'display_errors' => 1,
        'debug_mode' => 1,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'use_tidy' => FALSE,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'code',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'code',
            'target' => 'field_oecd_code',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'category_name',
            'target' => 'name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'category_description',
            'target' => 'description',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'url',
            'target' => 'field_term_icon',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'vocabulary_8',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sector_icon_importer_level_one'] = $feeds_importer;

  return $export;
}
