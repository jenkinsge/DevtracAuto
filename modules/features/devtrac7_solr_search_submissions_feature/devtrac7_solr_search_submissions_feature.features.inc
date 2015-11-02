<?php
/**
 * @file
 * devtrac7_solr_search_submissions_feature.features.inc
 */

/**
 * Implements hook_views_api().
 */
function devtrac7_solr_search_submissions_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function devtrac7_solr_search_submissions_feature_default_search_api_index() {
  $items = array();
  $items['devtrac_solr_submissions_index'] = entity_import('search_api_index', '{
    "name" : "Devtrac Solr Submissions Index",
    "machine_name" : "devtrac_solr_submissions_index",
    "description" : null,
    "server" : "devtrac_search_server",
    "item_type" : "questionnaire_submission",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "changed" : { "type" : "date" },
        "context_id" : { "type" : "integer" },
        "context_type" : { "type" : "string" },
        "created" : { "type" : "date" },
        "questionnaire_id" : { "type" : "integer" },
        "recipient" : { "type" : "integer", "entity_type" : "user" },
        "recipient_id" : { "type" : "integer" },
        "recipient_type" : { "type" : "string" },
        "search_api_language" : { "type" : "string" },
        "sid" : { "type" : "integer" },
        "uuid" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : false } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "date_processor" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "default" : "0", "fields" : { "created" : true, "changed" : true } }
        },
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : { "status" : 0, "weight" : "15", "settings" : { "fields" : [] } },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0"
  }');
  return $items;
}
