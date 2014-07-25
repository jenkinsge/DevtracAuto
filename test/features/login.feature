Feature: Login Devtrac Behat Test
  In order to login, i have to be on the login page
  Background: In order to login, i have to be on home/index page

  Scenario: Devtac behatActual login
    Given I am on "/user"
    When I fill in name with "admin"
    And I fill in password with "admin"
    And I press "Login"
    Then I am on "/users/admin"
