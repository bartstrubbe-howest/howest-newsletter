<?php
/**
 * @file
 * howest_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function howest_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: blog_inline.
  $styles['blog_inline'] = array(
    'name' => 'blog_inline',
    'label' => 'blog_inline',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
