<?php
/**
 * @file
 * devtrac7_views_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac7_views_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function devtrac7_views_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function devtrac7_views_feature_image_default_styles() {
  $styles = array();

  // Exported image style: gallery.
  $styles['gallery'] = array(
    'label' => 'gallery',
    'effects' => array(
      1 => array(
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1382, 992, 768, 480',
          'mobile_first' => 1,
          'height' => '',
          'width' => 1382,
          'upscale' => '',
        ),
        'weight' => -10,
      ),
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 200,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: gallery_popup_images.
  $styles['gallery_popup_images'] = array(
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'gallery_popup_images',
  );

  // Exported image style: map_icon.
  $styles['map_icon'] = array(
    'label' => 'map_icon',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 24,
          'height' => 24,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: map_icon_bw.
  $styles['map_icon_bw'] = array(
    'label' => 'map_icon_bw',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 24,
          'height' => 24,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: print_thumbnail.
  $styles['print_thumbnail'] = array(
    'label' => 'print_thumbnail',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 182,
          'height' => 150,
        ),
        'weight' => 1,
      ),
      5 => array(
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: user_comment_img.
  $styles['user_comment_img'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
      9 => array(
        'name' => 'adaptive_image',
        'data' => array(
          'resolutions' => '1382, 992, 768, 480',
          'mobile_first' => 1,
          'height' => '',
          'width' => 1382,
          'upscale' => '',
        ),
        'weight' => 2,
      ),
    ),
    'label' => 'user_comment_img',
  );

  return $styles;
}
