/*
 * untitled API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5229
 * 
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct InlineResponse2021ConfigIdByConfigTypeId {
    #[serde(rename = "6fa5c2bc-b7f7-47f8-9229-e927722adb27", skip_serializing_if = "Option::is_none")]
    pub var_6fa5c2bc_b7f7_47f8_9229_e927722adb27: Option<String>,
    #[serde(rename = "7491e52d-97e8-4759-8a63-c8ea8a75f822", skip_serializing_if = "Option::is_none")]
    pub var_7491e52d_97e8_4759_8a63_c8ea8a75f822: Option<String>,
    #[serde(rename = "b1582680-ab7b-45d0-ac36-b00f82df8e79", skip_serializing_if = "Option::is_none")]
    pub b1582680_ab7b_45d0_ac36_b00f82df8e79: Option<String>,
    #[serde(rename = "e7f6ef8d-da57-444c-b677-f03974f5d8be")]
    pub e7f6ef8d_da57_444c_b677_f03974f5d8be: String,
}

impl InlineResponse2021ConfigIdByConfigTypeId {
    pub fn new(e7f6ef8d_da57_444c_b677_f03974f5d8be: String) -> InlineResponse2021ConfigIdByConfigTypeId {
        InlineResponse2021ConfigIdByConfigTypeId {
            var_6fa5c2bc_b7f7_47f8_9229_e927722adb27: None,
            var_7491e52d_97e8_4759_8a63_c8ea8a75f822: None,
            b1582680_ab7b_45d0_ac36_b00f82df8e79: None,
            e7f6ef8d_da57_444c_b677_f03974f5d8be,
        }
    }
}


