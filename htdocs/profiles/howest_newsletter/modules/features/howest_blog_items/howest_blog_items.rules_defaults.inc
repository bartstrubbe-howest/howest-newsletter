<?php
/**
 * @file
 * howest_blog_items.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function howest_blog_items_default_rules_configuration() {
  $items = array();
  $items['rules_new_blog_item_created'] = entity_import('rules_config', '{ "rules_new_blog_item_created" : {
      "LABEL" : "New blog item created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--blog_item" : { "bundle" : "blog_item" } },
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "4" : "4" } },
            "subject" : "New blog item created",
            "message" : "Dear,\\r\\n\\r\\nA new blog item \\u0022[node:title]\\u0022 is created.\\r\\n[node:edit-url]"
          }
        }
      ]
    }
  }');
  return $items;
}
