Feature: Devtrac Site Behat Create Field Trip Test
  In order to create a field trip, you have to be logged in and have permissions to create a field trip
  Background: In order to create a field trip, you have to be logged in and have permissions to create a field trip
  
  @api
  Scenario: Devtrac Site Behat Check For Field Trip form Test
    Given I am logged in as a user with the "field worker" role
    And I am on "/node/add/fieldtrip"
    Then I should see "Create Field Trip"

  @api
  Scenario: Devtrac Demo User Tries creating new user Test
    Given I am logged in as a user with the "field worker" role
    And I am on "/node/add/fieldtrip"
    When I fill in "Title" with "fieldtitle"
    And I fill in "Purpose " with "1"
    And I fill in "Percentage" with "100"
    And I press the "Save" button
    Then I am on "/fieldtrip/fieldtitle"

  @api
  Scenario: Devtrac Testing for all empty fields cases
    Given I am logged in as a user with the "field worker" role
    And I am on "/node/add/fieldtrip"
     When I fill in "Title" with ""
    And I fill in "Purpose " with "1"
    And I fill in "Percentage" with "100" 

    When I fill in "Title" with "fieldtitle"
    And I fill in "Purpose " with "_none"
    And I fill in "Percentage" with "100"

    When I fill in "Title" with "fieldtitle"
    And I fill in "Purpose " with "1"
    And I fill in "Percentage" with ""

    And I press the "Save" button
    Then I should see "ERROR"
    When I follow "Sign out"
    Then I am on "/"
