<?php
/**
 * @file
 * cd_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cd_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_default_export_path';
  $strongarm->value = 'sites/all/modules/custom/features';
  $export['features_default_export_path'] = $strongarm;

  return $export;
}
