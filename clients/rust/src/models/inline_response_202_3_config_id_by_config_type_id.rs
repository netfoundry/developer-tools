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
pub struct InlineResponse2023ConfigIdByConfigTypeId {
    #[serde(rename = "d75e27f0-ebab-4567-8440-c24f02f2eca5", skip_serializing_if = "Option::is_none")]
    pub d75e27f0_ebab_4567_8440_c24f02f2eca5: Option<String>,
    #[serde(rename = "cf3962b1-a98e-4ade-ae25-cdc388e7feb3")]
    pub cf3962b1_a98e_4ade_ae25_cdc388e7feb3: String,
    #[serde(rename = "7cafedc5-17b8-4c1e-8b6f-0d9bc1b4b7bc", skip_serializing_if = "Option::is_none")]
    pub var_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc: Option<String>,
    #[serde(rename = "714a918a-7935-4b4f-82c3-afbadcd9e59b", skip_serializing_if = "Option::is_none")]
    pub var_714a918a_7935_4b4f_82c3_afbadcd9e59b: Option<String>,
    #[serde(rename = "64a39300-b672-413b-9d8c-42175f7e84dd")]
    pub var_64a39300_b672_413b_9d8c_42175f7e84dd: String,
    #[serde(rename = "ea6e632b-d8e1-420f-bd8f-ad50b067bad6", skip_serializing_if = "Option::is_none")]
    pub ea6e632b_d8e1_420f_bd8f_ad50b067bad6: Option<String>,
}

impl InlineResponse2023ConfigIdByConfigTypeId {
    pub fn new(cf3962b1_a98e_4ade_ae25_cdc388e7feb3: String, var_64a39300_b672_413b_9d8c_42175f7e84dd: String) -> InlineResponse2023ConfigIdByConfigTypeId {
        InlineResponse2023ConfigIdByConfigTypeId {
            d75e27f0_ebab_4567_8440_c24f02f2eca5: None,
            cf3962b1_a98e_4ade_ae25_cdc388e7feb3,
            var_7cafedc5_17b8_4c1e_8b6f_0d9bc1b4b7bc: None,
            var_714a918a_7935_4b4f_82c3_afbadcd9e59b: None,
            var_64a39300_b672_413b_9d8c_42175f7e84dd,
            ea6e632b_d8e1_420f_bd8f_ad50b067bad6: None,
        }
    }
}


