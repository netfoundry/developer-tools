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
pub struct InlineResponse2021Links {
    #[serde(rename = "network")]
    pub network: crate::models::InlineResponse200LinksNetwork,
    #[serde(rename = "process")]
    pub process: crate::models::InlineResponse200LinksNetwork,
    #[serde(rename = "self")]
    pub _self: crate::models::InlineResponse200LinksSelf,
}

impl InlineResponse2021Links {
    pub fn new(network: crate::models::InlineResponse200LinksNetwork, process: crate::models::InlineResponse200LinksNetwork, _self: crate::models::InlineResponse200LinksSelf) -> InlineResponse2021Links {
        InlineResponse2021Links {
            network,
            process,
            _self,
        }
    }
}


