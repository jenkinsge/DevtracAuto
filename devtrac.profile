<?php
/**
 * @file
 * Enables modules and site configuration for the devtrac installation profile.
 */

/**
 * Implements hook_form_alter().
 *
 * Allows the profile to alter the site configuration form
 */
function devtrac_form_install_configure_form_alter(&$form, $form_state, $form_id){
  if($form_id == 'install_configure_form'){
    //set default for site name field
    $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
  }
}

/**
 * Implements hook_init().
 *
 * Rebuild the menu to make sure the menu items defined in views displays are
 * created in the menu router table. Also enable the devtrac7_profile_menu
 * module to populate the menu links table and set the default taxonomy access
 * settings by running devtrac_initialize_taxonomy_access().
 * Only do this when the marker set during install is set. Delete the marker
 * from the database afterwards.
 */
function devtrac_init() {
  if (variable_get('devtrac_menu_rebuild_needed', FALSE)) {
    menu_rebuild();
    module_enable(array('devtrac7_profile_menu'));
    devtrac_initialize_taxonomy_access();
    variable_del('devtrac_menu_rebuild_needed');
  }
}
