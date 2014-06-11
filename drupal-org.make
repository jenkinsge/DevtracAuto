; Drush Make File
core = 7.x
api = 2

projects[drupal][type] = core
projects[drupal][version] = "7.x"

; Zipped projects
projects[helpinject][download][type] = "file"
projects[helpinject][download][url] = "http://drupal.org/files/helpinject_1.zip"
projects[helpinject][subdir] = "contrib"
