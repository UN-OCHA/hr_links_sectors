<?php
/**
 * @file
 * hr_links_sectors.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function hr_links_sectors_field_default_fields_alter(&$data) {
  if (isset($data['node-link-field_clusters'])) {
    $data['node-link-field_clusters']['field_instance']['label'] = 'Sectors'; /* WAS: 'Cluster(s)' */
  }
}
