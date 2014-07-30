Feature: Logout Devtrac Behat Test
  In order to logout, you have to be logged in
  Background: In order to logout, you have to be logged in as a registered user or as an admin

  Scenario: Devtrac Logout user
    Given I am logged in with the "field worker" role
    When I press on "Sign Out"
    Then I am on "/"

      
