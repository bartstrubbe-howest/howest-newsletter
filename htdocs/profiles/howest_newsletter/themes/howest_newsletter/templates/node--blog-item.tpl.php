<?php

/**
 * @file
 * Bartik's theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */

//dpm($content, 'content');

  $ical_link = l(t("Add date to your calendar"), "ical/" . $node->nid . "/export.ics",
    array("absolute" => TRUE,
      "attributes" => array("class" => array("ical"))
    )
  );

  hide($content['flippy_pager']);
  hide($content['comments']);
  hide($content['links']);
?>
<div id="node-<?php print $node->nid; ?>"
     class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <?php if (isset($field_deadline[LANGUAGE_NONE][0]['value']) && $field_deadline[LANGUAGE_NONE][0]['value'] == 1): ?>
    <div class="has-deadline"></div>
  <?php endif; ?>

  <?php print render($content['field_image']); ?>

  <div class="content clearfix"<?php print $content_attributes; ?>>

      <h1>
        <?php print $title; ?>
      </h1>

      <div class="meta submitted">
        <label><?php print (t('Published on')); ?>:</label> <?php print $date; ?>
      </div>


    <div class="tags categories">
      <label>Labels:</label>
      <?php
        print render($content['field_content']);
        print render($content['field_location']);
      ?>
      <div class="fa fa-comments comment-icon">
        <?php 
          if (isset($comment_count)) {
            switch ($comment_count)  {
              case 0:
                print t('no comments');
                break;
              case 1:
                print $comment_count. ' ' . t('comment');
                break;

              default:
                print $comment_count. ' ' . t('comments');
                break;
            }
          }
        ?>
      </div>
    </div>
    <hr>

      <?php
        print render($content['body']);
        print $ical_link;
        print render($content['links']['statistics']);
      ?>
    <hr>

    <div class="tags categories">
      <label>Labels:</label>
      <?php
      print render($content['field_content']);
      print render($content['field_location']);
      ?>
    </div>

    <hr>

    <p class="title"><?php print t('Comments'); ?></p>
    <ul class="comments">
        <?php 
          $i = 0; 
        ?>
        <?php foreach (element_children($content['comments']['comments']) as $delta): 
        $i++;
          $attributes = array();
          $attributes['class'][] = $i % 2 ? 'odd' : 'even'; 
       
          if($content['comments']['comments'][$delta]['#comment']->depth == 1) {
            $attributes['class'][] = 'indented';
          }
          if($content['comments']['comments'][$delta]['#comment']->divs == 0) {
            $attributes['class'][] = 'no-border';
          }
        ?>
          <?php if (!empty($content['comments']['comments'][$delta]['#comment'])):?>
            <li <?php print drupal_attributes($attributes); ?>>
              <h3><?php print render($content['comments']['comments'][$delta]['#comment']->field_comment_name['und'][0]['safe_value']); ?></h3>
              <?php print render($content['comments']['comments'][$delta]['#comment']->comment_body['und'][0]['safe_value']); ?>
              <hr>
              <div class="author">
                <?php print render($content['comments']['comments'][$delta]['#comment']->name); ?>
                <span> - </span> 
                <?php print date('d-m-Y H:i',$content['comments']['comments'][$delta]['#comment']->created); ?>
              </div>
              <?php if (user_is_logged_in()): ?>
                <?php print render($content['comments']['comments'][$delta]['links']); ?>
              <?php endif; ?>
            </li>
          <?php endif; ?>
        <?php endforeach; ?>
      </ul>

      <?php
        print render($content['links']['comment']);
      ?>

  </div>

</div>

<?php print render($content['flippy_pager']); ?>