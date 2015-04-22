<?php
/**
 * @file
 * howest_blog_items.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function howest_blog_items_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function howest_blog_items_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function howest_blog_items_image_default_styles() {
  $styles = array();

  // Exported image style: blog_overview_750x280.
  $styles['blog_overview_750x280'] = array(
    'label' => 'Blog overview 750x280',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 750,
          'height' => 280,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function howest_blog_items_node_info() {
  $items = array(
    'blog_item' => array(
      'name' => t('Blog item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function howest_blog_items_default_search_api_index() {
  $items = array();
  $items['default_fuzzysearch_index'] = entity_import('search_api_index', '{
    "name" : "Default fuzzysearch index",
    "machine_name" : "default_fuzzysearch_index",
    "description" : "A default index with basic settings automatically created by fuzzysearch.",
    "server" : "default_fuzzysearch_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "500",
      "fields" : {
        "body:summary" : { "type" : "text" },
        "body:value" : { "type" : "text" },
        "field_content" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_date" : { "type" : "date" },
        "field_location" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "search_api_language" : { "type" : "string" },
        "source" : { "type" : "integer", "entity_type" : "node" },
        "title" : { "type" : "text", "boost" : "5.0" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "teaser" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "default" : "1", "bundles" : [] }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "-50",
          "settings" : { "fields" : {
              "title" : true,
              "title_field" : true,
              "body:value" : true,
              "body:summary" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "-49",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\n          h2 = 3\\r\\n          h3 = 2\\r\\n          strong = 2\\r\\n          b = 2\\r\\n          em = 1.5\\r\\n          u = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "-48",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "spaces" : "[^\\\\p{L}\\\\p{N}]",
            "ignorable" : "[-]"
          }
        },
        "fuzzysearch_search" : {
          "status" : 1,
          "weight" : "-47",
          "settings" : {
            "ngram_length" : "3",
            "missing_letters" : "5",
            "extra_letters" : "5",
            "completeness" : "40",
            "sort_score" : 0
          }
        },
        "fuzzysearch_excerpt" : {
          "status" : 1,
          "weight" : "-46",
          "settings" : {
            "debug_score" : 0,
            "excerpt_length" : "200",
            "max_result_length" : "400",
            "spelling" : "30"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "title" : true,
              "title_field" : true,
              "body:value" : true,
              "body:summary" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
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

/**
 * Implements hook_default_search_api_page().
 */
function howest_blog_items_default_search_api_page() {
  $items = array();
  $items['blog_search'] = entity_import('search_api_page', '{
    "index_id" : "default_fuzzysearch_index",
    "path" : "search\\/",
    "name" : "Blog search",
    "machine_name" : "blog_search",
    "description" : "",
    "options" : {
      "mode" : "terms",
      "fields" : [],
      "per_page" : "20",
      "result_page_search_form" : 1,
      "get_per_page" : 0,
      "view_mode" : "search_result",
      "language_filter" : { "current" : "current" }
    },
    "enabled" : "1"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function howest_blog_items_default_search_api_server() {
  $items = array();
  $items['default_fuzzysearch_server'] = entity_import('search_api_server', '{
    "name" : "Default fuzzysearch server",
    "machine_name" : "default_fuzzysearch_server",
    "description" : "A default server automatically created by fuzzysearch.",
    "class" : "fuzzysearch_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "indexes" : { "default_fuzzysearch_index" : {
          "title" : {
            "table" : "fuzzysearch_default_fuzzysearch_index_title",
            "type" : "text",
            "boost" : "5.0"
          },
          "search_api_language" : {
            "table" : "fuzzysearch_default_fuzzysearch_index_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_content" : {
            "table" : "fuzzysearch_default_fuzzysearch_index_field_content",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_location" : {
            "table" : "fuzzysearch_default_fuzzysearch_index_field_location",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_date" : {
            "table" : "fuzzysearch_default_fuzzysearch_index_field_date",
            "type" : "date",
            "boost" : "1.0"
          },
          "source" : {
            "table" : "fuzzysearch_default_fuzzysearch_index_source",
            "type" : "integer",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "fuzzysearch_default_fuzzysearch_index_body_value",
            "type" : "text",
            "boost" : "1.0"
          },
          "body:summary" : {
            "table" : "fuzzysearch_default_fuzzysearch_index_body_summary",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  return $items;
}
