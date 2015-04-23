<?php
/**
 * @file
 * howest_blog_items.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function howest_blog_items_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access blog_search search_api_page'.
  $permissions['access blog_search search_api_page'] = array(
    'name' => 'access blog_search search_api_page',
    'roles' => array(),
    'module' => 'search_api_page',
  );

  // Exported permission: 'submit user generated blog item'.
  $permissions['submit user generated blog item'] = array(
    'name' => 'submit user generated blog item',
    'roles' => array(
      'admin' => 'admin',
      'editor' => 'editor',
      'publisher' => 'publisher',
      'reader' => 'reader',
    ),
    'module' => 'howest_blog_items',
  );

  return $permissions;
}
