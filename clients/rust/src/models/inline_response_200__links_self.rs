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
pub struct InlineResponse200LinksSelf {
    #[serde(rename = "href")]
    pub href: String,
}

impl InlineResponse200LinksSelf {
    pub fn new(href: String) -> InlineResponse200LinksSelf {
        InlineResponse200LinksSelf {
            href,
        }
    }
}


