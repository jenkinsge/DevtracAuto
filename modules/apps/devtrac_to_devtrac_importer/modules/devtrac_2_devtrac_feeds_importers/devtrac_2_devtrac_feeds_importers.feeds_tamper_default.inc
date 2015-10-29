<?php
/**
 * @file
 * devtrac_2_devtrac_feeds_importers.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function devtrac_2_devtrac_feeds_importers_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_detvrac_question_import-options-explode';
  $feeds_tamper->importer = 'devtrac_2_detvrac_question_import';
  $feeds_tamper->source = 'Options';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_detvrac_question_import-options-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_detvrac_question_import-options-trim';
  $feeds_tamper->importer = 'devtrac_2_detvrac_question_import';
  $feeds_tamper->source = 'Options';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['devtrac_2_detvrac_question_import-options-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_detvrac_question_import-questions_on-explode';
  $feeds_tamper->importer = 'devtrac_2_detvrac_question_import';
  $feeds_tamper->source = 'Questions on';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_detvrac_question_import-questions_on-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_detvrac_question_import-questions_on-trim';
  $feeds_tamper->importer = 'devtrac_2_detvrac_question_import';
  $feeds_tamper->source = 'Questions on';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['devtrac_2_detvrac_question_import-questions_on-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_detvrac_question_import-sector-explode';
  $feeds_tamper->importer = 'devtrac_2_detvrac_question_import';
  $feeds_tamper->source = 'Sector';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_detvrac_question_import-sector-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_detvrac_question_import-sector-trim';
  $feeds_tamper->importer = 'devtrac_2_detvrac_question_import';
  $feeds_tamper->source = 'Sector';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['devtrac_2_detvrac_question_import-sector-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_action_item_import-responsible-explode';
  $feeds_tamper->importer = 'devtrac_2_devtrac_action_item_import';
  $feeds_tamper->source = 'Responsible';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_devtrac_action_item_import-responsible-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_action_item_import-responsible-trim';
  $feeds_tamper->importer = 'devtrac_2_devtrac_action_item_import';
  $feeds_tamper->source = 'Responsible';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['devtrac_2_devtrac_action_item_import-responsible-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_action_item_import-responsible_uuid-explode';
  $feeds_tamper->importer = 'devtrac_2_devtrac_action_item_import';
  $feeds_tamper->source = 'Responsible UUID';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_devtrac_action_item_import-responsible_uuid-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_action_item_import-responsible_uuid-trim';
  $feeds_tamper->importer = 'devtrac_2_devtrac_action_item_import';
  $feeds_tamper->source = 'Responsible UUID';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['devtrac_2_devtrac_action_item_import-responsible_uuid-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_action_item_import-sector-explode';
  $feeds_tamper->importer = 'devtrac_2_devtrac_action_item_import';
  $feeds_tamper->source = 'Sector';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_devtrac_action_item_import-sector-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_action_item_import-tags__categories_-explode';
  $feeds_tamper->importer = 'devtrac_2_devtrac_action_item_import';
  $feeds_tamper->source = 'Tags (Categories)';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_devtrac_action_item_import-tags__categories_-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_action_item_import-tags__categories_-trim';
  $feeds_tamper->importer = 'devtrac_2_devtrac_action_item_import';
  $feeds_tamper->source = 'Tags (Categories)';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['devtrac_2_devtrac_action_item_import-tags__categories_-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_field_trip_import-tags-explode';
  $feeds_tamper->importer = 'devtrac_2_devtrac_field_trip_import';
  $feeds_tamper->source = 'Tags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_devtrac_field_trip_import-tags-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_field_trip_import-tags-trim';
  $feeds_tamper->importer = 'devtrac_2_devtrac_field_trip_import';
  $feeds_tamper->source = 'Tags';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['devtrac_2_devtrac_field_trip_import-tags-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_location_import-location_tags-explode';
  $feeds_tamper->importer = 'devtrac_2_devtrac_location_import';
  $feeds_tamper->source = 'Location Tags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_devtrac_location_import-location_tags-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_location_import-location_tags-trim';
  $feeds_tamper->importer = 'devtrac_2_devtrac_location_import';
  $feeds_tamper->source = 'Location Tags';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['devtrac_2_devtrac_location_import-location_tags-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_site_reports_import-purpose-explode';
  $feeds_tamper->importer = 'devtrac_2_devtrac_site_reports_import';
  $feeds_tamper->source = 'Purpose';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_devtrac_site_reports_import-purpose-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_site_reports_import-purpose-trim';
  $feeds_tamper->importer = 'devtrac_2_devtrac_site_reports_import';
  $feeds_tamper->source = 'Purpose';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['devtrac_2_devtrac_site_reports_import-purpose-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_site_reports_import-sector-explode';
  $feeds_tamper->importer = 'devtrac_2_devtrac_site_reports_import';
  $feeds_tamper->source = 'Sector';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_devtrac_site_reports_import-sector-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_site_reports_import-sector-trim';
  $feeds_tamper->importer = 'devtrac_2_devtrac_site_reports_import';
  $feeds_tamper->source = 'Sector';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['devtrac_2_devtrac_site_reports_import-sector-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_site_reports_import-site_report_tags-explode';
  $feeds_tamper->importer = 'devtrac_2_devtrac_site_reports_import';
  $feeds_tamper->source = 'Site Report Tags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_devtrac_site_reports_import-site_report_tags-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_site_reports_import-site_report_tags-trim';
  $feeds_tamper->importer = 'devtrac_2_devtrac_site_reports_import';
  $feeds_tamper->source = 'Site Report Tags';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['devtrac_2_devtrac_site_reports_import-site_report_tags-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_user_import-admin_units-explode';
  $feeds_tamper->importer = 'devtrac_2_devtrac_user_import';
  $feeds_tamper->source = 'Admin Units';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_devtrac_user_import-admin_units-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_user_import-sectors-explode';
  $feeds_tamper->importer = 'devtrac_2_devtrac_user_import';
  $feeds_tamper->source = 'Sectors';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Explode';
  $export['devtrac_2_devtrac_user_import-sectors-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'devtrac_2_devtrac_user_import-sectors-trim';
  $feeds_tamper->importer = 'devtrac_2_devtrac_user_import';
  $feeds_tamper->source = 'Sectors';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['devtrac_2_devtrac_user_import-sectors-trim'] = $feeds_tamper;

  return $export;
}
