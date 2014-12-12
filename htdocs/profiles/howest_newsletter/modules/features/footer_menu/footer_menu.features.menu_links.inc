<?php
/**
 * @file
 * footer_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function footer_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer_contact:mailto:inside@howest.be
  $menu_links['menu-footer_contact:mailto:inside@howest.be'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'mailto:inside@howest.be',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer_contact:mailto:inside@howest.be',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');


  return $menu_links;
}
