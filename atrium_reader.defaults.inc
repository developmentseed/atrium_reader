<?php

/**
 * Helper to implementation of hook_content_default_fields().
 */
function _atrium_reader_content_default_fields() {
  $fields = array();

  // Exported field: field_reader_feedtype
  $fields[] = array(
    'field_name' => 'field_reader_feedtype',
    'type_name' => 'feed_reader',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => 'if (function_exists(\'atrium_reader_get_types\')) { return atrium_reader_get_types(); }',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Type',
      'weight' => '-4',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  array(
    t('Type'),
  );

  return $fields;
}

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _atrium_reader_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'atrium_reader';
  $context->description = 'Featurewide context for Atrium Reader.';
  $context->tag = 'atrium_reader';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'feed_reader' => 'feed_reader',
        'blog' => 0,
        'feed_fast' => 0,
        'group' => 0,
        'post' => 0,
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        'reader' => 'reader',
        'reader/*' => 'reader/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'atrium_reader' => 'atrium_reader',
        'atrium_reader_feeds' => 'atrium_reader_feeds',
        'atrium_reader:page_1' => 0,
        'atrium_reader:page_2' => 0,
        'atrium_reader:page_3' => 0,
        'atrium_reader_blocks' => 0,
        'blog' => 0,
        'feeds_data_feed_fast' => 0,
        'feeds_data_feed_reader' => 0,
        'og' => 0,
        'og_ghp_ron' => 0,
        'og_members' => 0,
        'og_members_block' => 0,
        'og_members_faces' => 0,
        'og_my' => 0,
        'og_mytracker' => 0,
        'og_recent_type_term' => 0,
        'og_tracker' => 0,
        'og_unread' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'reader',
  );
  $context->condition_mode = 0;

  $translatables['atrium_reader'] = array(
    t('Featurewide context for Atrium Reader.'),
    t('atrium_reader'),
  );

  $export['atrium_reader'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'atrium_reader_listing';
  $context->description = 'Single feed item listing page within the reader.';
  $context->tag = 'atrium_reader';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'feed_reader' => 'feed_reader',
        'blog' => 0,
        'feed_fast' => 0,
        'group' => 0,
        'post' => 0,
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'views' => array(
      'values' => array(
        'atrium_reader:page_1' => 'atrium_reader:page_1',
        'atrium_reader:page_2' => 'atrium_reader:page_2',
        'atrium_reader:page_3' => 'atrium_reader:page_3',
        'atrium_reader' => 0,
        'atrium_reader_blocks' => 0,
        'atrium_reader_feeds' => 0,
        'blog' => 0,
        'feeds_data_feed_fast' => 0,
        'feeds_data_feed_reader' => 0,
        'og' => 0,
        'og_ghp_ron' => 0,
        'og_members' => 0,
        'og_members_block' => 0,
        'og_members_faces' => 0,
        'og_my' => 0,
        'og_mytracker' => 0,
        'og_recent_type_term' => 0,
        'og_tracker' => 0,
        'og_unread' => 0,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-atrium_reader_feeds-block_1' => array(
          'module' => 'views',
          'delta' => 'atrium_reader_feeds-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => '',
    ),
  );
  $context->condition_mode = 0;

  $translatables['atrium_reader_listing'] = array(
    t('Single feed item listing page within the reader.'),
    t('atrium_reader'),
  );

  $export['atrium_reader_listing'] = $context;
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'atrium_reader_overview';
  $context->description = 'Overview/landing page for reader.';
  $context->tag = 'atrium_reader';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'reader' => 'reader',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-atrium_reader_blocks-block_1' => array(
          'module' => 'views',
          'delta' => 'atrium_reader_blocks-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
        'views-atrium_reader_blocks-block_2' => array(
          'module' => 'views',
          'delta' => 'atrium_reader_blocks-block_2',
          'region' => 'right',
          'weight' => 1,
        ),
      ),
    ),
    'theme' => array(
      'title' => '',
      'subtitle' => '',
      'class' => '',
    ),
  );
  $context->condition_mode = 0;

  $translatables['atrium_reader_overview'] = array(
    t('Overview/landing page for reader.'),
    t('atrium_reader'),
  );

  $export['atrium_reader_overview'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _atrium_reader_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  else if ($module == "data" && $api == "data_default") {
    return array("version" => 1);
  }
  else if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
  else if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_data_default().
 */
function _atrium_reader_data_default() {
  $export = array();
  $data_table = new stdClass;
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Reader feed';
  $data_table->name = 'feeds_data_feed_reader';
  $data_table->table_schema = array(
    'fields' => array(
      'feed_nid' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
      'id' => array(
        'type' => 'serial',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
      'timestamp' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => FALSE,
      ),
      'title' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '255',
        'not null' => FALSE,
      ),
      'description' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
      ),
      'options_original_url' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
      ),
      'options_raw_guid' => array(
        'type' => 'text',
        'size' => 'normal',
        'not null' => FALSE,
      ),
      'author' => array(
        'type' => 'text',
        'size' => 'normal',
      ),
    ),
    'name' => 'feeds_data_feed_reader',
    'indexes' => array(
      'feed_nid' => array(
        '0' => 'feed_nid',
      ),
      'id' => array(
        '0' => 'id',
      ),
      'timestamp' => array(
        '0' => 'timestamp',
      ),
      'options_original_url' => array(
        '0' => array(
          '0' => 'options_original_url',
          '1' => 255,
        ),
      ),
      'options_raw_guid' => array(
        '0' => array(
          '0' => 'options_raw_guid',
          '1' => 255,
        ),
      ),
    ),
    'primary key' => array(
      '0' => 'id',
    ),
  );
  $data_table->meta = array(
    'join' => array(
      'node' => array(
        'left_field' => 'nid',
        'field' => 'feed_nid',
        'inner_join' => TRUE,
      ),
    ),
    'fields' => array(
      'feed_nid' => array(
        'label' => '',
        'search' => 0,
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'id' => array(
        'label' => '',
        'search' => 0,
        'views_field_handler' => 'views_handler_field_numeric',
        'views_filter_handler' => 'views_handler_filter_numeric',
        'views_argument_handler' => 'views_handler_argument_numeric',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'timestamp' => array(
        'label' => '',
        'views_field_handler' => 'views_handler_field_date',
        'views_filter_handler' => 'views_handler_filter_date',
        'views_argument_handler' => 'views_handler_argument_date',
        'views_sort_handler' => 'views_handler_sort_date',
      ),
      'title' => array(
        'label' => '',
        'search' => 1,
        'views_field_handler' => 'atrium_reader_handler_field_title',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'description' => array(
        'label' => '',
        'search' => 1,
        'views_field_handler' => 'atrium_reader_handler_field_description',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'options_original_url' => array(
        'label' => '',
        'search' => 0,
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'options_raw_guid' => array(
        'label' => '',
        'search' => 0,
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
      'author' => array(
        'label' => '',
        'views_field_handler' => 'views_handler_field',
        'views_filter_handler' => 'views_handler_filter_string',
        'views_argument_handler' => 'views_handler_argument',
        'views_sort_handler' => 'views_handler_sort',
      ),
    ),
  );

  $export['feeds_data_feed_reader'] = $data_table;
  return $export;
}

/**
 * Helper to implementation of hook_feeds_importer_default().
 */
function _atrium_reader_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'feed_reader';
  $feeds_importer->config = array(
    'name' => 'Reader feed',
    'description' => 'Feed configuration for reader feeds.',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsDataProcessor',
      'config' => array(
        'update_existing' => 1,
        'expire' => '7257600',
        'mappings' => array(
          '0' => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => 0,
          ),
          '1' => array(
            'source' => 'description',
            'target' => 'description',
            'unique' => 0,
          ),
          '2' => array(
            'source' => 'author_name',
            'target' => 'author',
            'unique' => 0,
          ),
          '3' => array(
            'source' => 'guid',
            'target' => 'options_raw_guid',
            'unique' => 1,
          ),
          '4' => array(
            'source' => 'url',
            'target' => 'options_original_url',
            'unique' => 1,
          ),
          '5' => array(
            'source' => 'timestamp',
            'target' => 'timestamp',
            'unique' => 0,
          ),
        ),
      ),
    ),
    'content_type' => 'feed_reader',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['feed_reader'] = $feeds_importer;
  return $export;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _atrium_reader_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Feed reader',
    'path' => 'reader',
    'weight' => '0',
    'description' => 'The reader lets your share news, image and twitter feeds with your team.',
  );
  // Translatables
  array(
    t('Feed reader'),
    t('The reader lets your share news, image and twitter feeds with your team.'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _atrium_reader_user_default_permissions() {
  $permissions = array();

  // Exported permission: create feed_reader content
  $permissions[] = array(
    'name' => 'create feed_reader content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete own feed_reader content
  $permissions[] = array(
    'name' => 'delete own feed_reader content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit own feed_reader content
  $permissions[] = array(
    'name' => 'edit own feed_reader content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _atrium_reader_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_feed_reader';
  $strongarm->value = '0';

  $export['comment_feed_reader'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_feed_reader';
  $strongarm->value = array(
    '0' => 'status',
  );

  $export['node_options_feed_reader'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_feed_reader';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_feed_reader'] = $strongarm;
  return $export;
}
