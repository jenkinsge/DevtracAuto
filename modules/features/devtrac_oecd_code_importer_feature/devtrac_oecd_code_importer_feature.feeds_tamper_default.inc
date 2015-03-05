<?php
/**
 * @file
 * devtrac_oecd_code_importer_feature.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function devtrac_oecd_code_importer_feature_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sector_icon_importer-url-absolute_url';
  $feeds_tamper->importer = 'sector_icon_importer';
  $feeds_tamper->source = 'url';
  $feeds_tamper->plugin_id = 'absolute_url';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Make URLs absolute';
  $export['sector_icon_importer-url-absolute_url'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sector_icon_importer-url-rewrite';
  $feeds_tamper->importer = 'sector_icon_importer';
  $feeds_tamper->source = 'url';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'profiles/devtrac/themes/devtrac_classic/icons/sectors/[code].png',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Rewrite';
  $export['sector_icon_importer-url-rewrite'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sector_icon_importer_level_one-url-absolute_url';
  $feeds_tamper->importer = 'sector_icon_importer_level_one';
  $feeds_tamper->source = 'url';
  $feeds_tamper->plugin_id = 'absolute_url';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Make URLs absolute';
  $export['sector_icon_importer_level_one-url-absolute_url'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'sector_icon_importer_level_one-url-rewrite';
  $feeds_tamper->importer = 'sector_icon_importer_level_one';
  $feeds_tamper->source = 'url';
  $feeds_tamper->plugin_id = 'rewrite';
  $feeds_tamper->settings = array(
    'text' => 'profiles/devtrac/themes/devtrac_classic/icons/sectors/[url].png',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Rewrite';
  $export['sector_icon_importer_level_one-url-rewrite'] = $feeds_tamper;

  return $export;
}
