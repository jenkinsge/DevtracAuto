<?php
/**
 * @file
 * devtrac_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac_frontpage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function devtrac_frontpage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
