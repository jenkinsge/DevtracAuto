; Drush Make File
core = 7.x
api = 2

projects[drupal][type] = core
projects[drupal][version] = "7.x"

; Modules
projects[acl][version] = "1.0"
projects[acl][type] = "module"
projects[acl][subdir] = "contrib"

projects[adaptive_image][version] = "1.4"
projects[adaptive_image][type] = "module"
projects[adaptive_image][subdir] = "contrib"

projects[admin_menu][version] = "3.0-rc3"
projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "contrib"

projects[advanced_help][version] = "1.0"
projects[advanced_help][type] = "module"
projects[advanced_help][subdir] = "contrib"

projects[autoassignrole][version] = "1.0-beta1"
projects[autoassignrole][type] = "module"
projects[autoassignrole][subdir] = "contrib"

projects[blockify][version] = "1.2"
projects[blockify][type] = "module"
projects[blockify][subdir] = "contrib"

projects[ctools][version] = "1.3"
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"

projects[charts_graphs][version] = "1.x-dev"
projects[charts_graphs][type] = "module"
projects[charts_graphs][subdir] = "contrib"

projects[charts_graphs_flot][version] = "1.x-dev"
projects[charts_graphs_flot][type] = "module"
projects[charts_graphs_flot][subdir] = "contrib"

projects[ckeditor][version] = "1.13"
projects[ckeditor][type] = "module"
projects[ckeditor][subdir] = "contrib"

projects[colorbox][version] = "1.3"
projects[colorbox][type] = "module"
projects[colorbox][subdir] = "contrib"

projects[content_access][version] = "1.2-beta1"
projects[content_access][type] = "module"
projects[content_access][subdir] = "contrib"

projects[content_taxonomy][version] = "1.0-beta1"
projects[content_taxonomy][type] = "module"
projects[content_taxonomy][subdir] = "contrib"

projects[context][version] = "3.0-beta3"
projects[context][patch][] = "https://drupal.org/files/sitewide_hook_init-1893068-1.patch"
projects[context][type] = "module"
projects[context][subdir] = "contrib"

projects[facetapi][version] = "1.0"
projects[facetapi][type] = "module"
projects[facetapi][subdir] = "contrib"

projects[date][version] = "2.5"
projects[date][type] = "module"
projects[date][subdir] = "contrib"

projects[delta][version] = "3.0-beta9"
projects[delta][type] = "module"
projects[delta][subdir] = "contrib"

projects[devel][version] = "1.2"
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"

projects[diff][version] = "2.0"
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"

projects[district_wikipedia_import][download][type] = ""
projects[district_wikipedia_import][download][url] = ""
projects[district_wikipedia_import][type] = "module"
projects[district_wikipedia_import][version] = "1.0-beta1"
projects[district_wikipedia_import][subdir] = "custom"

projects[draggableviews][version] = "2.0-beta1"
projects[draggableviews][type] = "module"
projects[draggableviews][subdir] = "contrib"

projects[ds][version] = "1.8"
projects[ds][type] = "module"
projects[ds][subdir] = "contrib"

projects[email][version] = "1.2"
projects[email][type] = "module"
projects[email][subdir] = "contrib"

projects[entity][version] = "1.0-rc3"
projects[entity][type] = "module"
projects[entity][subdir] = "contrib"

projects[entityreference][version] = "1.0-rc3"
projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"

projects[entityreference_prepopulate][version] = "1.0"
projects[entityreference_prepopulate][type] = "module"
projects[entityreference_prepopulate][subdir] = "contrib"

projects[facetapi_bonus][version] = "1.1"
projects[facetapi_bonus][type] = "module"
projects[facetapi_bonus][subdir] = "contrib"

projects[facetapi_graphs][version] = "1.x-dev"
projects[facetapi_graphs][type] = "module"
projects[facetapi_graphs][subdir] = "contrib"

projects[facetapi_tagcloud][version] = "1.0-beta1"
projects[facetapi_tagcloud][type] = "module"
projects[facetapi_tagcloud][subdir] = "contrib"

projects[features][version] = "1.0-rc2"
projects[features][type] = "module"
projects[features][subdir] = "contrib"

projects[feeds][version] = "2.0-alpha4"
projects[feeds][type] = "module"
projects[feeds][subdir] = "contrib"

projects[feeds_tamper][version] = "1.0-beta3"
projects[feeds_tamper][type] = "module"
projects[feeds_tamper][subdir] = "contrib"

