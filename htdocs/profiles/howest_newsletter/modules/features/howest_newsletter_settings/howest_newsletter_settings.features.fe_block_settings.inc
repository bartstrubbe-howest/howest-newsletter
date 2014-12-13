<?php
/**
 * @file
 * howest_newsletter_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function howest_newsletter_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-header'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-header',
    'module' => 'menu',
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
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'howest_newsletter',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
