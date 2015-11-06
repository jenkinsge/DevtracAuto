<?php
/**
 * @file
 * devtrac7_solr_search_submissions_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac7_solr_search_submissions_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'devtrac_solr_submissions_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_devtrac_solr_submissions_index';
  $view->human_name = 'Devtrac Solr Submissions View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Submission: Submission ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Field: Indexed Submission: Uuid */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'Submission GUID';
  $handler->display->display_options['fields']['uuid']['link_to_entity'] = 0;
  /* Field: Indexed Submission: Context_id */
  $handler->display->display_options['fields']['context_id']['id'] = 'context_id';
  $handler->display->display_options['fields']['context_id']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['context_id']['field'] = 'context_id';
  $handler->display->display_options['fields']['context_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['context_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['context_id']['separator'] = '';
  $handler->display->display_options['fields']['context_id']['link_to_entity'] = 0;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'devtrac_nodes';
  $handler->display->display_options['fields']['view']['display'] = 'views_data_export_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!context_id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Context UUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[view]';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  /* Field: Indexed Submission: Context_type */
  $handler->display->display_options['fields']['context_type']['id'] = 'context_type';
  $handler->display->display_options['fields']['context_type']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['context_type']['field'] = 'context_type';
  $handler->display->display_options['fields']['context_type']['label'] = 'Context Type';
  $handler->display->display_options['fields']['context_type']['link_to_entity'] = 0;
  /* Field: Indexed Submission: Questionnaire */
  $handler->display->display_options['fields']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['questionnaire_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['questionnaire_id']['link_to_entity'] = 0;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'devtrac_nodes';
  $handler->display->display_options['fields']['view_1']['display'] = 'views_data_export_1';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!questionnaire_id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Questionnaire UUID';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[view_1]';
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = TRUE;
  /* Field: Indexed Submission: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'export_only';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'date_only';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Submission: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'export_only';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_only';
  $handler->display->display_options['fields']['changed']['link_to_entity'] = 0;

  /* Display: Devtrac Submissions export */
  $handler = $view->new_display('views_data_export', 'Devtrac Submissions export', 'views_data_export_1');
  $handler->display->display_options['display_description'] = 'Export of all submissions to questionnaires in Devtrac.';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_replacement'] = '';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'statistics/answers/analyse/submissions/csv';

  /* Display: Devtrac Submissions export fieldworker */
  $handler = $view->new_display('views_data_export', 'Devtrac Submissions export fieldworker', 'views_data_export_2');
  $handler->display->display_options['display_description'] = 'Export of all submissions to questionnaires in Devtrac.';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 1;
  $handler->display->display_options['style_options']['newline_replacement'] = '';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Indexed Submission: Author */
  $handler->display->display_options['relationships']['recipient']['id'] = 'recipient';
  $handler->display->display_options['relationships']['recipient']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['relationships']['recipient']['field'] = 'recipient';
  $handler->display->display_options['relationships']['recipient']['label'] = 'Recipient';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Submission: Submission ID */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Field: Indexed Submission: Uuid */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'Submission GUID';
  $handler->display->display_options['fields']['uuid']['link_to_entity'] = 0;
  /* Field: Indexed Submission: Context_id */
  $handler->display->display_options['fields']['context_id']['id'] = 'context_id';
  $handler->display->display_options['fields']['context_id']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['context_id']['field'] = 'context_id';
  $handler->display->display_options['fields']['context_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['context_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['context_id']['separator'] = '';
  $handler->display->display_options['fields']['context_id']['link_to_entity'] = 0;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'devtrac_nodes';
  $handler->display->display_options['fields']['view']['display'] = 'views_data_export_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!context_id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Context UUID';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[view]';
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  /* Field: Indexed Submission: Context_type */
  $handler->display->display_options['fields']['context_type']['id'] = 'context_type';
  $handler->display->display_options['fields']['context_type']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['context_type']['field'] = 'context_type';
  $handler->display->display_options['fields']['context_type']['label'] = 'Context Type';
  $handler->display->display_options['fields']['context_type']['link_to_entity'] = 0;
  /* Field: Indexed Submission: Questionnaire */
  $handler->display->display_options['fields']['questionnaire_id']['id'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['questionnaire_id']['field'] = 'questionnaire_id';
  $handler->display->display_options['fields']['questionnaire_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['questionnaire_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['questionnaire_id']['link_to_entity'] = 0;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'devtrac_nodes';
  $handler->display->display_options['fields']['view_1']['display'] = 'views_data_export_1';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!questionnaire_id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Questionnaire UUID';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[view_1]';
  $handler->display->display_options['fields']['nothing_1']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['strip_tags'] = TRUE;
  /* Field: Indexed Submission: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'export_only';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'date_only';
  $handler->display->display_options['fields']['created']['link_to_entity'] = 0;
  /* Field: Indexed Submission: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'export_only';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'date_only';
  $handler->display->display_options['fields']['changed']['link_to_entity'] = 0;
  /* Field: User: UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'entity_user';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'recipient';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'Recepient UUID';
  $handler->display->display_options['fields']['uuid_1']['link_to_entity'] = 0;
  /* Field: Indexed Submission: Recipient Type */
  $handler->display->display_options['fields']['recipient_type_1']['id'] = 'recipient_type_1';
  $handler->display->display_options['fields']['recipient_type_1']['table'] = 'search_api_index_devtrac_solr_submissions_index';
  $handler->display->display_options['fields']['recipient_type_1']['field'] = 'recipient_type';
  $handler->display->display_options['fields']['recipient_type_1']['link_to_entity'] = 0;
  $handler->display->display_options['path'] = 'statistics/answers/analyse/submissions/csvfieldworker';
  $export['devtrac_solr_submissions_view'] = $view;

  return $export;
}
