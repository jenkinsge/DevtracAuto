<?php
/**
 * @file
 * devtrac7_solr_search_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_solr_search_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purl_method_search_api_key';
  $strongarm->value = array(
    'devtrac7_solr_user_view' => 'devtrac7_solr_user_view',
    'devtrac7_solr_user_view:page' => 'devtrac7_solr_user_view:page',
    'devtrac_sitevisit_answers' => 'devtrac_sitevisit_answers',
    'devtrac_sitevisit_answers:page_1' => 'devtrac_sitevisit_answers:page_1',
    'devtrac_solr_view_actionitems' => 'devtrac_solr_view_actionitems',
    'devtrac_solr_view_actionitems:list' => 'devtrac_solr_view_actionitems:list',
    'devtrac_solr_view_answers' => 'devtrac_solr_view_answers',
    'devtrac_solr_view_answers:graphs' => 'devtrac_solr_view_answers:graphs',
    'devtrac_solr_view_districts' => 'devtrac_solr_view_districts',
    'devtrac_solr_view_districts:map' => 'devtrac_solr_view_districts:map',
    'devtrac_solr_view_fieldtrips' => 'devtrac_solr_view_fieldtrips',
    'devtrac_solr_view_fieldtrips:list' => 'devtrac_solr_view_fieldtrips:list',
    'devtrac_solr_view_images' => 'devtrac_solr_view_images',
    'devtrac_solr_view_images:page_1' => 'devtrac_solr_view_images:page_1',
    'devtrac_solr_view_images:page_2' => 'devtrac_solr_view_images:page_2',
    'devtrac_solr_view_locations' => 'devtrac_solr_view_locations',
    'devtrac_solr_view_locations:map' => 'devtrac_solr_view_locations:map',
    'devtrac_solr_view_questions' => 'devtrac_solr_view_questions',
    'devtrac_solr_view_questions:stats' => 'devtrac_solr_view_questions:stats',
    'devtrac_solr_view_sitevisits' => 'devtrac_solr_view_sitevisits',
    'devtrac_solr_view_sitevisits:map' => 'devtrac_solr_view_sitevisits:map',
    'admin_taxonomy_view' => 0,
    'admin_taxonomy_view:page_sector_codes' => 0,
    'admin_taxonomy_view:page_location_types' => 0,
    'admin_taxonomy_view:page_admin_units' => 0,
    'admin_view' => 0,
    'admin_view:orphans' => 0,
    'admin_view:latlon' => 0,
    'admin_view:monthly_report' => 0,
    'admin_view:location_no_type' => 0,
    'admin_view:unpub_sitereports' => 0,
    'admin_view:action_no_sector' => 0,
    'admin_view:fieldtrip_nosector' => 0,
    'admin_view:sitereports_nolocation' => 0,
    'api_fieldtrips' => 0,
    'api_fieldtrips:page_1' => 0,
    'api_fieldtrips:sitevisits' => 0,
    'api_fieldtrips:current_trip' => 0,
    'api_fieldtrips:place' => 0,
    'api_fieldtrips:actionitems' => 0,
    'api_questions' => 0,
    'api_questions:questions' => 0,
    'api_user' => 0,
    'api_user:users' => 0,
    'api_vocabularies' => 0,
    'api_vocabularies:oecd' => 0,
    'api_vocabularies:placetypes' => 0,
    'api_vocabularies:sitereporttypes' => 0,
    'devtrac_admin_taxonomy' => 0,
    'devtrac_admin_taxonomy:page_location_types' => 0,
    'devtrac_admin_taxonomy:term_counts' => 0,
    'devtrac_answers_barcharts' => 0,
    'devtrac_answers_barcharts:answer_barchart_page' => 0,
    'devtrac_answers_piecharts' => 0,
    'devtrac_answers_piecharts:page_1' => 0,
    'devtrac_location_statistics' => 0,
    'devtrac_solr_view_districts:json' => 0,
    'devtrac_solr_view_images:json' => 0,
    'devtrac_solr_view_locations:json' => 0,
    'devtrac_solr_view_sitevisits:json' => 0,
    'devtrac_zoom_distict_edit_pages' => 0,
    'district' => 0,
    'district:page_1' => 0,
    'district_check' => 0,
    'district_check:page' => 0,
    'dvtrc_action_items' => 0,
    'dvtrc_action_items:page' => 0,
    'dvtrc_field_trip' => 0,
    'dvtrc_field_trip:page' => 0,
    'dvtrc_field_trip:page_1' => 0,
    'dvtrc_field_trip:page_2' => 0,
    'dvtrc_locations' => 0,
    'dvtrc_maps' => 0,
    'dvtrc_maps:page' => 0,
    'dvtrc_site_visits' => 0,
    'dvtrc_site_visits:page' => 0,
    'dvtrc_user' => 0,
    'dvtrc_user:page_1' => 0,
    'edit_questions' => 0,
    'edit_questions:edit_questions_page' => 0,
    'feeds_log' => 0,
    'feeds_log:page_1' => 0,
    'feeds_log:page_2' => 0,
    'feeds_log:page_3' => 0,
    'inbox' => 0,
    'media_default' => 0,
    'oecd_sector_code' => 0,
    'oecd_sector_code:page_1' => 0,
    'site_reports' => 0,
    'site_reports:recent_site_reports_map' => 0,
  );
  $export['purl_method_search_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purl_method_views_modes';
  $strongarm->value = 'querystring';
  $export['purl_method_views_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purl_method_views_modes_key';
  $strongarm->value = 'display';
  $export['purl_method_views_modes_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'purl_types';
  $strongarm->value = array(
    'querystring' => 'querystring',
    'path' => 0,
    'pair' => 0,
    'subdomain' => 0,
    'domain' => 0,
    'extension' => 0,
    'useragent' => 0,
    'purl_devtrac' => 'purl_devtrac',
    'purl_search_api' => 0,
  );
  $export['purl_types'] = $strongarm;

  return $export;
}
