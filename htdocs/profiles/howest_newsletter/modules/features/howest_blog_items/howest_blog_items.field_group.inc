<?php
/**
 * @file
 * howest_blog_items.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function howest_blog_items_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|blog_item|default';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_item';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_date',
      2 => 'group_tags',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_content|node|blog_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|blog_item|default';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_item';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Labels:',
    'weight' => '4',
    'children' => array(
      0 => 'field_content',
      1 => 'field_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Labels:',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tags field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags|node|blog_item|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|blog_item|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'tags',
    'weight' => '5',
    'children' => array(
      0 => 'field_content',
      1 => 'field_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'group-tags field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_tags|node|blog_item|form'] = $field_group;

  return $export;
}
