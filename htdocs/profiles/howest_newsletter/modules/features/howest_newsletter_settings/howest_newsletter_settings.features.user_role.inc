<?php
/**
 * @file
 * howest_newsletter_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function howest_newsletter_settings_user_default_roles() {
  $roles = array();

  // Exported role: admin.
  $roles['admin'] = array(
    'name' => 'admin',
    'weight' => 3,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 5,
  );

  // Exported role: publisher.
  $roles['publisher'] = array(
    'name' => 'publisher',
    'weight' => 4,
  );

  // Exported role: reader.
  $roles['reader'] = array(
    'name' => 'reader',
    'weight' => 2,
  );

  return $roles;
}
