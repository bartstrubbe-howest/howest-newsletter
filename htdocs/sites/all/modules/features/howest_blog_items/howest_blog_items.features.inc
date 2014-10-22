<?php
/**
 * @file
 * howest_blog_items.features.inc
 */

/**
 * Implements hook_views_api().
 */
function howest_blog_items_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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