projects[field_collection][version] = "1.0-beta3"
projects[field_collection][type] = "module"
projects[field_collection][subdir] = "contrib"

projects[field_collection_table][version] = "1.0-beta1"
projects[field_collection_table][type] = "module"
projects[field_collection_table][subdir] = "contrib"

projects[field_group][version] = "1.1"
projects[field_group][type] = "module"
projects[field_group][subdir] = "contrib"

projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][type] = "module"
projects[field_permissions][subdir] = "contrib"

projects[file_entity][version] = "2.0-unstable7"
projects[file_entity][type] = "module"
projects[file_entity][subdir] = "contrib"

projects[flot][version] = "1.x-dev"
projects[flot][type] = "module"
projects[flot][subdir] = "contrib"

projects[geofield][version] = "2.0"
projects[geofield][type] = "module"
projects[geofield][subdir] = "contrib"

projects[geonames][version] = "1.1"
projects[geonames][type] = "module"
projects[geonames][subdir] = "contrib"

projects[geophp][version] = "1.7"
projects[geophp][type] = "module"
projects[geophp][subdir] = "contrib"

projects[hidden_comment][version] = "1.x-dev"
projects[hidden_comment][type] = "module"
projects[hidden_comment][subdir] = "contrib"

projects[job_scheduler][version] = "2.0-alpha2"
projects[job_scheduler][type] = "module"
projects[job_scheduler][subdir] = "contrib"

projects[kml][version] = "1.x-dev"
projects[kml][type] = "module"
projects[kml][subdir] = "contrib"

projects[libraries][version] = "2.1"
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"

projects[link][version] = "1.0"
projects[link][type] = "module"
projects[link][subdir] = "contrib"

projects[maxlength][version] = "3.0-beta1"
projects[maxlength][type] = "module"
projects[maxlength][subdir] = "contrib"

projects[media][version] = "2.0-unstable7"
projects[media][type] = "module"
projects[media][subdir] = "contrib"

projects[memcache][version] = "1.0"
projects[memcache][type] = "module"
projects[memcache][subdir] = "contrib"

projects[menu_token][version] = "1.0-beta1"
projects[menu_token][type] = "module"
projects[menu_token][subdir] = "contrib"

projects[migrate][version] = "2.4"
projects[migrate][type] = "module"
projects[migrate][subdir] = "contrib"

projects[nice_menus][version] = "2.1"
projects[nice_menus][type] = "module"
projects[nice_menus][subdir] = "contrib"

projects[omega_tools][version] = "3.0-rc3"
projects[omega_tools][type] = "module"
projects[omega_tools][subdir] = "contrib"

projects[openlayers][version] = "2.x-dev"
projects[openlayers][type] = "module"
projects[openlayers][subdir] = "contrib"

projects[openlayers_geosearch][version] = "1.0-beta1"
projects[openlayers_geosearch][type] = "module"
projects[openlayers_geosearch][subdir] = "contrib"

projects[openlayers_plus][version] = "3.0-beta1"
projects[openlayers_plus][type] = "module"
projects[openlayers_plus][subdir] = "contrib"

projects[piwik][version] = "2.4"
projects[piwik][type] = "module"
projects[piwik][subdir] = "contrib"

projects[prepopulate][version] = "2.x-dev"
projects[prepopulate][type] = "module"
projects[prepopulate][subdir] = "contrib"

projects[profile_switcher][version] = "1.0-beta1"
projects[profile_switcher][type] = "module"
projects[profile_switcher][subdir] = "contrib"

projects[proj4js][version] = "1.2"
projects[proj4js][type] = "module"
projects[proj4js][subdir] = "contrib"

projects[publishcontent][version] = "1.0"
projects[publishcontent][type] = "module"
projects[publishcontent][subdir] = "contrib"

projects[quicktabs][version] = "3.4"
projects[quicktabs][type] = "module"
projects[quicktabs][subdir] = "contrib"

projects[realname][version] = "1.1"
projects[realname][type] = "module"
projects[realname][subdir] = "contrib"

projects[relation][version] = "1.0-rc4"
projects[relation][type] = "module"
projects[relation][subdir] = "contrib"

projects[relation_add][version] = "1.0-beta1"
projects[relation_add][type] = "module"
projects[relation_add][subdir] = "contrib"

projects[services][version] = "3.1"
projects[services][type] = "module"
projects[services][subdir] = "contrib"

projects[robotstxt][version] = "1.0"
projects[robotstxt][type] = "module"
projects[robotstxt][subdir] = "contrib"

