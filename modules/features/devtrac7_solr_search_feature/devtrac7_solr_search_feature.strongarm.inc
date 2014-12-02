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
    'users' => 'users',
    'actionitems' => 'actionitems',
    'actionitems/analyse/csv' => 'actionitems/analyse/csv',
    'actionitems/analyse/kml' => 'actionitems/analyse/kml',
    'actionitems/analyse/feed' => 'actionitems/analyse/feed',
    'statistics/answers' => 'statistics/answers',
    'statistics/analyse/kml' => 'statistics/analyse/kml',
    'statistics/analyse/rss' => 'statistics/analyse/rss',
    'adminunits' => 'adminunits',
    'adminunits/analyse/csv' => 'adminunits/analyse/csv',
    'adminunits/analyse/rss' => 'adminunits/analyse/rss',
    'adminunits/analyse/kml' => 'adminunits/analyse/kml',
    'adminunits/json' => 'adminunits/json',
    'fieldtrips' => 'fieldtrips',
    'fieldtrips/analyse/csv' => 'fieldtrips/analyse/csv',
    'fieldtrips/analyse/kml' => 'fieldtrips/analyse/kml',
    'fieldtrips/analyse/rss' => 'fieldtrips/analyse/rss',
    'images' => 'images',
    'images/analyse/kml' => 'images/analyse/kml',
    'image/analyse/rss' => 'image/analyse/rss',
    'images/analyse/csv' => 'images/analyse/csv',
    'images/grid' => 'images/grid',
    'images/json' => 'images/json',
    'locations' => 'locations',
    'locations/analyse/csv' => 'locations/analyse/csv',
    'locations/analyse/rss' => 'locations/analyse/rss',
    'locations/analyse/kml' => 'locations/analyse/kml',
    'locations/json' => 'locations/json',
    'statistics' => 'statistics',
    'statistics/questions/csv' => 'statistics/questions/csv',
    'sitereports' => 'sitereports',
    'sitereports/analyse/csv' => 'sitereports/analyse/csv',
    'sitereports/analyse/kml' => 'sitereports/analyse/kml',
    'sitereports/analyse/feed' => 'sitereports/analyse/feed',
    'sitereports/json' => 'sitereports/json',
    'sitereports/analyse/csvadmin' => 'sitereports/analyse/csvadmin',
    'admin/devtrac7/taxonomy/edit' => 0,
    'admin/devtrac7/taxonomy/edit/locationtypes' => 0,
    'admin/devtrac7/taxonomy/edit/edit-districts' => 0,
    'admin/devtrac7/quality/reports' => 0,
    'admin/devtrac7/quality/reports/lat-lon' => 0,
    'admin/devtrac7/statistics/reports/monthly' => 0,
    'admin/devtrac7/quality/reports/noplacetype' => 0,
    'admin/devtrac7/quality/reports/unpublished-sitevisits' => 0,
    'admin/devtrac7/quality/reports/ai-no-oecd-codes' => 0,
    'admin/devtrac7/quality/reports/ftr-no-oecd-codes' => 0,
    'admin/devtrac7/quality/reports/sitereports-no-locations' => 0,
    'api/%/fieldtrips' => 0,
    'api/views/tripreports_page' => 0,
    'api/views/currentfieldtrip' => 0,
    'api/views/tripreportlocation' => 0,
    'api/views/actionitems' => 0,
    'api/views/questions' => 0,
    'api/views/other/users' => 0,
    'api/views/vocabulary/oecd' => 0,
    'api/views/vocabulary/placetypes' => 0,
    'api/views/vocabulary/reporttypes' => 0,
    'admin/devtrac7/statistics/reports' => 0,
    'admin/devtrac7/statistics/reports/termcounts' => 0,
    'question/%/%/barchart' => 0,
    'answersbycontext/%/%' => 0,
    'answers/%/%' => 0,
    'statistics/analyse/csv' => 0,
    'taxonomy/term/%' => 0,
    'admin/devtrac7/district-check' => 0,
    'action-items' => 0,
    'field-trip' => 0,
    'node/%/fullreport' => 0,
    'node/%/pretripreport' => 0,
    'dvtrc-maps' => 0,
    'site-reports' => 0,
    'dvtrc_users' => 0,
    'admin/devtrac7/questions/edit' => 0,
    'import/%/log' => 0,
    'node/%/log' => 0,
    'admin/reports/feeds' => 0,
    'oecd-codes' => 0,
    'homepage' => 0,
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
