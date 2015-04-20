<?php
/**
 * @file
 * howest_blog_items.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function howest_blog_items_ctools_plugin_api($module = NULL, $api = NULL) {
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
