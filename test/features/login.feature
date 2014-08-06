Feature: Login Devtrac Behat Test
  Background: In order to login, i have to be on home/index page

  Scenario: Devtac behatActual login
    Given I am on "/user"
    When I fill in name with "admin"
    And I fill in password with "admin"
    And I press the "Login" button
    Then I am on "/users/admin"
