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
      'name' => 'Inhoud',
      'machine_name' => 'content',
      'description' => 'Inhoudstags',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -9,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
    'location' => array(
      'name' => 'Locatie',
      'machine_name' => 'location',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -10,
      'language' => 'und',
      'i18n_mode' => 1,
    ),
  );
}
