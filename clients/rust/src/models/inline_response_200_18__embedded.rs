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
pub struct InlineResponse20018Embedded {
    #[serde(rename = "edgeRouterList")]
    pub edge_router_list: Vec<crate::models::InlineResponse20012>,
}

impl InlineResponse20018Embedded {
    pub fn new(edge_router_list: Vec<crate::models::InlineResponse20012>) -> InlineResponse20018Embedded {
        InlineResponse20018Embedded {
            edge_router_list,
        }
    }
}


