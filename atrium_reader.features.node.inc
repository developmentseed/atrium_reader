<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _atrium_reader_node_info() {
  $items = array(
    'feed_reader' => array(
      'name' => t('Reader feed'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
