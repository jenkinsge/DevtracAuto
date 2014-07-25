Feature: Logout Devtrac Behat Test
  In order to logout, you have to be logged in
  Background: In order to logout, you have to be logged in as a registered user or as an admin

  Scenario: Devtrac Logout user
    Given I am logged in as a user with "administer users, administer permissions, access user profiles, administer site configuration, administer modules, create taxonomy_vocabulary_6"
    When I press on "Sign Out"
    Then I am on "/"

      
