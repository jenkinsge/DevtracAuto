<?php
/**
 * @file
 * devtrac7_theme_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_theme_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "pane" && $api == "pane") {
    return array("version" => "2");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function devtrac7_theme_feature_image_default_styles() {
  $styles = array();

  // Exported image style: map-pop-image.
  $styles['map-pop-image'] = array(
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'map-pop-image',
  );

  // Exported image style: slideshow_thumbnail.
  $styles['slideshow_thumbnail'] = array(
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 55,
          'height' => 45,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'slideshow_thumbnail',
  );

  // Exported image style: user_profile_img.
  $styles['user_profile_img'] = array(
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'user_profile_img',
  );

  return $styles;
}
