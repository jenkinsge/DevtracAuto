api = 2
core = 7.x

; Include the definition for how to build Drupal core directly, including patches:
; This is the 'should' way, but our jenkins server does drush make http:// and that
; does not work with includes. So we patch from within this file
;includes[] = drupal-org-core.make

projects[drupal][type] = core
projects[drupal][version] = 7

; Patches for Core
;projects[drupal][patch][] = https://drupal.org/files/1093420-22.patch

; Pull the project from git
projects[devtrac][type] = "profile"
projects[devtrac][download][type] = "git"
projects[devtrac][download][branch] = "7.x-1.x"
projects[devtrac][download][url]  = "http://git.drupal.org/project/devtrac.git"
