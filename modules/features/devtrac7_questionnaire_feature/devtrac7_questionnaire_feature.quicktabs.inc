<?php
/**
 * @file
 * devtrac7_questionnaire_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function devtrac7_questionnaire_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'devtrac_questions';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Devtrac Questions';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_question_answers-block_2',
      'hide_title' => 1,
      'title' => 'Answers',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_5390a3be06eb0d22f2133337ef0aec1d',
      'hide_title' => 1,
      'title' => 'Graph',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'views_delta_1be0377734906b5de037a77ac5cc7efa',
      'hide_title' => 1,
      'title' => 'Graph',
      'weight' => '-98',
      'type' => 'block',
    ),
    3 => array(
      'bid' => 'views_delta_d415415eef1fb5cefdfd77ba59e35234',
      'hide_title' => 1,
      'title' => 'Graph',
      'weight' => '-97',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Answers');
  t('Devtrac Questions');
  t('Graph');

  $export['devtrac_questions'] = $quicktabs;

  return $export;
}
