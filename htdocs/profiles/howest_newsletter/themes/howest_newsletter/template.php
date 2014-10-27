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

  // Execute the query
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
