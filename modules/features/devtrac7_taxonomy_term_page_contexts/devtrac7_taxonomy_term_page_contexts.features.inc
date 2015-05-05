<?php
/**
 * @file
 * devtrac7_taxonomy_term_page_contexts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_taxonomy_term_page_contexts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function devtrac7_taxonomy_term_page_contexts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
