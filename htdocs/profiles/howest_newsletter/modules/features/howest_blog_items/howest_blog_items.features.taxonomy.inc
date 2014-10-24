<?php
/**
 * @file
 * howest_blog_items.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function howest_blog_items_taxonomy_default_vocabularies() {
  return array(
    'content' => array(
      'name' => 'Content',
      'machine_name' => 'content',
      'description' => 'Content Tags',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
    ),
    'location' => array(
      'name' => 'Location',
      'machine_name' => 'location',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
    ),
  );
}
