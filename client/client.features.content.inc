<?php

/**
 * Implementation of hook_content_default_fields().
 */
function client_content_default_fields() {
  $fields = array();

  // Exported field: field_client_address
  $fields['land_use_client-field_client_address'] = array(
    'field_name' => 'field_client_address',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
      '5' => array(
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
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_client_address][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Address',
      'weight' => '7',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_client_age
  $fields['land_use_client-field_client_age'] = array(
    'field_name' => 'field_client_age',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
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
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => 'if (is_null($node->field_client_dob[0][\'value\'])) 
 {
$node_field[0][\'value\'] = NULL;
 }
elseif (is_null($node->field_client_dateofdeath[0][\'value\']))
 {
$age = ((time() - strtotime($node->field_client_dob[0][\'value\'])) / (3600 * 24 * 365.25));
$node_field[0][\'value\'] = ((int) $age) ;
}
else
{
$age = (strtotime($node->field_client_dateofdeath[0][\'value\']) / (3600 * 24 * 365.25) - strtotime($node->field_client_dob[0][\'value\']) / (3600 * 24 * 365.25) );
$node_field[0][\'value\'] = ((int) $age) ;
}',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'int',
    'data_length' => '',
    'data_size' => 'normal',
    'data_precision' => '10',
    'data_scale' => '2',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Age',
      'weight' => '4',
      'description' => 'Age of the client.',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_client_applicant_firstname
  $fields['land_use_client-field_client_applicant_firstname'] = array(
    'field_name' => 'field_client_applicant_firstname',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
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
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_client_applicant_firstname][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'First Name',
      'weight' => '-3',
      'description' => 'Enter client\'s first name',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_client_applicant_last
  $fields['land_use_client-field_client_applicant_last'] = array(
    'field_name' => 'field_client_applicant_last',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
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
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_client_applicant_last][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'rows' => 5,
      'size' => '60',
      'label' => 'Last Name',
      'weight' => '-1',
      'description' => 'Enter client\'s last name',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_client_city
  $fields['land_use_client-field_client_city'] = array(
    'field_name' => 'field_client_city',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
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
      '5' => array(
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
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_client_city][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'City',
      'weight' => '8',
      'description' => 'The city where the client lives.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_client_corporate_name
  $fields['land_use_client-field_client_corporate_name'] = array(
    'field_name' => 'field_client_corporate_name',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => 0,
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
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_client_corporate_name][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Corporate Name',
      'weight' => 0,
      'description' => 'Enter corporate name, if the client is a corporate entity.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_client_country
  $fields['land_use_client-field_client_country'] = array(
    'field_name' => 'field_client_country',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '11',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
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
      '5' => array(
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
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Canada
Germany
United States',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Country',
      'weight' => '11',
      'description' => 'The country of residence.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_client_dateofdeath
  $fields['land_use_client-field_client_dateofdeath'] = array(
    'field_name' => 'field_client_dateofdeath',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => '3pikas',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'field_client_dateofdeath_long',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'field_client_dateofdeath_long',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'field_client_dateofdeath_long',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'field_client_dateofdeath_long',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'field_client_dateofdeath_long',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'long',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Date of Death',
      'weight' => '6',
      'description' => 'The date of the death of a client, if known.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_client_deceased
  $fields['land_use_client-field_client_deceased'] = array(
    'field_name' => 'field_client_deceased',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '5',
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
      '5' => array(
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
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'No
Yes',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'No',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Deceased',
      'weight' => '5',
      'description' => 'Whether the client is deceased.',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_client_dob
  $fields['land_use_client-field_client_dob'] = array(
    'field_name' => 'field_client_dob',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => '3pikas',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'field_client_dob_long',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'field_client_dob_long',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'field_client_dob_long',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'field_client_dob_long',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'long',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'Y-m-d',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-100:+0',
      'label_position' => 'above',
      'label' => 'Date of Birth',
      'weight' => '3',
      'description' => 'The date of birth of the client.',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_client_email
  $fields['land_use_client-field_client_email'] = array(
    'field_name' => 'field_client_email',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '13',
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
      '5' => array(
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
    'type' => 'email',
    'required' => '0',
    'multiple' => '3',
    'module' => 'email',
    'active' => '1',
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Email',
      'weight' => '13',
      'description' => 'The client\'s email address.',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_client_entity
  $fields['land_use_client-field_client_entity'] = array(
    'field_name' => 'field_client_entity',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '-4',
      'parent' => '',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'hidden',
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
    'allowed_values' => 'Individual
Corporation',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Client Type',
      'weight' => '-4',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_client_fn
  $fields['land_use_client-field_client_fn'] = array(
    'field_name' => 'field_client_fn',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '1',
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
      '5' => array(
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
    'allowed_values' => 'Kluane First Nation
Other First Nation
Non-First Nation
',
    'allowed_values_php' => 'global $user;

  if (in_array($user, array("20", "0", "6")))
return array(
"Other First Nation" => "Other First Nation",
"Non-First Nation" => "Non-First Nation");
else
return array(
"Kluane First Nation" => "Kluane First Nation",
"Other First Nation" => "Other First Nation",
"Non-First Nation" => "Non-First Nation");',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Affiliation',
      'weight' => '1',
      'description' => 'The affiliation of the client.',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_client_gener
  $fields['land_use_client-field_client_gener'] = array(
    'field_name' => 'field_client_gener',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '2',
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
      '5' => array(
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
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Male
Female
Corporate',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Gender',
      'weight' => '2',
      'description' => 'The client\'s gender.',
      'type' => 'optionwidgets_buttons',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_client_lua
  $fields['land_use_client-field_client_lua'] = array(
    'field_name' => 'field_client_lua',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '14',
      'parent' => '',
      'label' => array(
        'format' => 'above',
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
      '5' => array(
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
    'type' => 'nodereferrer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereferrer',
    'active' => '1',
    'referrer_types' => array(
      'landuseauthorization' => 'landuseauthorization',
      'fnsettlementlands' => 0,
      'land_use_client' => 0,
      'open_page' => 0,
      'page' => 0,
      'slparcel' => 0,
      'slsubparcel' => 0,
      'story' => 0,
      'ttboundary' => 0,
      'testgeo' => 0,
    ),
    'referrer_fields' => array(
      'field_lua_client' => 'field_lua_client',
      'field_lua_client4' => 0,
      'field_lua_subparcel' => 0,
    ),
    'referrer_nodes_per_page' => '0',
    'referrer_pager_element' => '0',
    'referrer_order' => 'TITLE_ASC',
    'widget' => array(
      'label' => 'Land Use Authorizations',
      'weight' => '14',
      'description' => '',
      'type' => 'nodereferrer_list',
      'module' => 'nodereferrer',
    ),
  );

  // Exported field: field_client_middlename
  $fields['land_use_client-field_client_middlename'] = array(
    'field_name' => 'field_client_middlename',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '-2',
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
      '5' => array(
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
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_client_middlename][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Middle Name',
      'weight' => '-2',
      'description' => 'The middle name of the client, if applicable.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_client_phone
  $fields['land_use_client-field_client_phone'] = array(
    'field_name' => 'field_client_phone',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '12',
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
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'ca_phone',
    'required' => '0',
    'multiple' => '1',
    'module' => 'phone',
    'active' => '1',
    'phone_country_code' => 0,
    'ca_phone_separator' => '-',
    'ca_phone_parentheses' => 0,
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_client_phone][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Phone Number',
      'weight' => '12',
      'description' => 'The client\'s phone number.',
      'type' => 'phone_textfield',
      'module' => 'phone',
    ),
  );

  // Exported field: field_client_postal
  $fields['land_use_client-field_client_postal'] = array(
    'field_name' => 'field_client_postal',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
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
      '5' => array(
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
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '10',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '10',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_client_postal][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Postal Code/Zip Code',
      'weight' => '9',
      'description' => 'The mailing postal code.',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_client_province
  $fields['land_use_client-field_client_province'] = array(
    'field_name' => 'field_client_province',
    'type_name' => 'land_use_client',
    'display_settings' => array(
      'weight' => '10',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
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
      '5' => array(
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
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => 0,
    'max_length' => '',
    'allowed_values' => 'Alaska
Alabama
Arizona
Arkansas
California	
Colorado		
Connecticut
Delaware
Florida	
Georgia	
Hawaii
Illinois	
Indiana	
Idaho
Iowa
Kansas		
Kentucky
Louisiana
Maine
Maryland
Massachusetts	
Michigan	
Minnesota	
Mississippi
Missouri	
Montana
Nebraska
New Jersey	
Nevada
New Hampshire
New Mexico
New York
North Carolina	
North Dakota
Oklahoma
Ohio
Oregon		
Pennsylvania
Rhode Island
South Carolina
South Dakota
Tennessee	
Texas
Utah
Vermont	
Virginia
Washington
West Virginia	
Wisconsin	
Wyoming

Alberta			
British Columbia
Ontario
Manitoba
New Brunswick
Newfoundland and Labrador
North West Territories
Nova Scotia
Nunavut
Prince Edward Island
Quebec
Saskatchewan 
Yukon',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_client_province][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'autocomplete_match' => 'starts_with',
      'autocomplete_case' => '1',
      'i18n_flddata' => 0,
      'label' => 'Province/Sate',
      'weight' => '10',
      'description' => '',
      'type' => 'autocomplete_widgets_allowvals',
      'module' => 'autocomplete_widgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Affiliation');
  t('Age');
  t('City');
  t('Client Type');
  t('Corporate Name');
  t('Country');
  t('Date of Birth');
  t('Date of Death');
  t('Deceased');
  t('Email');
  t('First Name');
  t('Gender');
  t('Land Use Authorizations');
  t('Last Name');
  t('Middle Name');
  t('Phone Number');
  t('Postal Code/Zip Code');
  t('Province/Sate');

  return $fields;
}
