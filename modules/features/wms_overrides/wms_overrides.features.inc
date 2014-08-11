<?php
/**
 * @file
 * wms_overrides.features.inc
 */

/**
 * Implements hook_openlayers_maps_alter().
 */
function wms_overrides_openlayers_maps_alter(&$data) {
  if (isset($data['devtrac_solr_sitevisits_map'])) {
    $data['devtrac_solr_sitevisits_map']->data['default_layer'] = 'osm_mapnik'; /* WAS: 'uganda_basemap' */
    $data['devtrac_solr_sitevisits_map']->data['layers']['osm_cycle'] = 'osm_cycle'; /* WAS: '' */
    $data['devtrac_solr_sitevisits_map']->data['layers']['osm_mapnik'] = 'osm_mapnik'; /* WAS: '' */
    unset($data['devtrac_solr_sitevisits_map']->data['layer_activated']['u_map_it_health']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_activated']['u_map_it_schools']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_activated']['u_map_it_schoolswms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_activated']['u_map_it_wash']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_activated']['u_map_it_washwms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_activated']['ugandahealthwms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles_select']['u_map_it_health']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles_select']['u_map_it_schools']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles_select']['u_map_it_schoolswms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles_select']['u_map_it_wash']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles_select']['u_map_it_washwms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles_select']['ugandahealthwms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles_temporary']['u_map_it_health']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles_temporary']['u_map_it_schools']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles_temporary']['u_map_it_schoolswms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles_temporary']['u_map_it_wash']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles_temporary']['u_map_it_washwms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles_temporary']['ugandahealthwms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles']['u_map_it_health']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles']['u_map_it_schools']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles']['u_map_it_schoolswms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles']['u_map_it_wash']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles']['u_map_it_washwms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_styles']['ugandahealthwms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_switcher']['u_map_it_health']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_switcher']['u_map_it_schools']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_switcher']['u_map_it_schoolswms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_switcher']['u_map_it_wash']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_switcher']['u_map_it_washwms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_switcher']['ugandahealthwms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_weight']['u_map_it_health']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_weight']['u_map_it_schools']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_weight']['u_map_it_schoolswms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_weight']['u_map_it_wash']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_weight']['u_map_it_washwms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layer_weight']['ugandahealthwms']);
    unset($data['devtrac_solr_sitevisits_map']->data['layers']['u_map_it_health']);
    unset($data['devtrac_solr_sitevisits_map']->data['layers']['u_map_it_schools']);
    unset($data['devtrac_solr_sitevisits_map']->data['layers']['u_map_it_wash']);
    unset($data['devtrac_solr_sitevisits_map']->data['layers']['uganda_basemap']);
    unset($data['devtrac_solr_sitevisits_map']->data['layers']['uganda_basemap_streets']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function wms_overrides_strongarm_alter(&$data) {
  if (isset($data['geocoder_wfs_geofield'])) {
    $data['geocoder_wfs_geofield']->value = 'Devtrac:the_geom'; /* WAS: 'ne:the_geom' */
  }
  if (isset($data['geocoder_wfs_layer'])) {
    $data['geocoder_wfs_layer']->value = 'devtrac_wfs_search'; /* WAS: 'ne_10m_populated_places' */
  }
  if (isset($data['geocoder_wfs_namespace'])) {
    $data['geocoder_wfs_namespace']->value = 'Devtrac'; /* WAS: 'ne' */
  }
  if (isset($data['geocoder_wfs_queryfield'])) {
    $data['geocoder_wfs_queryfield']->value = 'name'; /* WAS: 'NAME' */
  }
  if (isset($data['geocoder_wfs_resultfields'])) {
    $data['geocoder_wfs_resultfields']->value = 'gml:name,Devtrac:placetype,Devtrac:district'; /* WAS: 'ne:NAME,ne:ADM0NAME,ne:ADM1NAME' */
  }
  if (isset($data['geocoder_wfs_url'])) {
    $data['geocoder_wfs_url']->value = 'http://maps1.devtrac.org/wfs'; /* WAS: 'http://demo.opengeo.org/geoserver/wfs' */
  }
  if (isset($data['openlayers_geosearch_geocoders'])) {
    $data['openlayers_geosearch_geocoders']->value['wfs'] = 'wfs'; /* WAS: 0 */
  }
}
