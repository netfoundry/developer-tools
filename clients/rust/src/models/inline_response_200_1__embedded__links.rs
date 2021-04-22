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
pub struct InlineResponse2001EmbeddedLinks {
    #[serde(rename = "services")]
    pub services: crate::models::InlineResponse200LinksSelf,
    #[serde(rename = "networks")]
    pub networks: crate::models::InlineResponse200LinksNetwork,
    #[serde(rename = "app-wans")]
    pub app_wans: crate::models::InlineResponse200LinksSelf,
    #[serde(rename = "endpoints")]
    pub endpoints: crate::models::InlineResponse200LinksSelf,
    #[serde(rename = "certificate-authorities")]
    pub certificate_authorities: crate::models::InlineResponse200LinksSelf,
    #[serde(rename = "self")]
    pub _self: crate::models::InlineResponse200LinksSelf,
    #[serde(rename = "process-executions")]
    pub process_executions: crate::models::InlineResponse200LinksNetwork,
    #[serde(rename = "network-controllers")]
    pub network_controllers: crate::models::InlineResponse200LinksSelf,
    #[serde(rename = "posture-checks")]
    pub posture_checks: crate::models::InlineResponse200LinksSelf,
    #[serde(rename = "edge-routers")]
    pub edge_routers: crate::models::InlineResponse200LinksSelf,
    #[serde(rename = "edge-router-policies")]
    pub edge_router_policies: crate::models::InlineResponse200LinksSelf,
}

impl InlineResponse2001EmbeddedLinks {
    pub fn new(services: crate::models::InlineResponse200LinksSelf, networks: crate::models::InlineResponse200LinksNetwork, app_wans: crate::models::InlineResponse200LinksSelf, endpoints: crate::models::InlineResponse200LinksSelf, certificate_authorities: crate::models::InlineResponse200LinksSelf, _self: crate::models::InlineResponse200LinksSelf, process_executions: crate::models::InlineResponse200LinksNetwork, network_controllers: crate::models::InlineResponse200LinksSelf, posture_checks: crate::models::InlineResponse200LinksSelf, edge_routers: crate::models::InlineResponse200LinksSelf, edge_router_policies: crate::models::InlineResponse200LinksSelf) -> InlineResponse2001EmbeddedLinks {
        InlineResponse2001EmbeddedLinks {
            services,
            networks,
            app_wans,
            endpoints,
            certificate_authorities,
            _self,
            process_executions,
            network_controllers,
            posture_checks,
            edge_routers,
            edge_router_policies,
        }
    }
}


