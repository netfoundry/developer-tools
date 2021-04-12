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
pub struct InlineObject {
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "size")]
    pub size: String,
    #[serde(rename = "locationCode")]
    pub location_code: String,
    #[serde(rename = "productVersion")]
    pub product_version: String,
    #[serde(rename = "networkGroupId")]
    pub network_group_id: String,
}

impl InlineObject {
    pub fn new(name: String, size: String, location_code: String, product_version: String, network_group_id: String) -> InlineObject {
        InlineObject {
            name,
            size,
            location_code,
            product_version,
            network_group_id,
        }
    }
}


