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
  $realm_variables['global']['default'] = array(
  '404_fast_html' => '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd"><html xmlns="http://www.w3.org/1999/xhtml"><head><title>404 Not Found</title></head><body><h1>Not Found</h1><p>The requested URL "@path" was not found on this server.</p></body></html>',
  '404_fast_paths' => '/\\.(?:txt|png|gif|jpe?g|css|js|ico|swf|flv|cgi|bat|pl|dll|exe|asp)$/i',
  '404_fast_paths_exclude' => '/\\/(?:styles)\\//',
  'additional_settings__active_tab_blog_item' => 'edit-comment',
  'admin_theme' => 'seven',
  'anonymous' => 'Anonymous',
  'clean_url' => TRUE,
  'comment_anonymous_banner' => 0,
  'comment_anonymous_blog_item' => 0,
  'comment_banner' => 0,
  'comment_blog_item' => 1,
  'comment_default_mode_banner' => 1,
  'comment_default_mode_blog_item' => 0,
  'comment_default_per_page_banner' => 50,
  'comment_default_per_page_blog_item' => 30,
  'comment_form_location_banner' => 1,
  'comment_form_location_blog_item' => 0,
  'comment_preview_banner' => 1,
  'comment_preview_blog_item' => 0,
  'comment_subject_field_banner' => 1,
  'comment_subject_field_blog_item' => 0,
  'configurable_timezones' => 0,
  'cron_key' => 'bHPc0YIiCv5QGJF56UPbPMHMd1XdOmz6rCvjRhmQKFU',
  'cron_last' => 1418379901,
  'css_js_query_string' => 'nfmw6s',
  'ctools_last_cron' => 1418294101,
  'date_api_use_iso8601' => 0,
  'date_api_version' => 7.2,
  'date_default_timezone' => 'Europe/Brussels',
  'date_first_day' => 0,
  'date_views_day_format_without_year' => 'l, F j',
  'date_views_day_format_with_year' => 'l, F j, Y',
  'date_views_month_format_without_year' => 'F',
  'date_views_month_format_with_year' => 'F Y',
  'date_views_week_format_without_year' => 'F j',
  'date_views_week_format_with_year' => 'F j, Y',
  'default_nodes_main' => 10,
  'diff_enable_revisions_page_node_blog_item' => 1,
  'diff_show_preview_changes_node_blog_item' => 1,
  'diff_view_mode_preview_node_blog_item' => 'full',
  'drupal_http_request_fails' => FALSE,
  'drupal_private_key' => 'BsVStGbG87FHCs-aAJvN-yQxOTvle5DlVvzz2VY4lWA',
  'email__active_tab' => 'edit-email-password-reset',
  'empty_timezone_message' => 0,
  'features_codecache' => array(
    'howest_banner' => array(
      'variable' => 'a9ebdb4eda5809393f951bd369706681',
      'field_base' => '6097609149a9b675bba96c990a87b01c',
      'field_instance' => 'cefbf40d50d5910312893f7eb28ae39c',
      'dependencies' => 'd9cfa3e85ca75566ad879dda8227c9c4',
      'image' => '016966820b961d01d1413515a766dd2b',
      'node' => 'f1d1f2c09514cc7ee394009136387f88',
    ),
    'howest_blog_items' => array(
      'variable' => '8e7480411fa0037df43a8aa0a7dfd173',
      'field_base' => '572827192d04e1cb443b111301dc3aaa',
      'field_instance' => '57cc8c4fbb8942d44a71f05426fe38f7',
      'taxonomy' => '18d7a0e378cd4cd9368db7d3836bd82f',
      'dependencies' => 'bd029e4f8d5a820a13a944456005e315',
      'node' => 'fd6a8b575dcc19010d5331df9a7f3b52',
      'views_view' => '126d1a0dc7edde523ee4e4c884dc5524',
      'rules_config' => '0065ce7eb4c536416df5ddcda82fa31c',
    ),
    'howest_newsletter_settings' => array(
      'variable' => '21a82847e74b79c84d0be229c010c828',
      'ckeditor_profile' => '4bee0810e4ccf02ebc19f1244f00e717',
      'filter' => '9f4ed7bef8c4b57a65798270dfd9808b',
      'user_role' => 'af4f94193dc6e2e154ac4779e8174c15',
      'dependencies' => 'b29899b8fbac7a4bb093f2a8f3ef9bfd',
      'variable_realm' => '5fb8a065b2021ac85913516a148ebb6d',
      'user_permission' => '3080792005fa4da709625d316b11f29f',
    ),
    'i18n_settings' => array(
      'variable' => '4e6c9964eee34c3e94d798d2d6256b1b',
      'language' => '09613e6ca4fe9efe1382da72a88ff762',
      'dependencies' => '5fa7d612425e9bfaa9564004c164a62c',
    ),
    'howest_image_styles' => array(
      'dependencies' => 'b5cc61d4a303d79dab8a8515c295c0c2',
      'image' => '909a9a731cd4096530a8ae5f71eba75f',
    ),
    'howest_ldap_configuration' => array(
      'variable' => '15288d59d2e5ee98c264e6a0101cdd10',
      'dependencies' => 'adafc3b499f2633383bd022baaa966fe',
      'ldap_authorization' => '991c99868eaa9811a894133cc020c27e',
      'ldap_servers' => 'ea35936c70c1b95cc0e3fac2419d32ab',
    ),
  ),
  'features_ignored_orphans' => array(),
  'features_semaphore' => array(),
  'feed_default_items' => 10,
  'feed_description' => '',
  'feed_item_length' => 'teaser',
  'field_bundle_settings_node__banner' => array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => 0,
        ),
        'scheduler_settings' => array(
          'weight' => 2,
        ),
      ),
      'display' => array(),
    ),
  ),
  'field_bundle_settings_node__blog_item' => array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => 0,
        ),
      ),
      'display' => array(),
    ),
  ),
  'file_temporary_path' => '/tmp',
  'filter_fallback_format' => 'plain_text',
  'howest_newsletter_settings_access_denied_msg' => array(
    'value' => '',
    'format' => 'full_html',
  ),
  'howest_newsletter_settings_access_denied_title' => 'Welkom op Howest Inside',
  'image_toolkit' => 'gd',
  'imce_profiles' => array(
    1 => array(
      'name' => 'User-1',
      'usertab' => 1,
      'filesize' => 0,
      'quota' => 0,
      'tuquota' => 0,
      'extensions' => '*',
      'dimensions' => '1200x1200',
      'filenum' => 0,
      'directories' => array(
        0 => array(
          'name' => '.',
          'subnav' => 1,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 1,
          'resize' => 1,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Small',
          'dimensions' => '90x90',
          'prefix' => 'small_',
          'suffix' => '',
        ),
        1 => array(
          'name' => 'Medium',
          'dimensions' => '120x120',
          'prefix' => 'medium_',
          'suffix' => '',
        ),
        2 => array(
          'name' => 'Large',
          'dimensions' => '180x180',
          'prefix' => 'large_',
          'suffix' => '',
        ),
      ),
    ),
    2 => array(
      'name' => 'Sample profile',
      'usertab' => 1,
      'filesize' => 1,
      'quota' => 2,
      'tuquota' => 0,
      'extensions' => 'gif png jpg jpeg',
      'dimensions' => '800x600',
      'filenum' => 1,
      'directories' => array(
        0 => array(
          'name' => 'u%uid',
          'subnav' => 0,
          'browse' => 1,
          'upload' => 1,
          'thumb' => 1,
          'delete' => 0,
          'resize' => 0,
        ),
      ),
      'thumbnails' => array(
        0 => array(
          'name' => 'Thumb',
          'dimensions' => '90x90',
          'prefix' => 'thumb_',
          'suffix' => '',
        ),
      ),
    ),
  ),
  'install_profile' => 'howest_newsletter',
  'install_task' => 'done',
  'install_time' => 1414951468,
  'javascript_parsed' => array(
    0 => 'misc/drupal.js',
    1 => 'sites/all/modules/contrib/jquery_update/replace/jquery/1.10/jquery.min.js',
    2 => 'misc/jquery.once.js',
    3 => 'profiles/howest_newsletter/themes/howest_newsletter/js/script.js',
    4 => 'sites/all/modules/contrib/jquery_update/replace/ui/external/jquery.cookie.js',
    5 => 'modules/toolbar/toolbar.js',
    6 => 'misc/form.js',
    7 => 'misc/tableselect.js',
    8 => 'misc/tableheader.js',
    9 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.core.min.js',
    10 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.datepicker.min.js',
    11 => 'modules/locale/locale.datepicker.js',
    12 => 'sites/all/modules/contrib/date/date_popup/jquery.timeentry.pack.js',
    13 => 'sites/all/modules/contrib/date/date_popup/date_popup.js',
    14 => 'sites/all/modules/contrib/jquery_update/replace/misc/jquery.form.min.js',
    15 => 'misc/progress.js',
    16 => 'sites/all/modules/contrib/jquery_update/js/jquery_update.js',
    17 => 'misc/ajax.js',
    18 => 'modules/file/file.js',
    19 => 'sites/all/modules/contrib/ckeditor/includes/ckeditor.utils.js',
    20 => 'misc/textarea.js',
    21 => 'modules/field/modules/text/text.js',
    22 => 'modules/filter/filter.js',
    23 => 'misc/states.js',
    24 => 'misc/collapse.js',
    25 => 'modules/menu/menu.js',
    26 => 'modules/node/node.js',
    27 => 'modules/comment/comment-node-form.js',
    28 => 'misc/autocomplete.js',
    29 => 'misc/vertical-tabs.js',
    30 => 'modules/user/user.js',
    31 => 'misc/tabledrag.js',
    32 => 'sites/all/modules/contrib/ctools/js/dropbutton.js',
    33 => 'sites/all/modules/contrib/ctools/js/auto-submit.js',
    34 => 'sites/all/modules/contrib/jquery_update/replace/misc/1.9/jquery.ba-bbq.min.js',
    35 => 'sites/all/modules/contrib/views/js/base.js',
    36 => 'sites/all/modules/contrib/views/js/views-list.js',
    37 => 'sites/all/modules/contrib/views/js/ajax.js',
    38 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.widget.min.js',
    39 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.tabs.min.js',
    40 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.button.min.js',
    41 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.mouse.min.js',
    42 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.draggable.min.js',
    43 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.position.min.js',
    44 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.resizable.min.js',
    45 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.dialog.min.js',
    46 => 'sites/all/modules/contrib/ctools/js/dependent.js',
    47 => 'sites/all/modules/contrib/ctools/js/collapsible-div.js',
    48 => 'sites/all/modules/contrib/views/js/views-admin.js',
    49 => 'sites/all/modules/contrib/features/features.js',
    50 => 'misc/machine-name.js',
    51 => 'modules/taxonomy/taxonomy.js',
    52 => 'modules/field_ui/field_ui.js',
    53 => 'modules/menu/menu.admin.js',
    54 => 'sites/all/modules/contrib/scheduler/scheduler_vertical_tabs.js',
    55 => 'modules/node/content_types.js',
  ),
  'l10n_update_check_disabled' => 0,
  'l10n_update_check_frequency' => 0,
  'l10n_update_check_mode' => 2,
  'l10n_update_download_store' => '',
  'l10n_update_import_mode' => 1,
  'language_content_type_banner' => 0,
  'language_content_type_blog_item' => 2,
  'language_count' => 2,
  'language_default' => array(
    'language' => 'nl',
    'name' => 'Dutch',
    'native' => 'Nederlands',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'nl',
    'weight' => 0,
    'javascript' => 'yOWGFd2GfCbJBFJ7OYnzCLkIwfILqvapICaEcJ4jSlw',
  ),
  'language_negotiation_language' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-user' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_user',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-browser' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_browser',
      ),
      'file' => 'includes/locale.inc',
      'cache' => 0,
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  ),
  'language_negotiation_language_content' => array(
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_negotiation_language_url' => array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  ),
  'language_types' => array(
    'language' => TRUE,
    'language_content' => FALSE,
    'language_url' => FALSE,
  ),
  'ldap_authentication_conf' => array(
    'sids' => array(
      'howest ldap' => 'howest ldap',
    ),
    'authenticationMode' => 1,
    'loginUIUsernameTxt' => NULL,
    'loginUIPasswordTxt' => NULL,
    'ldapUserHelpLinkUrl' => NULL,
    'ldapUserHelpLinkText' => 'Logon Help',
    'emailOption' => 3,
    'emailUpdate' => 1,
    'passwordOption' => 2,
    'allowOnlyIfTextInDn' => array(),
    'excludeIfTextInDn' => array(),
    'allowTestPhp' => '',
    'excludeIfNoAuthorizations' => NULL,
    'ssoRemoteUserStripDomainName' => NULL,
    'ssoExcludedPaths' => array(),
    'ssoExcludedHosts' => array(),
    'seamlessLogin' => NULL,
    'ssoNotifyAuthentication' => NULL,
    'ldapImplementation' => NULL,
    'cookieExpire' => NULL,
    'emailTemplate' => '@username@fake-domain.com',
    'emailTemplateHandling' => 3,
    'templateUsagePromptUser' => 0,
    'templateUsageNeverUpdate' => 0,
    'templateUsageResolveConflict' => 0,
    'templateUsagePromptRegex' => '.*@fake-domain\\.com',
    'templateUsageRedirectOnLogin' => 0,
  ),
  'ldap_user_conf' => array(
    'drupalAcctProvisionServer' => 'howest ldap',
    'ldapEntryProvisionServer' => 0,
    'drupalAcctProvisionTriggers' => array(
      2 => 2,
      1 => 1,
    ),
    'ldapEntryProvisionTriggers' => array(
      6 => 0,
      7 => 0,
      8 => 0,
      3 => 0,
    ),
    'orphanedDrupalAcctBehavior' => 'ldap_user_orphan_email',
    'orphanedCheckQty' => 100,
    'userConflictResolve' => 2,
    'manualAccountConflict' => 2,
    'acctCreation' => 4,
    'ldapUserSynchMappings' => array(),
    'disableAdminPasswordField' => 0,
  ),
  'ldap_user_cron_last_uid_checked' => 1,
  'locale_language_providers_weight_language' => array(
    'locale-url' => -8,
    'locale-session' => -6,
    'locale-user' => -4,
    'locale-browser' => -2,
    'language-default' => 10,
  ),
  'menu_expanded' => array(),
  'menu_masks' => array(
    0 => 507,
    1 => 506,
    2 => 501,
    3 => 493,
    4 => 253,
    5 => 252,
    6 => 250,
    7 => 247,
    8 => 246,
    9 => 245,
    10 => 126,
    11 => 125,
    12 => 124,
    13 => 123,
    14 => 122,
    15 => 121,
    16 => 117,
    17 => 63,
    18 => 62,
    19 => 61,
    20 => 60,
    21 => 59,
    22 => 58,
    23 => 44,
    24 => 31,
    25 => 30,
    26 => 29,
    27 => 25,
    28 => 24,
    29 => 23,
    30 => 21,
    31 => 15,
    32 => 14,
    33 => 13,
    34 => 11,
    35 => 7,
    36 => 6,
    37 => 5,
    38 => 3,
    39 => 2,
    40 => 1,
  ),
  'menu_options_banner' => array(),
  'menu_options_blog_item' => array(
    0 => 'main-menu',
  ),
  'menu_parent_banner' => 'main-menu:0',
  'menu_parent_blog_item' => 'main-menu:0',
  'node_admin_theme' => 1,
  'node_cron_last' => 1417708852,
  'node_options_banner' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_options_blog_item' => array(
    0 => 'promote',
  ),
  'node_preview_banner' => 1,
  'node_preview_blog_item' => 1,
  'node_submitted_banner' => 1,
  'node_submitted_blog_item' => 1,
  'path_alias_whitelist' => array(),
  'rules_event_whitelist' => array(
    'node_insert--blog_item' => 0,
  ),
  'scheduler_expand_fieldset_blog_item' => 0,
  'scheduler_publish_enable_blog_item' => 0,
  'scheduler_publish_past_date_blog_item' => 'error',
  'scheduler_publish_required_blog_item' => 0,
  'scheduler_publish_revision_blog_item' => 0,
  'scheduler_publish_touch_blog_item' => 0,
  'scheduler_unpublish_enable_blog_item' => 0,
  'scheduler_unpublish_required_blog_item' => 0,
  'scheduler_unpublish_revision_blog_item' => 0,
  'scheduler_use_vertical_tabs_blog_item' => 1,
  'site_403' => 'access-denied',
  'site_404' => '',
  'site_default_country' => 'BE',
  'site_frontpage' => 'blog-items',
  'site_mail' => 'inside@howest.be',
  'site_name' => 'Howest Blog',
  'site_slogan' => '',
  'tagclouds_block_tags_1' => 12,
  'tagclouds_display_node_link' => 1,
  'tagclouds_display_type' => 'style',
  'tagclouds_language_separation' => 1,
  'tagclouds_levels' => 6,
  'tagclouds_page_amount' => 60,
  'tagclouds_sort_order' => 'count,desc',
  'theme_default' => 'howest_newsletter',
  'update_last_check' => 1418333703,
  'update_last_email_notification' => 1416821227,
  'update_notify_emails' => array(
    0 => 'admin@example.com',
  ),
  'user_admin_role' => 0,
  'user_cancel_method' => 'user_cancel_block',
  'user_default_timezone' => 0,
  'user_email_verification' => 1,
  'user_mail_cancel_confirm_body' => '[user:name],

