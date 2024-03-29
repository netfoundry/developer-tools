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
pub struct CoreV2ServicesModelClientIngress {
    #[serde(rename = "protocols", skip_serializing_if = "Option::is_none")]
    pub protocols: Option<Vec<String>>,
    #[serde(rename = "host", skip_serializing_if = "Option::is_none")]
    pub host: Option<String>,
    #[serde(rename = "ports", skip_serializing_if = "Option::is_none")]
    pub ports: Option<Vec<crate::models::CoreV2ServicesModelClientIngressPorts>>,
    #[serde(rename = "port", skip_serializing_if = "Option::is_none")]
    pub port: Option<crate::models::AnyType>,
    #[serde(rename = "addresses", skip_serializing_if = "Option::is_none")]
    pub addresses: Option<Vec<String>>,
}

impl CoreV2ServicesModelClientIngress {
    pub fn new() -> CoreV2ServicesModelClientIngress {
        CoreV2ServicesModelClientIngress {
            protocols: None,
            host: None,
            ports: None,
            port: None,
            addresses: None,
        }
    }
}


