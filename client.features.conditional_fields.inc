<?php

/**
 * Implementation of hook_conditional_fields_default_fields().
 */
function client_conditional_fields_default_fields() {
$items = array();
$items[] = array (
  'control_field_name' => 'field_client_deceased',
  'field_name' => 'field_client_dateofdeath',
  'type' => 'land_use_client',
  'trigger_values' => 
  array (
    'Yes' => 'Yes',
  ),
);
$items[] = array (
  'control_field_name' => 'field_client_entity',
  'field_name' => 'field_client_corporate_name',
  'type' => 'land_use_client',
  'trigger_values' => 
  array (
    'Corporation' => 'Corporation',
  ),
);
return $items;
}
