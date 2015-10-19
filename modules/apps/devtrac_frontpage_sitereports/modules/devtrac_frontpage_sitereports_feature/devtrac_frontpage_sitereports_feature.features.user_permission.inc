<?php
/**
 * @file
 * devtrac7_field_permissions_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function devtrac_frontpage_sitereports_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'deny configuration on node form'.
  $permissions['deny configuration on node form'] = array(
    'name' => 'deny configuration on node form',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
      'field worker' => 'field worker',
      'iati manager' => 'iati manager',
    ),
    'module' => 'nodesinblock',
  );

  return $permissions;
}
