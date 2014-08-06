Feature: Logout Devtrac Behat Test
  Background: In order to logout, you have to be logged in as a registered user or as an admin

  Scenario: Devtrac Logout user
    Given I am logged in with the "field worker" role
    When I press the "Sign Out" button
    Then I am on "/"

      
