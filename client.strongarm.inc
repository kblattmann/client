<?php

/**
 * Implementation of hook_strongarm().
 */
function client_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_land_use_client';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '21',
    'author' => '22',
    'options' => '23',
    'comment_settings' => '24',
    'menu' => '20',
    'path' => '26',
    'attachments' => '25',
    'print' => '27',
  );
  $export['content_extra_weights_land_use_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_land_use_client';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_land_use_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_land_use_client';
  $strongarm->value = '1';
  $export['upload_land_use_client'] = $strongarm;

  return $export;
}
