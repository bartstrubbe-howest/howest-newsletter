<?php
/**
 * @file
 * howest_newsletter_settings.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function howest_newsletter_settings_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['en'] = array(
  'howest_newsletter_settings_access_denied_msg' => array(
    'value' => '',
    'format' => 'full_html',
  ),
  'howest_newsletter_settings_access_denied_title' => 'Welcome to Howest Inside',
  'site_name' => 'Howest Blog',
  'site_slogan' => '',
);
  $realm_variables['language']['nl'] = array(
  'howest_newsletter_settings_access_denied_msg' => array(
    'value' => '',
    'format' => 'full_html',
  ),
  'howest_newsletter_settings_access_denied_title' => 'Welkom op Howest Inside',
  'site_name' => 'Howest Blog',
  'site_slogan' => '',
);

return $realm_variables;
}
