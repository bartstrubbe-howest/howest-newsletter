<?php
/**
 * @file
 * howest_blog_items.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function howest_blog_items_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'howest_newsletter' => array(
        'region' => 'top_navigation',
        'status' => 1,
        'theme' => 'howest_newsletter',
        'weight' => -13,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'howest_newsletter' => array(
        'region' => 'top_navigation',
        'status' => 1,
        'theme' => 'howest_newsletter',
        'weight' => -14,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-blog_items-block_blog_archive'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blog_items-block_blog_archive',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'howest_newsletter' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'howest_newsletter',
        'weight' => -11,
      ),
    ),
    'title' => 'Archief',
    'visibility' => 0,
  );

  $export['views-popular-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'popular-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'howest_newsletter' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'howest_newsletter',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-tag_cloud-block_blog_categories'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'tag_cloud-block_blog_categories',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'howest_newsletter' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'howest_newsletter',
        'weight' => -13,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
