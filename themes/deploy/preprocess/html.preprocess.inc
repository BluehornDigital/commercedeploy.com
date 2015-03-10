<?php
/**
 * @file
 * Includes preproces of html
 */

/**
 * Implements hook_preprocess_html().
 */
function deploy_preprocess_html(&$variables) {
  // Add FontAwesome and Fonts
  drupal_add_css('//netdna.bootstrapcdn.com/font-awesome/4.0.3/css/font-awesome.css', array('type' => 'external'));
  drupal_add_css('//fonts.googleapis.com/css?family=Lato:400,700|Enriqueta:400,700', array('group' => CSS_THEME, 'type' => 'external'));
}
