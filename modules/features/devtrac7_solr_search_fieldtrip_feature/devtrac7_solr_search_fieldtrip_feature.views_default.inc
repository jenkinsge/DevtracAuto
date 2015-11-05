<?php
/**
 * @file
 * devtrac7_solr_search_fieldtrip_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_solr_search_fieldtrip_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_solr_view_fieldtrips';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_devtrac_solr_field_trip_index';
  $view->human_name = 'devtrac_solr_view_fieldtrips';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fieldtrips: Graphs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'devtrac_fieldtrips_roles';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'noresult text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Your search did not return any results. Making your search less specific give you a higher chance of finding what you are looking for.';
  $handler->display->display_options['empty']['area']['format'] = '1';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Narrative */
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['id'] = 'field_fieldtrip_narrative';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['field'] = 'field_fieldtrip_narrative';
  /* Field: Indexed Node: Public Summary */
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['id'] = 'field_fieldtrip_public_summary';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['field'] = 'field_fieldtrip_public_summary';
  /* Field: Indexed Node: Admin Units */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Locations */
  $handler->display->display_options['fields']['field_fieldtrip_places']['id'] = 'field_fieldtrip_places';
  $handler->display->display_options['fields']['field_fieldtrip_places']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_places']['field'] = 'field_fieldtrip_places';
  $handler->display->display_options['fields']['field_fieldtrip_places']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_fieldtrip_places']['view_mode'] = 'full';
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_fieldtrip_status']['id'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_status']['field'] = 'field_fieldtrip_status';
  /* Field: Indexed Node: Approval Date */
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['id'] = 'field_fieldtrip_approval_date';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['field'] = 'field_fieldtrip_approval_date';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Indexed Node: Approved By */
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['id'] = 'field_fieldtrip_approved_by';
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['field'] = 'field_fieldtrip_approved_by';
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['view_mode'] = 'full';
  /* Field: Indexed Node: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['id'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: User */
  $handler->display->display_options['fields']['field_fieldtrip_user']['id'] = 'field_fieldtrip_user';
  $handler->display->display_options['fields']['field_fieldtrip_user']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_user']['field'] = 'field_fieldtrip_user';
  $handler->display->display_options['fields']['field_fieldtrip_user']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_fieldtrip_user']['view_mode'] = 'full';

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_fieldtrip_status' => 'field_fieldtrip_status',
    'field_fieldtrip_start_end_date' => 'field_fieldtrip_start_end_date',
    'field_fieldtrip_start_end_date_1' => 'field_fieldtrip_start_end_date_1',
    'taxonomy_vocabulary_6' => 'taxonomy_vocabulary_6',
    'field_fieldtrip_user' => 'field_fieldtrip_user',
    'author_field_user_superior' => 'author_field_user_superior',
    'virtual_field' => 'virtual_field',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fieldtrip_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fieldtrip_start_end_date' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fieldtrip_start_end_date_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'taxonomy_vocabulary_6' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fieldtrip_user' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'author_field_user_superior' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'virtual_field' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'expand' => 'nid',
    'hide' => array(
      'nid' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'title' => array(
        'phone' => 0,
        'tablet' => 0,
      ),
      'field_fieldtrip_status' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_fieldtrip_start_end_date' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_fieldtrip_start_end_date_1' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'taxonomy_vocabulary_6' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
      'field_fieldtrip_user' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'author_field_user_superior' => array(
        'phone' => 'phone',
        'tablet' => 'tablet',
      ),
      'virtual_field' => array(
        'phone' => 'phone',
        'tablet' => 0,
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_fieldtrip_status']['id'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_status']['field'] = 'field_fieldtrip_status';
  /* Field: Indexed Node: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['id'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['id'] = 'field_fieldtrip_start_end_date_1';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Admin Units */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: User */
  $handler->display->display_options['fields']['field_fieldtrip_user']['id'] = 'field_fieldtrip_user';
  $handler->display->display_options['fields']['field_fieldtrip_user']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_user']['field'] = 'field_fieldtrip_user';
  $handler->display->display_options['fields']['field_fieldtrip_user']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_fieldtrip_user']['view_mode'] = 'full';
  /* Field: Author: Manager (indexed) */
  $handler->display->display_options['fields']['author_field_user_superior']['id'] = 'author_field_user_superior';
  $handler->display->display_options['fields']['author_field_user_superior']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['author_field_user_superior']['field'] = 'author_field_user_superior';
  $handler->display->display_options['fields']['author_field_user_superior']['label'] = 'Manager';
  $handler->display->display_options['fields']['author_field_user_superior']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['author_field_user_superior']['view_mode'] = 'full';
  /* Field: Virtual Field: virtual_field */
  $handler->display->display_options['fields']['virtual_field']['id'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['table'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['field'] = 'virtual_field';
  $handler->display->display_options['fields']['virtual_field']['label'] = '';
  $handler->display->display_options['fields']['virtual_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['virtual_field']['virtual_field'] = 'field_fieldtrip_button';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Indexed Node: Approval Date */
  $handler->display->display_options['sorts']['field_fieldtrip_approval_date']['id'] = 'field_fieldtrip_approval_date';
  $handler->display->display_options['sorts']['field_fieldtrip_approval_date']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['sorts']['field_fieldtrip_approval_date']['field'] = 'field_fieldtrip_approval_date';
  $handler->display->display_options['path'] = 'fieldtrips';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Field trips';
  $handler->display->display_options['menu']['description'] = 'Shows Field Trips of Devtrac reporters from the field';
  $handler->display->display_options['menu']['weight'] = '-8';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Graphs */
  $handler = $view->new_display('mode', 'Graphs', 'graphs');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '-1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = ' ';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  $handler->display->display_options['displays'] = array(
    'list' => 'list',
  );
  $handler->display->display_options['mode_id'] = 'graphs';
  $handler->display->display_options['mode_name'] = 'graphs';

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CSV';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['feed_in_links'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uuid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Narrative */
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['id'] = 'field_fieldtrip_narrative';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['field'] = 'field_fieldtrip_narrative';
  /* Field: Indexed Node: Public Summary */
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['id'] = 'field_fieldtrip_public_summary';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['field'] = 'field_fieldtrip_public_summary';
  /* Field: Indexed Node: Admin Units */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Locations */
  $handler->display->display_options['fields']['field_fieldtrip_places']['id'] = 'field_fieldtrip_places';
  $handler->display->display_options['fields']['field_fieldtrip_places']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_places']['field'] = 'field_fieldtrip_places';
  $handler->display->display_options['fields']['field_fieldtrip_places']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_fieldtrip_places']['view_mode'] = 'full';
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_fieldtrip_status']['id'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_status']['field'] = 'field_fieldtrip_status';
  /* Field: Indexed Node: Approval Date */
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['id'] = 'field_fieldtrip_approval_date';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['field'] = 'field_fieldtrip_approval_date';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['settings'] = array(
    'format_type' => 'export_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Approved By */
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['id'] = 'field_fieldtrip_approved_by';
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['field'] = 'field_fieldtrip_approved_by';
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['view_mode'] = 'full';
  /* Field: Indexed Node: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['id'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['settings'] = array(
    'format_type' => 'export_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['id'] = 'field_fieldtrip_start_end_date_1';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['settings'] = array(
    'format_type' => 'export_only',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: User */
  $handler->display->display_options['fields']['field_fieldtrip_user']['id'] = 'field_fieldtrip_user';
  $handler->display->display_options['fields']['field_fieldtrip_user']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_user']['field'] = 'field_fieldtrip_user';
  $handler->display->display_options['fields']['field_fieldtrip_user']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_fieldtrip_user']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_fieldtrip_user']['bypass_access'] = 0;
  /* Field: Global: Site information */
  $handler->display->display_options['fields']['site_info']['id'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['table'] = 'views';
  $handler->display->display_options['fields']['site_info']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['site_info']['site_info'] = 'base_url';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '[site_info]/uuid/node/[uuid]';
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'fieldtrips/analyse/csv';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'list' => 'list',
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['return_path'] = 'fieldtrips';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: RSS Feed */
  $handler = $view->new_display('feed', 'RSS Feed', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'RSS Feed';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => '',
        'language' => '',
        'category' => '',
        'image' => '',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'uuid_1',
        'description' => 'field_fieldtrip_public_summary',
        'author' => 'field_fieldtrip_user',
        'category' => 'field_fieldtrip_status',
        'comments' => '',
        'enclosure' => '',
        'guid' => '',
        'pubDate' => 'field_fieldtrip_start_end_date',
      ),
    ),
    'dc' => array(
      'views_rss_dc' => array(
        'title' => 'title',
        'creator' => 'field_fieldtrip_user',
        'subject' => 'field_fieldtrip_status',
        'description' => 'field_fieldtrip_public_summary',
        'publisher' => 'site_info',
        'contributor' => '',
        'date' => 'field_fieldtrip_start_end_date',
        'type' => 'field_fieldtrip_status',
        'format' => '',
        'identifier' => '',
        'source' => '',
        'language' => '',
        'relation' => '',
        'coverage' => '',
        'rights' => '',
      ),
    ),
    'georss' => array(
      'views_rss_georss' => array(
        'point' => '',
        'line' => '',
        'polygon' => '',
        'box' => '',
        'circle' => '',
        'featureName' => '',
        'featureTypeTag' => '',
        'relationshipTag' => '',
        'elev' => '',
        'floor' => '',
        'radius' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Narrative */
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['id'] = 'field_fieldtrip_narrative';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['field'] = 'field_fieldtrip_narrative';
  /* Field: Indexed Node: Public Summary */
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['id'] = 'field_fieldtrip_public_summary';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['field'] = 'field_fieldtrip_public_summary';
  /* Field: Indexed Node: Admin Units */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Locations */
  $handler->display->display_options['fields']['field_fieldtrip_places']['id'] = 'field_fieldtrip_places';
  $handler->display->display_options['fields']['field_fieldtrip_places']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_places']['field'] = 'field_fieldtrip_places';
  $handler->display->display_options['fields']['field_fieldtrip_places']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_fieldtrip_places']['view_mode'] = 'full';
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_fieldtrip_status']['id'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_status']['field'] = 'field_fieldtrip_status';
  /* Field: Indexed Node: Approval Date */
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['id'] = 'field_fieldtrip_approval_date';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['field'] = 'field_fieldtrip_approval_date';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['type'] = 'format_interval';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['settings'] = array(
    'interval' => '2',
    'interval_display' => 'time ago',
  );
  /* Field: Indexed Node: Approved By */
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['id'] = 'field_fieldtrip_approved_by';
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['field'] = 'field_fieldtrip_approved_by';
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['view_mode'] = 'full';
  /* Field: Indexed Node: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['id'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: User */
  $handler->display->display_options['fields']['field_fieldtrip_user']['id'] = 'field_fieldtrip_user';
  $handler->display->display_options['fields']['field_fieldtrip_user']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_user']['field'] = 'field_fieldtrip_user';
  $handler->display->display_options['fields']['field_fieldtrip_user']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_fieldtrip_user']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_fieldtrip_user']['bypass_access'] = 0;
  /* Field: Global: Site information */
  $handler->display->display_options['fields']['site_info']['id'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['table'] = 'views';
  $handler->display->display_options['fields']['site_info']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['site_info'] = 'base_url';
  /* Field: Indexed Node: UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'Field Trip UUID';
  $handler->display->display_options['fields']['uuid']['link_to_entity'] = 0;
  /* Field: Indexed Node: UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'Field Trip URL';
  $handler->display->display_options['fields']['uuid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uuid_1']['alter']['text'] = '[site_info]/uuid/node/[uuid]';
  $handler->display->display_options['fields']['uuid_1']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'fieldtrips/analyse/rss';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'list' => 'list',
  );
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: CSV Field Worker */
  $handler = $view->new_display('views_data_export', 'CSV Field Worker', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CSV';
  $handler->display->display_options['display_description'] = 'CSV export of field trips with the author emails';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Node: Author */
  $handler->display->display_options['relationships']['author']['id'] = 'author';
  $handler->display->display_options['relationships']['author']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['relationships']['author']['field'] = 'author';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Relationship: Indexed Node: User */
  $handler->display->display_options['relationships']['field_fieldtrip_user']['id'] = 'field_fieldtrip_user';
  $handler->display->display_options['relationships']['field_fieldtrip_user']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['relationships']['field_fieldtrip_user']['field'] = 'field_fieldtrip_user';
  /* Relationship: Indexed Node: Approved By */
  $handler->display->display_options['relationships']['field_fieldtrip_approved_by']['id'] = 'field_fieldtrip_approved_by';
  $handler->display->display_options['relationships']['field_fieldtrip_approved_by']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['relationships']['field_fieldtrip_approved_by']['field'] = 'field_fieldtrip_approved_by';
  /* Field: Indexed Node: UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uuid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Narrative */
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['id'] = 'field_fieldtrip_narrative';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_narrative']['field'] = 'field_fieldtrip_narrative';
  /* Field: Indexed Node: Public Summary */
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['id'] = 'field_fieldtrip_public_summary';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_public_summary']['field'] = 'field_fieldtrip_public_summary';
  /* Field: Indexed Node: Admin Unit */
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['id'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['field'] = 'taxonomy_vocabulary_6';
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['taxonomy_vocabulary_6']['view_mode'] = 'full';
  /* Field: Indexed Node: Locations */
  $handler->display->display_options['fields']['field_fieldtrip_places']['id'] = 'field_fieldtrip_places';
  $handler->display->display_options['fields']['field_fieldtrip_places']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_places']['field'] = 'field_fieldtrip_places';
  $handler->display->display_options['fields']['field_fieldtrip_places']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_fieldtrip_places']['view_mode'] = 'full';
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_fieldtrip_status']['id'] = 'field_fieldtrip_status';
  $handler->display->display_options['fields']['field_fieldtrip_status']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_status']['field'] = 'field_fieldtrip_status';
  /* Field: Indexed Node: Approval Date */
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['id'] = 'field_fieldtrip_approval_date';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['field'] = 'field_fieldtrip_approval_date';
  $handler->display->display_options['fields']['field_fieldtrip_approval_date']['settings'] = array(
    'format_type' => 'export_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Approved By */
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['id'] = 'field_fieldtrip_approved_by';
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['field'] = 'field_fieldtrip_approved_by';
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_fieldtrip_approved_by']['view_mode'] = 'full';
  /* Field: Indexed Node: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['id'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date']['settings'] = array(
    'format_type' => 'export_only',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: Start and End Date */
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['id'] = 'field_fieldtrip_start_end_date_1';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['field'] = 'field_fieldtrip_start_end_date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_fieldtrip_start_end_date_1']['settings'] = array(
    'format_type' => 'export_only',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Indexed Node: User */
  $handler->display->display_options['fields']['field_fieldtrip_user']['id'] = 'field_fieldtrip_user';
  $handler->display->display_options['fields']['field_fieldtrip_user']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['field_fieldtrip_user']['field'] = 'field_fieldtrip_user';
  $handler->display->display_options['fields']['field_fieldtrip_user']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_fieldtrip_user']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_fieldtrip_user']['bypass_access'] = 0;
  /* Field: Global: Site information */
  $handler->display->display_options['fields']['site_info']['id'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['table'] = 'views';
  $handler->display->display_options['fields']['site_info']['field'] = 'site_info';
  $handler->display->display_options['fields']['site_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['site_info']['site_info'] = 'base_url';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_devtrac_solr_field_trip_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '[site_info]/uuid/node/[uuid]';
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: User: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'entity_user';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'author';
  $handler->display->display_options['fields']['mail']['label'] = 'Author Email';
  $handler->display->display_options['fields']['mail']['link_to_entity'] = 0;
  /* Field: User: UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'entity_user';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'field_fieldtrip_user';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'User UUID';
  $handler->display->display_options['fields']['uuid_1']['link_to_entity'] = 0;
  /* Field: User: UUID */
  $handler->display->display_options['fields']['uuid_2']['id'] = 'uuid_2';
  $handler->display->display_options['fields']['uuid_2']['table'] = 'entity_user';
  $handler->display->display_options['fields']['uuid_2']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_2']['relationship'] = 'field_fieldtrip_approved_by';
  $handler->display->display_options['fields']['uuid_2']['label'] = 'Approved By UUID';
  $handler->display->display_options['fields']['uuid_2']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'fieldtrips/analyse/csv';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'list' => 'list',
  );
  $handler->display->display_options['sitename_title'] = 0;
  $handler->display->display_options['return_path'] = 'fieldtrips';
  $handler->display->display_options['segment_size'] = '100';
  $export['devtrac_solr_view_fieldtrips'] = $view;

  return $export;
}
