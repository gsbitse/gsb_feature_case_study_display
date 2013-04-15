<?php
/**
 * @file
 * gsb_feature_case_study_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function gsb_feature_case_study_display_views_default_views()
{
  $export = array();

  $view = new view();
  $view->name = 'search_case_study';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'apachesolr__acquia_search_server_1';
  $view->human_name = 'Search case study';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view-case-study-filters';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'keyword' => array(
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Show more';
  $handler->display->display_options['pager']['options']['use_go_to_top_link'] = 1;
  $handler->display->display_options['pager']['options']['use_go_to_top_text'] = 'Back to the Top';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'designed-box';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'no results found.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
  /* Field: Apache Solr: path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: im_field_date_published_format_year */
  $handler->display->display_options['fields']['im_field_date_published_format_year']['id'] = 'im_field_date_published_format_year';
  $handler->display->display_options['fields']['im_field_date_published_format_year']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['im_field_date_published_format_year']['field'] = 'im_field_date_published_format_year';
  $handler->display->display_options['fields']['im_field_date_published_format_year']['label'] = 'Date posted';
  /* Field: Apache Solr: label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['label']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: sm_field_number_apachesolr */
  $handler->display->display_options['fields']['sm_field_number_apachesolr']['id'] = 'sm_field_number_apachesolr';
  $handler->display->display_options['fields']['sm_field_number_apachesolr']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['sm_field_number_apachesolr']['field'] = 'sm_field_number_apachesolr';
  $handler->display->display_options['fields']['sm_field_number_apachesolr']['label'] = '';
  $handler->display->display_options['fields']['sm_field_number_apachesolr']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: sm_field_authors_custom_id_apachesolr */
  $handler->display->display_options['fields']['sm_field_authors_custom_id_apachesolr']['id'] = 'sm_field_authors_custom_id_apachesolr';
  $handler->display->display_options['fields']['sm_field_authors_custom_id_apachesolr']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['sm_field_authors_custom_id_apachesolr']['field'] = 'sm_field_authors_custom_id_apachesolr';
  $handler->display->display_options['fields']['sm_field_authors_custom_id_apachesolr']['label'] = '';
  $handler->display->display_options['fields']['sm_field_authors_custom_id_apachesolr']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: sm_field_authors_apachesolr */
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['id'] = 'sm_field_authors_apachesolr';
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['field'] = 'sm_field_authors_apachesolr';
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['label'] = 'Authors';
  $handler->display->display_options['fields']['sm_field_authors_apachesolr']['hide_empty'] = TRUE;
  /* Field: Apache Solr: sm_field_body_apachesolr */
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['id'] = 'sm_field_body_apachesolr';
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['field'] = 'sm_field_body_apachesolr';
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['label'] = '';
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['sm_field_body_apachesolr']['element_label_colon'] = FALSE;
  /* Field: Apache Solr: sm_field_tags_apachesolr */
  $handler->display->display_options['fields']['sm_field_tags_apachesolr']['id'] = 'sm_field_tags_apachesolr';
  $handler->display->display_options['fields']['sm_field_tags_apachesolr']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['fields']['sm_field_tags_apachesolr']['field'] = 'sm_field_tags_apachesolr';
  $handler->display->display_options['fields']['sm_field_tags_apachesolr']['label'] = 'Tags';
  /* Filter criterion: Apache Solr: bundle */
  $handler->display->display_options['filters']['bundle']['id'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['filters']['bundle']['field'] = 'bundle';
  $handler->display->display_options['filters']['bundle']['value'] = 'case_study';
  /* Filter criterion: Apache Solr: Search */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__acquia_search_server_1';
  $handler->display->display_options['filters']['keyword']['field'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keyword']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['keyword']['expose']['label'] = 'Search the Faculty Directory';
  $handler->display->display_options['filters']['keyword']['expose']['operator'] = 'keyword_op';
  $handler->display->display_options['filters']['keyword']['expose']['identifier'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['inherit_panels_path'] = '1';

  $export['search_case_study'] = $view;

  $view = new view();
  $view->name = 'case_study_filters';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Case Study Filters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_industry_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_discipline_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
    'field_academic_area_single_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 1,
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'designed-box';
  $handler->display->display_options['row_plugin'] = 'ds';
  $handler->display->display_options['row_options']['alternating'] = 0;
  $handler->display->display_options['row_options']['grouping'] = 0;
  $handler->display->display_options['row_options']['advanced'] = 0;
  $handler->display->display_options['row_options']['delta_fieldset']['delta_fields'] = array();
  $handler->display->display_options['row_options']['grouping_fieldset']['group_field'] = 'node|title';
  $handler->display->display_options['row_options']['default_fieldset']['view_mode'] = 'teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faculty' => 'faculty',
  );

  /* Display: case-study-list */
  $handler = $view->new_display('panel_pane', 'case-study-list', 'case_study_list');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-faculty-filters';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['waypoint']['infinite'] = 0;
  $handler->display->display_options['pager']['options']['more_button_text'] = 'show more';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Body */
  $handler->display->display_options['fields']['field_body']['id'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['table'] = 'field_data_field_body';
  $handler->display->display_options['fields']['field_body']['field'] = 'field_body';
  $handler->display->display_options['fields']['field_body']['label'] = '';
  $handler->display->display_options['fields']['field_body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_body']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'case_study' => 'case_study',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Industry (field_industry) */
  $handler->display->display_options['filters']['field_industry_tid']['id'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['table'] = 'field_data_field_industry';
  $handler->display->display_options['filters']['field_industry_tid']['field'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_industry_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_industry_tid']['expose']['operator_id'] = 'field_industry_tid_op';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['label'] = 'Industry';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['operator'] = 'field_industry_tid_op';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['identifier'] = 'field_industry_tid';
  $handler->display->display_options['filters']['field_industry_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_industry_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_industry_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_industry_tid']['vocabulary'] = 'industry';
  /* Filter criterion: Content: Discipline (field_discipline) */
  $handler->display->display_options['filters']['field_discipline_tid']['id'] = 'field_discipline_tid';
  $handler->display->display_options['filters']['field_discipline_tid']['table'] = 'field_data_field_discipline';
  $handler->display->display_options['filters']['field_discipline_tid']['field'] = 'field_discipline_tid';
  $handler->display->display_options['filters']['field_discipline_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_discipline_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['operator_id'] = 'field_discipline_tid_op';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['label'] = 'Discipline';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['operator'] = 'field_discipline_tid_op';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['identifier'] = 'field_discipline_tid';
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_discipline_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_discipline_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_discipline_tid']['vocabulary'] = 'discipline';
  /* Filter criterion: Content: Academic Area (field_academic_area_single) */
  $handler->display->display_options['filters']['field_academic_area_single_tid']['id'] = 'field_academic_area_single_tid';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['table'] = 'field_data_field_academic_area_single';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['field'] = 'field_academic_area_single_tid';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_academic_area_single_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['operator_id'] = 'field_academic_area_single_tid_op';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['label'] = 'Academic Areas';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['operator'] = 'field_academic_area_single_tid_op';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['identifier'] = 'field_academic_area_single_tid';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_academic_area_single_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_academic_area_single_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_academic_area_single_tid']['vocabulary'] = 'academic_area';
  $handler->display->display_options['inherit_panels_path'] = '1';

  $export['case_study_filters'] = $view;

  return $export;
}
