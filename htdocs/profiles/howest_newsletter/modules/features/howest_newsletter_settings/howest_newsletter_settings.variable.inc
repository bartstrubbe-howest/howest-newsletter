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
  'admin_theme' => 'seven',
  'clean_url' => TRUE,
  'comment_anonymous_banner' => 0,
  'comment_anonymous_blog_item' => 0,
  'comment_banner' => 0,
  'comment_blog_item' => 2,
  'comment_default_mode_banner' => 1,
  'comment_default_mode_blog_item' => 1,
  'comment_default_per_page_banner' => 50,
  'comment_default_per_page_blog_item' => 30,
  'comment_form_location_banner' => 1,
  'comment_form_location_blog_item' => 1,
  'comment_preview_banner' => 1,
  'comment_preview_blog_item' => 0,
  'comment_subject_field_banner' => 1,
  'comment_subject_field_blog_item' => 1,
  'cron_key' => 'bHPc0YIiCv5QGJF56UPbPMHMd1XdOmz6rCvjRhmQKFU',
  'cron_last' => 1414760446,
  'css_js_query_string' => 'neb9q2',
  'ctools_last_cron' => 1414695116,
  'date_default_timezone' => 'UTC',
  'default_nodes_main' => 10,
  'drupal_http_request_fails' => FALSE,
  'drupal_private_key' => 'BsVStGbG87FHCs-aAJvN-yQxOTvle5DlVvzz2VY4lWA',
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
      'variable' => 'dd4e9ace081e9e59277291826f8f4580',
      'field_base' => '18bdb41c67863b831de0c9eea3f6ec78',
      'field_instance' => 'edf34194c5f61c82e1d181f46e0d2198',
      'taxonomy' => '18d7a0e378cd4cd9368db7d3836bd82f',
      'dependencies' => 'be9a48da78995fbc72ada81cd3d42217',
      'node' => 'fd6a8b575dcc19010d5331df9a7f3b52',
      'views_view' => '3ca7316bb7d2b517db7573a6b65fcdfc',
    ),
    'howest_newsletter_settings' => array(
      'variable' => '1415e7ef3b5349208bf3dff3c6e238bf',
      'ckeditor_profile' => '05bbe2348b94d1463e1a2d3766ce39fa',
      'filter' => '9f4ed7bef8c4b57a65798270dfd9808b',
      'user_role' => 'af4f94193dc6e2e154ac4779e8174c15',
      'dependencies' => 'de35c0e9c5ea94e959b6f4ef65792253',
      'variable_realm' => 'a59921287cbcd00078efd6c1d39b6cf6',
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
  ),
  'features_ignored_orphans' => array(),
  'features_semaphore' => array(),
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
  'howest_newsletter_settings_access_denied_msg' => '<p>geen toegang</p>
',
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
  'install_time' => 1414760446,
  'javascript_parsed' => array(
    0 => 'misc/drupal.js',
    1 => 'sites/all/modules/contrib/jquery_update/replace/jquery/1.10/jquery.min.js',
    2 => 'misc/jquery.once.js',
    3 => 'misc/form.js',
    4 => 'sites/all/modules/contrib/ckeditor/includes/ckeditor.utils.js',
    5 => 'misc/textarea.js',
    6 => 'modules/filter/filter.js',
    7 => 'sites/all/modules/contrib/jquery_update/replace/ui/external/jquery.cookie.js',
    8 => 'modules/toolbar/toolbar.js',
    'refresh:nl' => 'waiting',
    9 => 'profiles/howest_newsletter/themes/howest_newsletter/js/script.js',
    10 => 'sites/all/modules/contrib/features/features.js',
    11 => 'misc/tableheader.js',
    12 => 'misc/vertical-tabs.js',
    13 => 'misc/collapse.js',
    14 => 'misc/machine-name.js',
    15 => 'misc/autocomplete.js',
    16 => 'sites/all/modules/contrib/jquery_update/replace/misc/jquery.form.min.js',
    17 => 'misc/progress.js',
    18 => 'sites/all/modules/contrib/jquery_update/js/jquery_update.js',
    19 => 'misc/ajax.js',
    20 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.core.min.js',
    21 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.widget.min.js',
    22 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.button.min.js',
    23 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.mouse.min.js',
    24 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.draggable.min.js',
    25 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.position.min.js',
    26 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.resizable.min.js',
    27 => 'sites/all/modules/contrib/jquery_update/replace/ui/ui/minified/jquery.ui.dialog.min.js',
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
    'javascript' => '40LItYRa56vUcqemTo3QjLwpOeqYtB9GmrELQ_OKfUw',
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
  'locale_language_providers_weight_language' => array(
    'locale-url' => -8,
    'locale-session' => -6,
    'locale-user' => -4,
    'locale-browser' => -2,
    'language-default' => 10,
  ),
  'menu_expanded' => array(),
  'menu_masks' => array(
    0 => 501,
    1 => 493,
    2 => 250,
    3 => 247,
    4 => 246,
    5 => 245,
    6 => 125,
    7 => 124,
    8 => 123,
    9 => 122,
    10 => 121,
    11 => 117,
    12 => 63,
    13 => 62,
    14 => 61,
    15 => 60,
    16 => 59,
    17 => 58,
    18 => 44,
    19 => 31,
    20 => 30,
    21 => 29,
    22 => 24,
    23 => 23,
    24 => 21,
    25 => 15,
    26 => 14,
    27 => 13,
    28 => 11,
    29 => 7,
    30 => 6,
    31 => 5,
    32 => 3,
    33 => 2,
    34 => 1,
  ),
  'menu_options_banner' => array(),
  'menu_options_blog_item' => array(
    0 => 'main-menu',
  ),
  'menu_parent_banner' => 'main-menu:0',
  'menu_parent_blog_item' => 'main-menu:0',
  'node_admin_theme' => 1,
  'node_options_banner' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_options_blog_item' => array(
    0 => 'status',
    1 => 'promote',
  ),
  'node_preview_banner' => 1,
  'node_preview_blog_item' => 1,
  'node_submitted_banner' => 1,
  'node_submitted_blog_item' => 1,
  'path_alias_whitelist' => array(),
  'site_403' => 'access-denied',
  'site_404' => '',
  'site_default_country' => '',
  'site_frontpage' => 'blog-items',
  'site_mail' => 'admin@example.com',
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
  'update_last_check' => 1414760571,
  'update_notify_emails' => array(
    0 => 'admin@example.com',
  ),
  'variable_realm_list_language' => array(
    0 => 'howest_newsletter_settings_access_denied_msg',
    1 => 'site_name',
    2 => 'site_slogan',
  ),
);
  $realm_variables['language']['en'] = array(
  'howest_newsletter_settings_access_denied_msg' => array(
    'value' => '<p>Access denied.</p>
',
    'format' => 'full_html',
  ),
  'site_name' => 'Howest Blog',
  'site_slogan' => '',
);
  $realm_variables['language']['nl'] = array(
  'howest_newsletter_settings_access_denied_msg' => array(
    'value' => '<p>geen toegang</p>
',
    'format' => 'full_html',
  ),
  'site_name' => 'Howest Blog',
  'site_slogan' => '',
);

return $realm_variables;
}
