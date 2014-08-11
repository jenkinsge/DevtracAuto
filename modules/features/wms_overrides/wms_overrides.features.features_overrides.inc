<?php
/**
 * @file
 * wms_overrides.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function wms_overrides_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: openlayers_maps
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|default_layer"] = 'osm_mapnik';
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_activated|u_map_it_health"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_activated|u_map_it_schools"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_activated|u_map_it_schoolswms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_activated|u_map_it_wash"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_activated|u_map_it_washwms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_activated|ugandahealthwms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_select|u_map_it_health"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_select|u_map_it_schools"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_select|u_map_it_schoolswms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_select|u_map_it_wash"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_select|u_map_it_washwms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_select|ugandahealthwms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_temporary|u_map_it_health"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_temporary|u_map_it_schools"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_temporary|u_map_it_schoolswms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_temporary|u_map_it_wash"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_temporary|u_map_it_washwms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles_temporary|ugandahealthwms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles|u_map_it_health"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles|u_map_it_schools"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles|u_map_it_schoolswms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles|u_map_it_wash"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles|u_map_it_washwms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_styles|ugandahealthwms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_switcher|u_map_it_health"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_switcher|u_map_it_schools"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_switcher|u_map_it_schoolswms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_switcher|u_map_it_wash"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_switcher|u_map_it_washwms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_switcher|ugandahealthwms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_weight|u_map_it_health"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_weight|u_map_it_schools"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_weight|u_map_it_schoolswms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_weight|u_map_it_wash"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_weight|u_map_it_washwms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layer_weight|ugandahealthwms"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layers|osm_cycle"] = 'osm_cycle';
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layers|osm_mapnik"] = 'osm_mapnik';
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layers|u_map_it_health"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layers|u_map_it_schools"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layers|u_map_it_wash"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layers|uganda_basemap"]["DELETED"] = TRUE;
  $overrides["openlayers_maps.devtrac_solr_sitevisits_map.data|layers|uganda_basemap_streets"]["DELETED"] = TRUE;

  // Exported overrides for: variable
  $overrides["variable.geocoder_wfs_geofield.value"] = 'Devtrac:the_geom';
  $overrides["variable.geocoder_wfs_layer.value"] = 'devtrac_wfs_search';
  $overrides["variable.geocoder_wfs_namespace.value"] = 'Devtrac';
  $overrides["variable.geocoder_wfs_queryfield.value"] = 'name';
  $overrides["variable.geocoder_wfs_resultfields.value"] = 'gml:name,Devtrac:placetype,Devtrac:district';
  $overrides["variable.geocoder_wfs_url.value"] = 'http://maps1.devtrac.org/wfs';
  $overrides["variable.openlayers_geosearch_geocoders.value|wfs"] = 'wfs';

 return $overrides;
}
