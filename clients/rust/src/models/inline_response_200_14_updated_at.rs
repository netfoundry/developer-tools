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
pub struct InlineResponse20014UpdatedAt {
    #[serde(rename = "epochSecond")]
    pub epoch_second: f32,
    #[serde(rename = "nano")]
    pub nano: f32,
}

impl InlineResponse20014UpdatedAt {
    pub fn new(epoch_second: f32, nano: f32) -> InlineResponse20014UpdatedAt {
        InlineResponse20014UpdatedAt {
            epoch_second,
            nano,
        }
    }
}


