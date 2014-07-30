Feature: Devtrac Behat Create Site Report Test
  In order to create a field trip, you have to be logged in , and already have a site report created
  Background: In order to create a field trip, you have to be logged, and have an existing site report. 
  There are three types of site reports (1)Site Visit (2)Roadsite Observation (3) Human Interest Story

  @api
  Scenario: Devtrac Behat create Site Visit Field report
    Given I am logged in as a user with the "field worker" role
    When I visit "/node/add/fieldtrip"
    Then I should see "Create Field Trip"
    And "fieldtrip" nodes:
    | Title          | User | Purpose |  Percentage | field_fieldtrip_start_end_date[und][0][value][date] | field_fieldtrip_start_end_date[und][0][value2][date] |      field_fieldtrip_user  |
    | fieldtripTest  | 123456789        | 1                |    100                     |     14/7/2012    |       14/7/2017 | 1 |
    
    When I press the "Save" button
    Then I am on "/fieldtrip/fieldtripTest"

  @api @javascript
  Scenario: Devtrac Behat create Site Visit Field report Add Location on Site Visit
    Given I am logged in as a user with the "field worker" role
    And I am on "/node/15385/addplaceform/ajax/nojs/go?destination=node/15385"
    Then I should see "Select Site Report Type"
    When I select the radio button "Site Visit"
    And I select "Kampala" from "District"
    And I press the "Submit" button
    And I am on "/node/add/place/15385/209?edit%5Btaxonomy_vocabulary_6%5D%5Bund%5D=121&zoom=11&lat=0.318443000317&lon=32.596500396729"
    Then I should see "Create Location"
    When I click "Draw a Point"
    And I click "#OpenLayers_Layer_Vector_RootContainer_171 > canvas"

    And "place" nodes:
    |    Name           |  Location Type | Admin Unit |
    | SiteVisitLocation |  NGO           | Kampala    |

    And I press "Save"
    Then I should be redirected to "/fieldtrips/fieldtripTest"
    
  @api @javascript
  Scenario: Devtrac Behat Site Visit check if the forms are empty
    Given I am logged in as a user with the "field worker" role
    And I am on "/node/add/place/15385/209?edit%5Btaxonomy_vocabulary_6%5D%5Bund%5D=121&zoom=11&lat=0.318443000317&lon=32.596500396729"
    Then I should see "Create Location"
     And "place" nodes:
    |    Name           |  Location Type | Admin Unit |
    |                   |  NGO           | Kampala    |
    | SiteVisitLocation |                | Kampala    |
    | SiteVisitLocation |  NGO           |            |
    
    When I click "Draw a Point"
    And I click "#OpenLayers_Layer_Vector_RootContainer_171 > canvas"
    And I press "Save"
    Then I should see "ERROR"



 

 @api
  Scenario: Devtrac Behat create Roadside observation Field report
    Given I am logged in as a user with the "field worker" role
    When I visit "/node/add/fieldtrip"
    Then I should see "Create Field Trip"
    And "fieldtrip" nodes:
    | Title          | User | Purpose |  Percentage | field_fieldtrip_start_end_date[und][0][value][date] | field_fieldtrip_start_end_date[und][0][value2][date] |      field_fieldtrip_user  |
    | fieldtripTest  | 123456789        | 1                |    100                     |     14/7/2012    |       14/7/2017 | 1 |
    
    When I press the "Save" button
    Then I am on "/fieldtrip/fieldtripTest"

  @api @javascript
  Scenario: Devtrac Behat create Roadside observation Field report Add Location on Site Visit
    Given I am logged in as a user with the "field worker" role
    And I am on "/node/15385/addplaceform/ajax/nojs/go?destination=node/15385"
    Then I should see "Select Site Report Type"
    When I select the radio button "Roadside Observation"
    And I select "Kampala" from "District"
    And I press the "Submit" button
    And I am on "/node/add/ftritem/121?destination=node/15434/121&field_ftritem_field_trip=15434&edit%5Btaxonomy_vocabulary_6%5D%5Bund%5D=121&edit%5Btaxonomy_vocabulary_7%5D%5Bund%5D=210"
    Then I should see "Create Field Trip Report Item"


    And "ftritem" nodes:
    |    Title of Site Visit              | Admin Unit | Sector                             | Visited on  | Public Summary |   Full Report           |
    |    Roadside Observation             | Kampala    | Action relating to debt category   | 27/6/2014   | public_summary |   This_is_a_full_report |

    When I click "Draw a Point"
    And I click "#OpenLayers_Layer_Vector_RootContainer_171 > canvas"

    And I press "Save"
    Then I should be redirected to "/fieldtrips/fieldtripTest"

  @ap @javascript
  Scenario: Devtrac Behat Roadside observation check for empty fields on the form
    Given I am logged in as a user with the "field worker" role
     And I am on "/node/add/ftritem/121?destination=node/15434/121&field_ftritem_field_trip=15434&edit%5Btaxonomy_vocabulary_6%5D%5Bund%5D=121&edit%5Btaxonomy_vocabulary_7%5D%5Bund%5D=210"
    Then I should see "Create Field Trip Report Item"

    And "ftritem" nodes:
    |    Title of Site Visit              | Admin Unit | Sector                             | Visited on  | Public Summary |   Full Report           |
    |                                     | Kampala    | Action relating to debt category   | 27/6/2014   | public_summary |   This_is_a_full_report |
    |    Roadside Observation             |            | Action relating to debt category   | 27/6/2014   | public_summary |   This_is_a_full_report |
    |    Roadside Observation             | Kampala    |                                    | 27/6/2014   | public_summary |   This_is_a_full_report |
    |    Roadside Observation             | Kampala    | Action relating to debt category   |             | public_summary |   This_is_a_full_report |
    |    Roadside Observation             | Kampala    | Action relating to debt category   | 27/6/2014   |                |   This_is_a_full_report |
    |    Roadside Observation             | Kampala    | Action relating to debt category   | 27/6/2014   | public_summary |                         |

    When I click "Draw a Point"
    And I click "#OpenLayers_Layer_Vector_RootContainer_171 > canvas"

    And I press "Save"
    Then I should see "ERROR"





  @api
  Scenario: Devtrac Behat create Roadside Human Interest Story Field report
    Given I am logged in as a user with the "field worker" role
    When I visit "/node/add/fieldtrip"
    Then I should see "Create Field Trip"
    And "fieldtrip" nodes:
    | Title          | User | Purpose |  Percentage | field_fieldtrip_start_end_date[und][0][value][date] | field_fieldtrip_start_end_date[und][0][value2][date] |      field_fieldtrip_user  |
    | fieldtripTest  | 123456789        | 1                |    100                     |     14/7/2012    |       14/7/2017 | 1 |
    
    When I press the "Save" button
    Then I am on "/fieldtrip/fieldtripTest"

  @api @javascript
  Scenario: Devtrac Behat create Human Interest Story Field report Add Location on Site Visit
    Given I am logged in as a user with the "field worker" role
    And I am on "/node/15385/addplaceform/ajax/nojs/go?destination=node/15385"
    Then I should see "Select Site Report Type"
    When I select the radio button "Roadside Observation"
    And I select "Kampala" from "District"
    And I press the "Submit" button
    And I am on "/node/add/place/15434/211?edit%5Btaxonomy_vocabulary_6%5D%5Bund%5D=121&zoom=11&lat=0.318443000317&lon=32.596500396729"
    Then I should see "Create Location"

    And "place" nodes:
    |    Name                  |  Location Types        |              Admin Unit | 
    |    HumN Interest Story   |   NGO                  | Kampala                 |

    When I click "Draw a Point"
    And I click "#OpenLayers_Layer_Vector_RootContainer_171 > canvas"

    And I press "Save"
    Then I should be redirected to "/fieldtrips/fieldtripTest"

  @api @javascript
  Scenario: Devtrac Behat Test for Human Interest Story Empty Fields on the Form
    Given I am logged in as user with the "field worker" role
    And I am on "/node/add/place/15434/211?edit%5Btaxonomy_vocabulary_6%5D%5Bund%5D=121&zoom=11&lat=0.318443000317&lon=32.596500396729"
   Then I should see "Create Location"

    And "place" nodes:
    |    Name                  |  Location Types        |              Admin Unit | 
    |                          |   NGO                  | Kampala                 |
    |    HumN Interest Story   |                        | Kampala                 |
    |    HumN Interest Story   |   NGO                  |                         |

    When I click "Draw a Point"
    And I click "#OpenLayers_Layer_Vector_RootContainer_171 > canvas"

    And I press "Save"
    Then I should see "ERROR"


    
