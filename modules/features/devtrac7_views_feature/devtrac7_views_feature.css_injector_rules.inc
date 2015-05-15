<?php
/**
 * @file
 * devtrac7_views_feature.css_injector_rules.inc
 */

/**
 * Implements hook_css_injector_rule().
 */
function devtrac7_views_feature_css_injector_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 1;
  $rule->name = 'Filename Styling';
  $rule->admin_description = 'shows names above icons of files';
  $rule->css = '.page-node .views-field-filename {
    position: absolute;
    width: 185px;
/*    height: 185px;
    display: block;*/
    padding-left: 5px;
    padding-right: 5px;
    background-color: #000;
    opacity: .5;
    pointer-events: none;
}


.page-node  .views-field-filename span {
    color: white;
    word-wrap: break-word;
    font-size: small;
    display: block;
     pointer-events: none;
}';
  $rule->media = 'all';
  $rule->preprocess = 1;
  $rule->inline = 0;
  $rule->page_visibility = 0;
  $rule->page_visibility_pages = '';
  $export['Filename Styling'] = $rule;

  return $export;
}
