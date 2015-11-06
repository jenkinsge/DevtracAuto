<?php
/**
 * @file
 * devtrac7_site_configuration_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function devtrac7_site_configuration_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access secured pages'.
  $permissions['access secured pages'] = array(
    'name' => 'access secured pages',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'securesite',
  );

  return $permissions;
}
