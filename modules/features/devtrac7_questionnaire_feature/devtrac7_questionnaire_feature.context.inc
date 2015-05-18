<?php
/**
 * @file
 * devtrac7_questionnaire_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac7_questionnaire_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'context_node_view_question';
  $context->description = 'Show on Questions';
  $context->tag = 'nodetype';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'questionnaire_question' => 'questionnaire_question',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'quicktabs-devtrac_questions' => array(
          'module' => 'quicktabs',
          'delta' => 'devtrac_questions',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'breadcrumb',
          'weight' => '-9',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'delta_node_page_layout',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Show on Questions');
  t('nodetype');
  $export['context_node_view_question'] = $context;

  return $export;
}
