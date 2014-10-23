<?php
/**
 * @file
 * howest_newsletter_settings.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function howest_newsletter_settings_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => 0,
  );
  // Exported language: nl.
  $languages['nl'] = array(
    'language' => 'nl',
    'name' => 'Dutch',
    'native' => 'Nederlands',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'nl',
    'weight' => 0,
  );
  return $languages;
}
