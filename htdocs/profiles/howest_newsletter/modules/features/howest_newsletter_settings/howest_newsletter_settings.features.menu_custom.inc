<?php
/**
 * @file
 * howest_newsletter_settings.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function howest_newsletter_settings_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-header.
  $menus['menu-header'] = array(
    'menu_name' => 'menu-header',
    'title' => 'Header',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Header');


  return $menus;
}
