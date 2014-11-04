<?php
/**
 * @file
 * devtrac_import_new_data_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function devtrac_import_new_data_feature_user_default_permissions() {
  $permissions = array();
  // Exported permission: 'clear devtrac7_all_data_fieldtrip_importer feeds'.
  $permissions['clear devtrac7_all_data_fieldtrip_importer feeds'] = array(
    'name' => 'clear devtrac7_all_data_fieldtrip_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac7_all_data_locations_importer feeds'.
  $permissions['clear devtrac7_all_data_locations_importer feeds'] = array(
    'name' => 'clear devtrac7_all_data_locations_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac7_all_data_site_report_importer feeds'.
  $permissions['clear devtrac7_all_data_site_report_importer feeds'] = array(
    'name' => 'clear devtrac7_all_data_site_report_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac7_all_users_importer feeds'.
  $permissions['clear devtrac7_all_users_importer feeds'] = array(
    'name' => 'clear devtrac7_all_users_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac7_data_actionitems_importer feeds'.
  $permissions['clear devtrac7_data_actionitems_importer feeds'] = array(
    'name' => 'clear devtrac7_data_actionitems_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac7_all_data_fieldtrip_importer feeds'.
  $permissions['import devtrac7_all_data_fieldtrip_importer feeds'] = array(
    'name' => 'import devtrac7_all_data_fieldtrip_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac7_all_data_locations_importer feeds'.
  $permissions['import devtrac7_all_data_locations_importer feeds'] = array(
    'name' => 'import devtrac7_all_data_locations_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac7_all_data_site_report_importer feeds'.
  $permissions['import devtrac7_all_data_site_report_importer feeds'] = array(
    'name' => 'import devtrac7_all_data_site_report_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac7_all_users_importer feeds'.
  $permissions['import devtrac7_all_users_importer feeds'] = array(
    'name' => 'import devtrac7_all_users_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac7_data_actionitems_importer feeds'.
  $permissions['import devtrac7_data_actionitems_importer feeds'] = array(
    'name' => 'import devtrac7_data_actionitems_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac7_all_data_fieldtrip_importer feeds'.
  $permissions['unlock devtrac7_all_data_fieldtrip_importer feeds'] = array(
    'name' => 'unlock devtrac7_all_data_fieldtrip_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac7_all_data_locations_importer feeds'.
  $permissions['unlock devtrac7_all_data_locations_importer feeds'] = array(
    'name' => 'unlock devtrac7_all_data_locations_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac7_all_data_site_report_importer feeds'.
  $permissions['unlock devtrac7_all_data_site_report_importer feeds'] = array(
    'name' => 'unlock devtrac7_all_data_site_report_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac7_all_users_importer feeds'.
  $permissions['unlock devtrac7_all_users_importer feeds'] = array(
    'name' => 'unlock devtrac7_all_users_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac7_data_actionitems_importer feeds'.
  $permissions['unlock devtrac7_data_actionitems_importer feeds'] = array(
    'name' => 'unlock devtrac7_data_actionitems_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
