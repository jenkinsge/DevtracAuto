<?php
class DevtracImportsPlacetypeLevel0 extends XMLMigration {

  public function __construct($arguments = array()) {
    parent::__construct($arguments);
    
    $this->description = t('Imports Place Types on Level 0.');
    $this->dependencies = array(
    	//'DevtracImportsPlacetypeIcons',
    );
        
    $items_url = drupal_get_path('module', 'devtrac_imports') . '/data/placetype.xml';
    $this->item_xpath = "/placetypes/placetype";  // relative to document
    $this->item_ID_xpath = 'name';
    // Do some general administration
    // $this->description = t('Imports relations of type funding organisation role.');

    $fields = array(
        'name', 'name',
    );

    $options = array();
   
    $items_class = new MigrateItemsXML($items_url, $this->item_xpath, $this->item_ID_xpath);

    $this->source = new MigrateSourceMultiItems($items_class, $fields);
    $this->destination = new MigrateDestinationTerm('vocabulary_1');

    $this->map = new MigrateSQLMap($this->machineName,
        array(
            'name' => array(
                'type' => 'varchar',
                'length' => 255,
                'not null' => TRUE,
                'description' => 'name',
                'alias' => 'st',
            ),
        ),
        MigrateDestinationTerm::getKeySchema()
    );
    //$sourcemaptable = str_replace('relationorgrolefunding', 'dataactivity', $this->generateMachineName());
    //$this->addFieldMapping('field_oecd_code', 'code')->xpath('@code'); //->defaultValue('1');
    $this->addFieldMapping('name', 'name')->xpath('name');    
    
    $this->addFieldMapping('field_term_icon', 'name')
      ->xpath('name')
      ->sourceMigration('DevtracImportsPlacetypeIcons');
    $this->addFieldMapping('field_term_icon:file_class')
      ->defaultValue('MigrateFileFid');

  }

}




