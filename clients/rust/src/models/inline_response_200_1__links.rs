/*
 * untitled API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5170
 * 
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct InlineResponse2001Links {
    #[serde(rename = "self")]
    pub _self: crate::models::InlineResponse2001LinksSelf,
}

impl InlineResponse2001Links {
    pub fn new(_self: crate::models::InlineResponse2001LinksSelf) -> InlineResponse2001Links {
        InlineResponse2001Links {
            _self,
        }
    }
}


