<?php
/**
 * @file
 * devtrac7_maps.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_maps_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function devtrac7_maps_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function devtrac7_maps_image_default_styles() {
  $styles = array();

  // Exported image style: devtrac_oecd_icons_bw.
  $styles['devtrac_oecd_icons_bw'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 2,
      ),
    ),
    'label' => 'devtrac_oecd_icons_bw',
  );

  // Exported image style: devtrac_oecd_icons_bw_small.
  $styles['devtrac_oecd_icons_bw_small'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 16,
          'height' => 16,
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 2,
      ),
    ),
    'label' => 'devtrac_oecd_icons_bw_small',
  );

  // Exported image style: devtrac_oecd_icons_color.
  $styles['devtrac_oecd_icons_color'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'devtrac_oecd_icons_color',
  );

  // Exported image style: devtrac_oecd_icons_color_small.
  $styles['devtrac_oecd_icons_color_small'] = array(
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 16,
          'height' => 16,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'devtrac_oecd_icons_color_small',
  );

  return $styles;
}
