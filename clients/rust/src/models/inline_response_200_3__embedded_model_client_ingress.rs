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
pub struct InlineResponse2003EmbeddedModelClientIngress {
    #[serde(rename = "protocols", skip_serializing_if = "Option::is_none")]
    pub protocols: Option<Vec<String>>,
    #[serde(rename = "host", skip_serializing_if = "Option::is_none")]
    pub host: Option<String>,
    #[serde(rename = "ports", skip_serializing_if = "Option::is_none")]
    pub ports: Option<Vec<crate::models::InlineResponse2003EmbeddedModelClientIngressPorts>>,
    #[serde(rename = "port", skip_serializing_if = "Option::is_none")]
    pub port: Option<f32>,
    #[serde(rename = "addresses", skip_serializing_if = "Option::is_none")]
    pub addresses: Option<Vec<String>>,
}

impl InlineResponse2003EmbeddedModelClientIngress {
    pub fn new() -> InlineResponse2003EmbeddedModelClientIngress {
        InlineResponse2003EmbeddedModelClientIngress {
            protocols: None,
            host: None,
            ports: None,
            port: None,
            addresses: None,
        }
    }
}