A request to cancel your account has been made at [site:name].

You may now cancel your account on [site:url-brief] by clicking this link or copying and pasting it into your browser:

[user:cancel-url]

NOTE: The cancellation of your account is not reversible.

This link expires in one day and nothing will happen if it is not used.

--  [site:name] team',
  'user_mail_cancel_confirm_subject' => 'Account cancellation request for [user:name] at [site:name]',
  'user_mail_password_reset_body' => '[user:name],

A request to reset the password for your account has been made at [site:name].

You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password. It expires after one day and nothing will happen if it\'s not used.

--  [site:name] team',
  'user_mail_password_reset_subject' => 'Replacement login information for [user:name] at [site:name]',
  'user_mail_register_admin_created_body' => '[user:name],

A site administrator at [site:name] has created an account for you. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_admin_created_subject' => 'An administrator created an account for you at [site:name]',
  'user_mail_register_no_approval_required_body' => '[user:name],

Thank you for registering at [site:name]. You may now log in by clicking this link or copying and pasting it to your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_register_no_approval_required_subject' => 'Account details for [user:name] at [site:name]',
  'user_mail_register_pending_approval_body' => '[user:name],

Thank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.


--  [site:name] team',
  'user_mail_register_pending_approval_subject' => 'Account details for [user:name] at [site:name] (pending admin approval)',
  'user_mail_status_activated_body' => '[user:name],

