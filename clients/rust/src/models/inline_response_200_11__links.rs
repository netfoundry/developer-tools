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
pub struct InlineResponse20011Links {
    #[serde(rename = "azureSubscription")]
    pub azure_subscription: crate::models::InlineResponse200LinksSelf,
    #[serde(rename = "networks")]
    pub networks: crate::models::InlineResponse200LinksSelf,
    #[serde(rename = "self")]
    pub _self: crate::models::InlineResponse200LinksSelf,
}

impl InlineResponse20011Links {
    pub fn new(azure_subscription: crate::models::InlineResponse200LinksSelf, networks: crate::models::InlineResponse200LinksSelf, _self: crate::models::InlineResponse200LinksSelf) -> InlineResponse20011Links {
        InlineResponse20011Links {
            azure_subscription,
            networks,
            _self,
        }
    }
}


