<?php
/**
 * @file
 * howest_blog_items.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function howest_blog_items_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tagged-todo';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        11 => 11,
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'tagged-todo',
    ),
  );
  $context->condition_mode = 0;
  $export['tagged-todo'] = $context;

  return $export;
}