Your account at [site:name] has been activated.

You may now log in by clicking this link or copying and pasting it into your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team',
  'user_mail_status_activated_notify' => 1,
  'user_mail_status_activated_subject' => 'Account details for [user:name] at [site:name] (approved)',
  'user_mail_status_blocked_body' => '[user:name],

Your account on [site:name] has been blocked.

--  [site:name] team',
  'user_mail_status_blocked_notify' => 0,
  'user_mail_status_blocked_subject' => 'Account details for [user:name] at [site:name] (blocked)',
  'user_mail_status_canceled_body' => '[user:name],

Your account on [site:name] has been canceled.

--  [site:name] team',
  'user_mail_status_canceled_notify' => 0,
  'user_mail_status_canceled_subject' => 'Account details for [user:name] at [site:name] (canceled)',
  'user_pictures' => 0,
  'user_picture_default' => '',
  'user_picture_dimensions' => '85x85',
  'user_picture_file_size' => 30,
  'user_picture_guidelines' => '',
  'user_picture_path' => 'pictures',
  'user_picture_style' => '',
  'user_register' => 0,
  'user_signatures' => 0,
  'variable_realm_list_language' => array(
    0 => 'howest_newsletter_settings_access_denied_msg',
    1 => 'howest_newsletter_settings_access_denied_title',
    2 => 'site_name',
    3 => 'site_slogan',
  ),
  'views_defaults' => array(
    'taxonomy_term' => FALSE,
  ),
);
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
