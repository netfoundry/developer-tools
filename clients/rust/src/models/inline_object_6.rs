/*
 * untitled API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5227
 * 
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct InlineObject6 {
    #[serde(rename = "networkId")]
    pub network_id: String,
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "attributes")]
    pub attributes: Vec<String>,
    #[serde(rename = "linkListener")]
    pub link_listener: bool,
    #[serde(rename = "dataCenterId", skip_serializing_if = "Option::is_none")]
    pub data_center_id: Option<String>,
}

impl InlineObject6 {
    pub fn new(network_id: String, name: String, attributes: Vec<String>, link_listener: bool) -> InlineObject6 {
        InlineObject6 {
            network_id,
            name,
            attributes,
            link_listener,
            data_center_id: None,
        }
    }
}


