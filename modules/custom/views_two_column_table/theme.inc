<?php

/**
 * @file
 * Controls the output of a views_two_column_table view.
 */

/**
 * Display the view as a two column table.
 */
function template_preprocess_views_view_two_column_table(&$vars) {
  template_preprocess_views_view_table($vars);
}
