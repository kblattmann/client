<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function client_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function client_node_info() {
  $items = array(
    'land_use_client' => array(
      'name' => t('Land Use Client'),
      'module' => 'features',
      'description' => t('This is a list of all clients of this system.'),
      'has_title' => '1',
      'title_label' => t('Applicaton Number'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('Please enter application number on the KFN Land Use Authorization application form. '),
    ),
  );
  return $items;
}
