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
pub struct InlineResponse2007Embedded {
    #[serde(rename = "endpointList")]
    pub endpoint_list: Vec<crate::models::InlineResponse2007EmbeddedEndpointList>,
}

impl InlineResponse2007Embedded {
    pub fn new(endpoint_list: Vec<crate::models::InlineResponse2007EmbeddedEndpointList>) -> InlineResponse2007Embedded {
        InlineResponse2007Embedded {
            endpoint_list,
        }
    }
}