projects[search_api][version] = "1.2"
projects[search_api][type] = "module"
projects[search_api][subdir] = "contrib"

projects[search_api_autocomplete][version] = "1.0"
projects[search_api_autocomplete][type] = "module"
projects[search_api_autocomplete][subdir] = "contrib"

projects[search_api_saved_searches][version] = "1.1"
projects[search_api_saved_searches][type] = "module"
projects[search_api_saved_searches][subdir] = "contrib"

projects[search_api_solr][version] = "1.3"
projects[search_api_solr][type] = "module"
projects[search_api_solr][subdir] = "contrib"

projects[search_api_solr_overrides][version] = "1.0-rc1"
projects[search_api_solr_overrides][type] = "module"
projects[search_api_solr_overrides][subdir] = "contrib"

projects[services_views][version] = "1.x-dev"
projects[services_views][type] = "module"
projects[services_views][subdir] = "contrib"

projects[strongarm][version] = "2.0-rc1"
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

projects[taxonomy_access][version] = "1.0-rc1"
projects[taxonomy_access][type] = "module"
projects[taxonomy_access][subdir] = "contrib"

projects[tipsy][version] = "1.0-rc1"
projects[tipsy][type] = "module"
projects[tipsy][subdir] = "contrib"

projects[token][version] = "1.1"
projects[token][type] = "module"
projects[token][subdir] = "contrib"

projects[views][version] = "3.7"
projects[views][type] = "module"
projects[views][subdir] = "contrib"

projects[views_hacks][version] = "1.0-alpha1"
projects[views_hacks][type] = "module"
projects[views_hacks][subdir] = "contrib"

projects[views_charts][version] = "1.x-dev"
projects[views_charts][type] = "module"
projects[views_charts][subdir] = "contrib"

projects[views_data_export][version] = "3.0-beta6"
projects[views_data_export][type] = "module"
projects[views_data_export][subdir] = "contrib"

projects[views_field_view][version] = "1.0-rc3"
projects[views_field_view][type] = "module"
projects[views_field_view][subdir] = "contrib"

projects[views_infinite_scroll][version] = "1.1"
projects[views_infinite_scroll][type] = "module"
projects[views_infinite_scroll][subdir] = "contrib"

projects[views_modes][version] = "1.x-dev"
projects[views_modes][type] = "module"
projects[views_modes][subdir] = "contrib"

projects[views_rss][version] = "2.0-rc3"
projects[views_rss][type] = "module"
projects[views_rss][subdir] = "contrib"

projects[views_rss_georss][version] = "1.0-rc1"
projects[views_rss_georss][type] = "module"
projects[views_rss_georss][subdir] = "contrib"

projects[views_slideshow][version] = "3.x-dev"
projects[views_slideshow][type] = "module"
projects[views_slideshow][subdir] = "contrib"

projects[wms][version] = "2.x-dev"
projects[wms][type] = "module"
projects[wms][subdir] = "contrib"

;Add the OL_lat_long module
projects[OL_lat_long][type] = "module"
projects[OL_lat_long][download][type] = "git"
projects[OL_lat_long][download][url] = "http://git.drupal.org/sandbox/GwenMahe/2055375.git"
projects[OL_lat_long][download][branch] = "master"
projects[OL_lat_long][subdir] = "contrib"

;Add the WFS geocoder module
projects[geocoder_wfs][type] = "module"
projects[geocoder_wfs][download][type] = "git"
projects[geocoder_wfs][download][url] = "http://git.drupal.org/project/geocoder_wfs.git"
projects[geocoder_wfs][download][branch] = "7.x-1.0"
projects[geocoder_wfs][subdir] = "contrib"

projects[comment_block_d7][download][type] = ""
projects[comment_block_d7][download][url] = ""
projects[comment_block_d7][type] = "module"
projects[comment_block_d7][subdir] = "custom"

projects[custom_breadcrumbs][download][type] = ""
projects[custom_breadcrumbs][download][url] = ""
projects[custom_breadcrumbs][type] = "module"
projects[custom_breadcrumbs][subdir] = "contrib"

projects[custom_breadcrumbs_panels][download][type] = ""
projects[custom_breadcrumbs_panels][download][url] = ""
projects[custom_breadcrumbs_panels][type] = "module"
projects[custom_breadcrumbs_panels][subdir] = "contrib"

