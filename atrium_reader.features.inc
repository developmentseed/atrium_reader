<?php

/**
 * Implementation of hook_content_default_fields().
 */
function atrium_reader_content_default_fields() {
  module_load_include('inc', 'atrium_reader', 'atrium_reader.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_reader_content_default_fields', $args);
}

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_reader_context_default_contexts() {
  module_load_include('inc', 'atrium_reader', 'atrium_reader.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_reader_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_reader_ctools_plugin_api() {
  module_load_include('inc', 'atrium_reader', 'atrium_reader.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_reader_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_data_default().
 */
function atrium_reader_data_default() {
  module_load_include('inc', 'atrium_reader', 'atrium_reader.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_reader_data_default', $args);
}

/**
 * Implementation of hook_feeds_importer_default().
 */
function atrium_reader_feeds_importer_default() {
  module_load_include('inc', 'atrium_reader', 'atrium_reader.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_reader_feeds_importer_default', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function atrium_reader_menu_default_items() {
  module_load_include('inc', 'atrium_reader', 'atrium_reader.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_reader_menu_default_items', $args);
}

/**
 * Implementation of hook_node_info().
 */
function atrium_reader_node_info() {
  module_load_include('inc', 'atrium_reader', 'atrium_reader.features.node');
  $args = func_get_args();
  return call_user_func_array('_atrium_reader_node_info', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_reader_user_default_permissions() {
  module_load_include('inc', 'atrium_reader', 'atrium_reader.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_reader_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function atrium_reader_strongarm() {
  module_load_include('inc', 'atrium_reader', 'atrium_reader.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_reader_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function atrium_reader_views_default_views() {
  module_load_include('inc', 'atrium_reader', 'atrium_reader.features.views');
  $args = func_get_args();
  return call_user_func_array('_atrium_reader_views_default_views', $args);
}
