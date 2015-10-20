<?php
/**
 * @file
 * devtrac7_views_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function devtrac7_views_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ais_adaptive_styles';
  $strongarm->value = array(
    0 => array(
      'name' => 'threshold-480',
      'size' => '320',
    ),
    1 => array(
      'name' => 'threshold-768',
      'size' => '768',
    ),
    2 => array(
      'name' => 'threshold-992',
      'size' => '992',
    ),
    3 => array(
      'name' => 'threshold-1382',
      'size' => '1382',
    ),
    4 => array(
      'name' => 'gallery',
      'size' => '320',
    ),
  );
  $export['ais_adaptive_styles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagemagick_convert';
  $strongarm->value = 'convert';
  $export['imagemagick_convert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagemagick_debug';
  $strongarm->value = 0;
  $export['imagemagick_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagemagick_gm';
  $strongarm->value = 0;
  $export['imagemagick_gm'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagemagick_quality';
  $strongarm->value = '75';
  $export['imagemagick_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'imagemagick';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdfpreview_filenames';
  $strongarm->value = '0';
  $export['pdfpreview_filenames'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdfpreview_pathtoimages';
  $strongarm->value = 'pdfpreview';
  $export['pdfpreview_pathtoimages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdfpreview_previewsize';
  $strongarm->value = '1024x1024';
  $export['pdfpreview_previewsize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pdfpreview_quality';
  $strongarm->value = '75';
  $export['pdfpreview_quality'] = $strongarm;

  return $export;
}