projects[custom_breadcrumbs_taxonomy][download][type] = ""
projects[custom_breadcrumbs_taxonomy][download][url] = ""
projects[custom_breadcrumbs_taxonomy][type] = "module"
projects[custom_breadcrumbs_taxonomy][subdir] = "contrib"

projects[custom_breadcrumbsapi][download][type] = ""
projects[custom_breadcrumbsapi][download][url] = ""
projects[custom_breadcrumbsapi][type] = "module"
projects[custom_breadcrumbsapi][subdir] = "contrib"

projects[date_duration_formatter][download][type] = ""
projects[date_duration_formatter][download][url] = ""
projects[date_duration_formatter][type] = "module"
projects[date_duration_formatter][subdir] = "custom"

projects[devtrac7][download][type] = ""
projects[devtrac7][download][url] = ""
projects[devtrac7][type] = "module"
projects[devtrac7][subdir] = "custom"

projects[devtrac7_access][download][type] = ""
projects[devtrac7_access][download][url] = ""
projects[devtrac7_access][type] = "module"
projects[devtrac7_access][subdir] = "custom"

projects[devtrac7_fieldtrip_progress][download][type] = ""
projects[devtrac7_fieldtrip_progress][download][url] = ""
projects[devtrac7_fieldtrip_progress][type] = "module"
projects[devtrac7_fieldtrip_progress][subdir] = "custom"

projects[devtrac7_geosearch][download][type] = ""
projects[devtrac7_geosearch][download][url] = ""
projects[devtrac7_geosearch][type] = "module"
projects[devtrac7_geosearch][subdir] = "custom"

projects[devtrac7_migrate][download][type] = ""
projects[devtrac7_migrate][download][url] = ""
projects[devtrac7_migrate][type] = "module"
projects[devtrac7_migrate][subdir] = "custom"

projects[devtrac7_mymenu][download][type] = ""
projects[devtrac7_mymenu][download][url] = ""
projects[devtrac7_mymenu][type] = "module"
projects[devtrac7_mymenu][subdir] = "custom"

projects[devtrac7_progress_field][download][type] = ""
projects[devtrac7_progress_field][download][url] = ""
projects[devtrac7_progress_field][type] = "module"
projects[devtrac7_progress_field][subdir] = "custom"

projects[devtrac7_purpose_migration][download][type] = ""
projects[devtrac7_purpose_migration][download][url] = ""
projects[devtrac7_purpose_migration][type] = "module"
projects[devtrac7_purpose_migration][subdir] = "custom"

projects[devtrac7_realms][download][type] = ""
projects[devtrac7_realms][download][url] = ""
projects[devtrac7_realms][type] = "module"
projects[devtrac7_realms][subdir] = "custom"

projects[devtrac7_views][download][type] = ""
projects[devtrac7_views][download][url] = ""
projects[devtrac7_views][type] = "module"
projects[devtrac7_views][subdir] = "custom"

projects[devtrac7_wms][download][type] = ""
projects[devtrac7_wms][download][url] = ""
projects[devtrac7_wms][type] = "module"
projects[devtrac7_wms][subdir] = "custom"

projects[devtrac7test][download][type] = ""
projects[devtrac7test][download][url] = ""
projects[devtrac7test][type] = "module"
projects[devtrac7test][subdir] = "custom"

projects[devtrac_saved_search][download][type] = ""
projects[devtrac_saved_search][download][url] = ""
projects[devtrac_saved_search][type] = "module"
projects[devtrac_saved_search][subdir] = "custom"

projects[devtrac_taxonomy][download][type] = ""
projects[devtrac_taxonomy][download][url] = ""
projects[devtrac_taxonomy][type] = "module"
projects[devtrac_taxonomy][subdir] = "custom"

projects[facet_api_context][download][type] = ""
projects[facet_api_context][download][url] = ""
projects[facet_api_context][type] = "module"
projects[facet_api_context][subdir] = "custom"

projects[facetapi_textfield][download][type] = ""
projects[facetapi_textfield][download][url] = ""
projects[facetapi_textfield][type] = "module"
projects[facetapi_textfield][subdir] = "custom"

projects[geocoder][download][type] = ""
projects[geocoder][download][url] = ""
projects[geocoder][type] = "module"
projects[geocoder][subdir] = "contrib"

projects[geocoder_geonames][type] = "module"
projects[geocoder_geonames][download][type] = "git"
projects[geocoder_geonames][download][url] = "http://git.drupal.org/sandbox/dmulindwa/1996068.git"
projects[geocoder_geonames][download][branch] = "7.x-1.x"
projects[geocoder_geonames][download][revision] = "57417b6bab16585f8d06a06e460e5096d3ba25b0"
projects[geocoder_geonames][subdir] = "contrib"

