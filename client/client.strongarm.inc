<?php

/**
 * Implementation of hook_strongarm().
 */
function client_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_land_use_client';
  $strongarm->value = 0;
  $export['comment_anonymous_land_use_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_land_use_client';
  $strongarm->value = '3';
  $export['comment_controls_land_use_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_land_use_client';
  $strongarm->value = '4';
  $export['comment_default_mode_land_use_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_land_use_client';
  $strongarm->value = '1';
  $export['comment_default_order_land_use_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_land_use_client';
  $strongarm->value = '50';
  $export['comment_default_per_page_land_use_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_land_use_client';
  $strongarm->value = '0';
  $export['comment_form_location_land_use_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_land_use_client';
  $strongarm->value = '2';
  $export['comment_land_use_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_land_use_client';
  $strongarm->value = '1';
  $export['comment_preview_land_use_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_land_use_client';
  $strongarm->value = '1';
  $export['comment_subject_field_land_use_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_land_use_client';
  $strongarm->value = array(
    'title' => '-5',
    'revision_information' => '16',
    'author' => '17',
    'options' => '18',
    'comment_settings' => '19',
    'menu' => '15',
    'path' => '21',
    'attachments' => '20',
    'print' => '22',
  );
  $export['content_extra_weights_land_use_client'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_land_use_client';
  $strongarm->value = '0';
  $export['language_content_type_land_use_client'] = $strongarm;

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
