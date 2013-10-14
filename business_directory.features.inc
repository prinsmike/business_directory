<?php
/**
 * @file
 * business_directory.features.inc
 */

/**
 * Implements hook_views_api().
 */
function business_directory_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function business_directory_node_info() {
  $items = array(
    'business' => array(
      'name' => t('Business'),
      'base' => 'node_content',
      'description' => t('Add a business to the business directory.'),
      'has_title' => '1',
      'title_label' => t('Business name'),
      'help' => t('Enter your business\' information into the form below.'),
    ),
  );
  return $items;
}
