<?php
/**
 * @file
 * howest_newsletter_settings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function howest_newsletter_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-header_suggesties:node/42
  $menu_links['menu-header_suggesties:node/42'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'node/42',
    'router_path' => 'node/%',
    'link_title' => 'Suggesties',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-header_suggesties:node/42',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'nl',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-header_suggestions:node/43
  $menu_links['menu-header_suggestions:node/43'] = array(
    'menu_name' => 'menu-header',
    'link_path' => 'node/43',
    'router_path' => 'node/%',
    'link_title' => 'Suggestions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-header_suggestions:node/43',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Suggesties');
  t('Suggestions');


  return $menu_links;
}
