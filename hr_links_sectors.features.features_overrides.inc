<?php
/**
 * @file
 * hr_links_sectors.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function hr_links_sectors_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.node-link-field_clusters.field_instance|label"] = 'Sectors';

 return $overrides;
}
