<?php
/**
* User-only migration - not profile fields
*
* The data file is assumed to be in
*   sites/all/modules/a_wusel_migration/data_sources/
*/
class DevtracImportsSiteReportType extends DevtracImportsCsvBase {
	public function __construct($arguments = array()) {
    parent::__construct($arguments);
		$this->description = t('Import Site Report Types');
		$columns = array(
				0 => array('name', t('name')),
        1 => array('field_location_required', t('Location Required field')),
        2 => array('field_action_item_possible', t('Action Item Possible field')),
        3 => array('field_reporttype_isactive', t('Report Type Active field')),
		);
		// TIP: delete ", array('header_rows' => 1)" in the next line, if the CSV-file has NO header-line
		$this->source = new MigrateSourceCSV(DRUPAL_ROOT . '/' . drupal_get_path('module', 'devtrac_imports') . '/data/sitereporttype.csv', $columns, array('header_rows' => 1));
		//$this->destination = new MigrateDestinationUser();
		$this->destination = new MigrateDestinationTerm('vocabulary_7');
		// Instantiate the map.
		$this->map = new MigrateSQLMap($this->machineName,
				array('name' => array( // this field is used to connect user und profile2
						'type' => 'varchar',
						'length' => 20,
						'not null' => TRUE,
						'description' => t('Taxonomy term') // description never used
				)
				),
				MigrateDestinationTerm::getKeySchema()
		);
		
		$this->addFieldMapping('name', 'name')
		->defaultValue('')
		->description(t('Name'));
    $this->addFieldMapping('field_location_required', 'field_location_required')
          ->description(t('This is the value for the field_location_required field'));
    $this->addFieldMapping('field_action_item_possible', 'field_action_item_possible')
          ->description(t('This is the value for the field_action_item_possible field'));
    $this->addFieldMapping('field_reporttype_isactive', 'field_reporttype_isactive')
          ->description(t('This is the value for the field_reporttype_isactive field'));
		
	}
}



