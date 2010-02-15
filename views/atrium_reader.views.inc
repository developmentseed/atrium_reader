<?php

/**
 * Implementation of hook_views_plugins().
 */
function atrium_reader_views_plugins() {
  return array(
    'module' => 'atrium_reader',
    'access' => array(
      'atrium_reader' => array(
        'title' => t('Reader feed'),
        'help' => t('Access will be granted based on mystery magic feed logic.'),
        'handler' => 'atrium_reader_plugin_access',
        'path' => drupal_get_path('module', 'atrium_reader') .'/views',
        'uses options' => TRUE,
      ),
    ),
  );
}

/**
 * Implementation of hook_views_handlers().
 */
function atrium_reader_views_handlers() {
  return array(
    'info' => array('path' => drupal_get_path('module', 'atrium_reader') .'/views'),
    'handlers' => array(
      'atrium_reader_handler_field_description' => array(
        'parent' => 'views_handler_field',
      ),
      'atrium_reader_handler_field_title' => array(
        'parent' => 'views_handler_field',
      ),
    ),
  );
}
