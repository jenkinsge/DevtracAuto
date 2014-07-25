Feature: Devtrac Site Behat Demo User Test
  In order for the demo user to login, you must be on the login page
  Background: In order to login, the demo user must be on the login page. We want to test if the demo user can create a user. This test should fail

  Scenario: Devtrac Demo User Login Test
    Given Iam on "/user"
    When I fill in name with "user_demo"
    And I fill in password with "user_demo"
    And I press "Login"
    Then I am on "/user/me"
   
  Scenario: Devtrac check if form for creating new user exists
    Given I am on "/admin/people/create"
    Then I should see "People"
    Then I should see "Username" field
    Then I should see "E-mail address" field
    Then I should see "Password" field
    Then I should see "Confirm Password" field
    Then I should see "Function" field
    Then I should see "Manager" field
    Then I should see "Department" field
    Then I should see "First Name" field
    Then I should see "Surname" field
    Then I should see "About Me" field
    Then I should see "Create new account" button

  Scenario: Devtrac Demo User Tries creating new user Test
    Given I am on "/admin/people/create"
    When I fill in "Username" with "user_demo"
    And I fill in "E-mail address" with "user_demo@mountbatten.net"
    And I fill in "Password" with "user_demo"
    And I fill in "Confirm Password" with "user_demo"
    And I fill in "Function" with "Evaluator"
    And I fill in "Manager" with "AdminTest AdminTest Sir (admin)"
    And I fill in "Department" with "Education"
    And I fill in  "First Name" with "User Demo"
    And I fill in  "Surname" with "User Demo Demo"
    And I fill in  "About" with "Iam a account test account created by demo user"
    And I press "Create new account"
    Then I am on "/admin/people/create"

  
   
  Scenario: Devtrac Demo User Logout Test
    Given I am logged in as a user with "administer users, administer permissions, access user profiles, administer site configuration, administer modules, create taxonomy_vocabulary_6"
    When I press "Sign Out"
    Then I am at "/"
