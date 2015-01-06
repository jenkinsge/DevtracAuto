<?php
/**
 * @file
 * devtrac7_solr_search_answers_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function devtrac7_solr_search_answers_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'questionnaire_answer-questionnaire_answer-taxonomy_vocabulary_1'
  $field_instances['questionnaire_answer-questionnaire_answer-taxonomy_vocabulary_1'] = array(
    'bundle' => 'questionnaire_answer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the appropriate Location Type.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'questionnaire_answer',
    'field_name' => 'taxonomy_vocabulary_1',
    'label' => 'Location Type',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'shs',
      'settings' => array(
        'apply_chosen' => 0,
        'content_taxonomy_opt_groups' => FALSE,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'shs' => array(
          'create_new_levels' => 0,
          'create_new_terms' => 0,
          'force_deepest' => 0,
          'node_count' => 0,
          'use_chosen' => 'chosen',
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => -1.25,
    ),
  );

  // Exported field_instance: 'questionnaire_answer-questionnaire_answer-taxonomy_vocabulary_6'
  $field_instances['questionnaire_answer-questionnaire_answer-taxonomy_vocabulary_6'] = array(
    'bundle' => 'questionnaire_answer',
    'default_value' => array(
      0 => array(
        'tid' => 948,
      ),
    ),
    'deleted' => 0,
    'description' => ' Hold the \'Control\' key on your keyboard to select multiple districts.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'map_popup_view_mode' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'mobile' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'questionnaire_answer',
    'field_name' => 'taxonomy_vocabulary_6',
    'label' => 'Admin Unit',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mapit',
      'settings' => array(
        'apply_chosen' => 1,
        'mapit_setting_geofield' => 'field_place_lat_long',
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'mapit',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t(' Hold the \'Control\' key on your keyboard to select multiple districts.');
  t('Admin Unit');
  t('Location Type');
  t('Select the appropriate Location Type.');

  return $field_instances;
}
