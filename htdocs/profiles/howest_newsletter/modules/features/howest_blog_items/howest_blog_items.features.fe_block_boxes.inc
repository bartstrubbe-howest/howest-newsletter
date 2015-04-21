<?php
/**
 * @file
 * howest_blog_items.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function howest_blog_items_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contacteer de redactie';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'contact_us_block';
  $fe_block_boxes->body = '<a href="http://contacteer-de-redactie">Contacteer onze redactie</a>
';

  $export['contact_us_block'] = $fe_block_boxes;

  return $export;
}
