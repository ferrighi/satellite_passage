<?php
function satellite_passage_admin($form, &$form_state) {
  $form = array();

  $form['#prefix']  = '<h2>Satellite Passage Module configuration</h2>';

  $form['zoom'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter zoom value from 1 to 10'),
    '#description' => t("initial zoom"),
  );

  $form['center_lat'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter latitude for center of map'),
    '#description' => t("center latitude"),
  );

  $form['center_lon'] = array(
    '#type' => 'textfield',
    '#title' => t('Enter longitude for center of map'),
    '#description' => t("center longitude"),
  );

  return system_settings_form($form);
}

