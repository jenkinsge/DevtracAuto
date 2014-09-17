<?php
/**
 * @file
 * devtrac7_field_permissions_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function devtrac7_field_permissions_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'iati manager' => 'iati manager',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
      'iati manager' => 'iati manager',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access better messages'.
  $permissions['access better messages'] = array(
    'name' => 'access better messages',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'better_messages',
  );

  // Exported permission: 'access comments'.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'access proxy router'.
  $permissions['access proxy router'] = array(
    'name' => 'access proxy router',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'proxy',
  );

  // Exported permission: 'access relations'.
  $permissions['access relations'] = array(
    'name' => 'access relations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer better messages'.
  $permissions['administer better messages'] = array(
    'name' => 'administer better messages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'better_messages',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer devtrac'.
  $permissions['administer devtrac'] = array(
    'name' => 'administer devtrac',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'devtrac7',
  );

  // Exported permission: 'administer hidden comments'.
  $permissions['administer hidden comments'] = array(
    'name' => 'administer hidden comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'hidden_comment',
  );

  // Exported permission: 'administer own comments'.
  $permissions['administer own comments'] = array(
    'name' => 'administer own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'hidden_comment',
  );

  // Exported permission: 'administer personal comments'.
  $permissions['administer personal comments'] = array(
    'name' => 'administer personal comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'hidden_comment',
  );

  // Exported permission: 'administer relations'.
  $permissions['administer relations'] = array(
    'name' => 'administer relations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'user',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create field_organisation'.
  $permissions['create field_organisation'] = array(
    'name' => 'create field_organisation',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create questionnaire_question'.
  $permissions['create questionnaire_question'] = array(
    'name' => 'create questionnaire_question',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'questionnaire_question',
  );

  // Exported permission: 'create questionnaire_question content'.
  $permissions['create questionnaire_question content'] = array(
    'name' => 'create questionnaire_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create relations'.
  $permissions['create relations'] = array(
    'name' => 'create relations',
    'roles' => array(
      'administrator' => 'administrator',
      'iati manager' => 'iati manager',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'create taxonomy_vocabulary_1'.
  $permissions['create taxonomy_vocabulary_1'] = array(
    'name' => 'create taxonomy_vocabulary_1',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any questionnaire_question'.
  $permissions['delete any questionnaire_question'] = array(
    'name' => 'delete any questionnaire_question',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'questionnaire_question',
  );

  // Exported permission: 'delete any questionnaire_question content'.
  $permissions['delete any questionnaire_question content'] = array(
    'name' => 'delete any questionnaire_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own questionnaire_question content'.
  $permissions['delete own questionnaire_question content'] = array(
    'name' => 'delete own questionnaire_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete relations'.
  $permissions['delete relations'] = array(
    'name' => 'delete relations',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'edit any questionnaire_question'.
  $permissions['edit any questionnaire_question'] = array(
    'name' => 'edit any questionnaire_question',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'questionnaire_question',
  );

  // Exported permission: 'edit any questionnaire_question content'.
  $permissions['edit any questionnaire_question content'] = array(
    'name' => 'edit any questionnaire_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_organisation'.
  $permissions['edit field_organisation'] = array(
    'name' => 'edit field_organisation',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_organisation'.
  $permissions['edit own field_organisation'] = array(
    'name' => 'edit own field_organisation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own questionnaire_question content'.
  $permissions['edit own questionnaire_question content'] = array(
    'name' => 'edit own questionnaire_question content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own taxonomy_vocabulary_1'.
  $permissions['edit own taxonomy_vocabulary_1'] = array(
    'name' => 'edit own taxonomy_vocabulary_1',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit relations'.
  $permissions['edit relations'] = array(
    'name' => 'edit relations',
    'roles' => array(
      'administrator' => 'administrator',
      'iati manager' => 'iati manager',
    ),
    'module' => 'relation',
  );

  // Exported permission: 'edit taxonomy_vocabulary_1'.
  $permissions['edit taxonomy_vocabulary_1'] = array(
    'name' => 'edit taxonomy_vocabulary_1',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'get any binary files'.
  $permissions['get any binary files'] = array(
    'name' => 'get any binary files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'services',
  );

  // Exported permission: 'get own binary files'.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'services',
  );

  // Exported permission: 'hide comments'.
  $permissions['hide comments'] = array(
    'name' => 'hide comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'hidden_comment',
  );

  // Exported permission: 'hide own comments'.
  $permissions['hide own comments'] = array(
    'name' => 'hide own comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'hidden_comment',
  );

  // Exported permission: 'hide personal comments'.
  $permissions['hide personal comments'] = array(
    'name' => 'hide personal comments',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'hidden_comment',
  );

  // Exported permission: 'post comments'.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'save file information'.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'services',
  );

  // Exported permission: 'skip comment approval'.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'comment',
  );

  // Exported permission: 'submit questions'.
  $permissions['submit questions'] = array(
    'name' => 'submit questions',
    'roles' => array(
      'administrator' => 'administrator',
      'field worker' => 'field worker',
    ),
    'module' => 'questionnaire_question',
  );

  // Exported permission: 'view field_organisation'.
  $permissions['view field_organisation'] = array(
    'name' => 'view field_organisation',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_organisation'.
  $permissions['view own field_organisation'] = array(
    'name' => 'view own field_organisation',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own taxonomy_vocabulary_1'.
  $permissions['view own taxonomy_vocabulary_1'] = array(
    'name' => 'view own taxonomy_vocabulary_1',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view questionnaire answers'.
  $permissions['view questionnaire answers'] = array(
    'name' => 'view questionnaire answers',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'questionnaire_answer',
  );

  // Exported permission: 'view questions'.
  $permissions['view questions'] = array(
    'name' => 'view questions',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'questionnaire_question',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view taxonomy_vocabulary_1'.
  $permissions['view taxonomy_vocabulary_1'] = array(
    'name' => 'view taxonomy_vocabulary_1',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'field worker' => 'field worker',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'devtrac admin' => 'devtrac admin',
      'editor' => 'editor',
      'iati manager' => 'iati manager',
    ),
    'module' => 'system',
  );

  return $permissions;
}