projects[helpinject][download][type] = ""
projects[helpinject][download][url] = ""
projects[helpinject][type] = "module"
projects[helpinject][subdir] = "contrib"

projects[helpinject_help][download][type] = ""
projects[helpinject_help][download][url] = ""
projects[helpinject_help][type] = "module"
projects[helpinject_help][subdir] = "contrib"

projects[proxy][download][type] = ""
projects[proxy][download][url] = ""
projects[proxy][type] = "module"
projects[proxy][subdir] = "contrib"

projects[purl][download][type] = ""
projects[purl][download][url] = ""
projects[purl][type] = "module"
projects[purl][subdir] = "contrib"

projects[purl_devtrac][download][type] = ""
projects[purl_devtrac][download][url] = ""
projects[purl_devtrac][type] = "module"
projects[purl_devtrac][subdir] = "custom"


projects[purl_search_api][download][type] = ""
projects[purl_search_api][download][url] = ""
projects[purl_search_api][type] = "module"
projects[purl_search_api][subdir] = "custom"

projects[tests][download][type] = ""
projects[tests][download][url] = ""
projects[tests][type] = "module"
projects[tests][subdir] = "custom"

projects[questionnaire][type] = "module"
projects[questionnaire][download][type] = "git"
projects[questionnaire][download][url] = "http://git.drupal.org/sandbox/batje/1509732.git"
projects[questionnaire][download][revision] = "c6515a2236d3bae5e602a19a0ef8facfc7fc5987"
projects[questionnaire][subdir] = "contrib"

projects[search_api_date][download][type] = ""
projects[search_api_date][download][url] = ""
projects[search_api_date][type] = "module"
projects[search_api_date][subdir] = "contrib"

projects[search_api_swatches][download][type] = ""
projects[search_api_swatches][download][url] = ""
projects[search_api_swatches][type] = "module"
projects[search_api_swatches][subdir] = "custom"

projects[views_two_column_table][download][type] = ""
projects[views_two_column_table][download][url] = ""
projects[views_two_column_table][type] = "module"
projects[views_two_column_table][subdir] = "contrib"

projects[virtual_field][download][type] = ""
projects[virtual_field][download][url] = ""
projects[virtual_field][type] = "module"
projects[virtual_field][subdir] = "contrib"

; Themes
projects[omega][version] = "3.1"

projects[devtrac7_theme][download][type] = ""
projects[devtrac7_theme][download][url] = ""
projects[devtrac7_theme][type] = "theme"
projects[devtrac7_theme][subdir] = "custom"

; Libraries
libraries[FirePHPCore][download][type] = ""
libraries[FirePHPCore][download][url] = ""
libraries[FirePHPCore][directory_name] = "FirePHPCore"
libraries[FirePHPCore][type] = "library"

libraries[flot][download][type] = ""
libraries[flot][download][url] = ""
libraries[flot][directory_name] = "flot"
libraries[flot][type] = "library"

libraries[colorbox][download][type] = ""
libraries[colorbox][download][url] = ""
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][type] = "library"

libraries[SolrPhpClient][download][type] = ""
libraries[SolrPhpClient][download][url] = ""
libraries[SolrPhpClient][directory_name] = "SolrPhpClient"
libraries[SolrPhpClient][type] = "library"

libraries[json2][download][type] = ""
libraries[json2][download][url] = ""
libraries[json2][directory_name] = "json2"
libraries[json2][type] = "library"

libraries[jquery.cycle][download][type] = ""
libraries[jquery.cycle][download][url] = ""
libraries[jquery.cycle][directory_name] = "jquery.cycle"
libraries[jquery.cycle][type] = "library"

libraries[openlayers][download][type] = ""
libraries[openlayers][download][url] = ""
libraries[openlayers][directory_name] = "openlayers"
libraries[openlayers][type] = "library"

libraries[ckeditor][download][type] = ""
libraries[ckeditor][download][url] = ""
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][type] = "library"

libraries[autopager][download][type] = ""
libraries[autopager][download][url] = ""
libraries[autopager][directory_name] = "autopager"
libraries[autopager][type] = "library"

libraries[tcpdf][download][type] = ""
libraries[tcpdf][download][url] = ""
libraries[tcpdf][directory_name] = "tcpdf"
libraries[tcpdf][type] = "library"
