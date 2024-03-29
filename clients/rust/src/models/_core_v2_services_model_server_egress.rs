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
pub struct CoreV2ServicesModelServerEgress {
    #[serde(rename = "host")]
    pub host: String,
    #[serde(rename = "port")]
    pub port: crate::models::AnyType,
    #[serde(rename = "protocol")]
    pub protocol: String,
}

impl CoreV2ServicesModelServerEgress {
    pub fn new(host: String, port: crate::models::AnyType, protocol: String) -> CoreV2ServicesModelServerEgress {
        CoreV2ServicesModelServerEgress {
            host,
            port,
            protocol,
        }
    }
}


