<?php
/**
 * @file
 * devtrac_frontpage_sitereports_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac_frontpage_sitereports_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
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
function devtrac_frontpage_sitereports_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function devtrac_frontpage_sitereports_feature_image_default_styles() {
  $styles = array();

  // Exported image style: teaser_thumbnail_image.
  $styles['teaser_thumbnail_image'] = array(
    'label' => 'Teaser Thumbnail Image',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
