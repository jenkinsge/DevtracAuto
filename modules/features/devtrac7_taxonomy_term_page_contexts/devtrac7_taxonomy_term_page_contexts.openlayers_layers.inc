<?php
/**
 * @file
 * devtrac7_taxonomy_term_page_contexts.openlayers_layers.inc
 */

/**
 * Implements hook_openlayers_layers().
 */
function devtrac7_taxonomy_term_page_contexts_openlayers_layers() {
  $export = array();

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'image_tags_openlayers_1';
  $openlayers_layers->title = 'image_tags - Images Data Overlay';
  $openlayers_layers->description = '';
  $openlayers_layers->data = array(
    'views' => array(
      'view' => 'devtrac_solr_view_images',
      'display' => 'openlayers_1',
    ),
    'projection' => array(
      0 => 'EPSG:4326',
    ),
    'isBaseLayer' => 0,
    'layer_type' => 'openlayers_views_vector',
    'layer_handler' => 'openlayers_views_vector',
    'vector' => TRUE,
    'type' => 'Vector',
    'url' => array(),
    'options' => array(
      'rendererOptions' => array(
        'yOrdering' => TRUE,
      ),
    ),
    'events' => array(),
    'serverResolutions' => array(
      0 => 156543.03390000001,
      1 => 78271.516950000005,
      2 => 39135.758475000002,
      3 => 19567.879237500001,
      4 => 9783.9396187500006,
      5 => 4891.9698093750003,
      6 => 2445.9849046875001,
      7 => 1222.9924523437501,
      8 => 611.49622617187504,
      9 => 305.74811308593752,
      10 => 152.87405654296876,
      11 => 76.43702827148438,
      12 => 38.21851413574219,
      13 => 19.109257067871095,
      14 => 9.5546285339355475,
      15 => 4.7773142669677737,
      16 => 2.3886571334838869,
      17 => 1.1943285667419434,
      18 => 0.59716428337097172,
      19 => 0.29858214169740677,
      20 => 0.14929107084870338,
      21 => 0.074645535424351692,
    ),
    'resolutions' => array(
      0 => 156543.03390000001,
      1 => 78271.516950000005,
      2 => 39135.758475000002,
      3 => 19567.879237500001,
      4 => 9783.9396187500006,
      5 => 4891.9698093750003,
      6 => 2445.9849046875001,
      7 => 1222.9924523437501,
      8 => 611.49622617187504,
      9 => 305.74811308593752,
      10 => 152.87405654296876,
      11 => 76.43702827148438,
      12 => 38.21851413574219,
      13 => 19.109257067871095,
      14 => 9.5546285339355475,
      15 => 4.7773142669677737,
      16 => 2.3886571334838869,
      17 => 1.1943285667419434,
      18 => 0.59716428337097172,
      19 => 0.29858214169740677,
      20 => 0.14929107084870338,
      21 => 0.074645535424351692,
    ),
    'base_url' => NULL,
    'transitionEffect' => 'resize',
    'weight' => 0,
  );
  $export['image_tags_openlayers_1'] = $openlayers_layers;

  return $export;
}
