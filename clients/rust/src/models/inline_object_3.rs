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
pub struct InlineObject3 {
    #[serde(rename = "model")]
    pub model: crate::models::CoreV2ServicesServiceIdModel,
    #[serde(rename = "modelType")]
    pub model_type: String,
    #[serde(rename = "name")]
    pub name: String,
}

impl InlineObject3 {
    pub fn new(model: crate::models::CoreV2ServicesServiceIdModel, model_type: String, name: String) -> InlineObject3 {
        InlineObject3 {
            model,
            model_type,
            name,
        }
    }
}


