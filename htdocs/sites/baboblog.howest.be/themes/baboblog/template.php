<?php

/**
 * @file
 * template.php
 */

function howest_banner_get_image(){

  global $language;
  $lang = $language->language;

  // Build a query to get the most recent banner image
  $query = db_select('node', 'n');
  $query->join('field_data_field_banner', 'b', 'b.entity_id = n.nid');
  $query->fields('b', array('field_banner_fid'))
    ->condition('n.type', "banner")
    ->condition('n.status', 1)
    ->condition('n.language', $lang)
    ->orderBy('created', 'DESC');
  $query = $query->extend('PagerDefault')
    ->limit(1);

  $fids = $query->execute()->fetchCol();
  $files = array();

  foreach($fids as $fid){
    $file = file_load($fid);
    $files[] = image_style_url('banner', $file->uri);
  }

  if(isset($files[0])){
    return $files[0];
  } else {
    return false;
  }
}

/**
 * Implements theme_field__field_type().
 */
function baboblog_field__taxonomy_term_reference($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<h3 class="field-label">' . $variables['label'] . ': </h3>';
  }

  // Render the items.
  $output .= ($variables['element']['#label_display'] == 'inline') ? '<div class="links inline">' : '<div class="links">';
  foreach ($variables['items'] as $delta => $item) {
    $item['#title'] = t($item['#title']);
    $output .= '<div class="taxonomy-term-reference-' . $delta . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
  }
  $output .= '</div>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . (!in_array('clearfix', $variables['classes_array']) ? ' clearfix' : '') . '"' . $variables['attributes'] .'>' . $output . '</div>';

  return $output;
}

// Define a teaser view mode template for blog posts
function baboblog_preprocess_node(&$variables) {
  $variables['date'] = format_date($variables['node']->created, 'blog_posted');

  if ($variables['node']->type == 'blog_item' && $variables['view_mode'] == 'teaser') {
    $variables['theme_hook_suggestions'][] = 'node__blog_item__teaser';
  }
}

// Change the search box placeholder text.
function baboblog_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {
    $form['search_block_form']['#attributes']['placeholder'] = t('I\'m looking for...');
  }
}
