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
    'print' => '27',
    'title' => '-5',
    'revision_information' => '21',
    'author' => '22',
    'options' => '23',
    'comment_settings' => '24',
    'menu' => '20',
    'path' => '26',
    'attachments' => '25',
    'workflow' => '14',
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
