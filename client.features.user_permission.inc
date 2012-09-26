<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function client_user_default_permissions() {
  $permissions = array();

  // Exported permission: create land_use_client content
  $permissions['create land_use_client content'] = array(
    'name' => 'create land_use_client content',
    'roles' => array(
      '0' => 'Environmental Assessor',
      '1' => 'GIS technician',
      '2' => 'Governance',
      '3' => 'administrator',
      '4' => 'clerk',
      '5' => 'guest',
      '6' => 'site manager',
    ),
  );

  // Exported permission: delete any land_use_client content
  $permissions['delete any land_use_client content'] = array(
    'name' => 'delete any land_use_client content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'clerk',
      '2' => 'site manager',
    ),
  );

  // Exported permission: delete own land_use_client content
  $permissions['delete own land_use_client content'] = array(
    'name' => 'delete own land_use_client content',
    'roles' => array(
      '0' => 'Environmental Assessor',
      '1' => 'Governance',
      '2' => 'administrator',
      '3' => 'clerk',
      '4' => 'guest',
      '5' => 'site manager',
    ),
  );

  // Exported permission: edit any land_use_client content
  $permissions['edit any land_use_client content'] = array(
    'name' => 'edit any land_use_client content',
    'roles' => array(
      '0' => 'Environmental Assessor',
      '1' => 'administrator',
      '2' => 'clerk',
      '3' => 'controller',
      '4' => 'guest',
      '5' => 'site manager',
    ),
  );

  // Exported permission: edit own land_use_client content
  $permissions['edit own land_use_client content'] = array(
    'name' => 'edit own land_use_client content',
    'roles' => array(
      '0' => 'Environmental Assessor',
      '1' => 'Governance',
      '2' => 'administrator',
      '3' => 'clerk',
      '4' => 'controller',
      '5' => 'guest',
      '6' => 'site manager',
    ),
  );

  // Exported permission: view unpublished land_use_client content
  $permissions['view unpublished land_use_client content'] = array(
    'name' => 'view unpublished land_use_client content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'controller',
    ),
  );

  return $permissions;
}
