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
pub struct InlineResponse20012 {
    #[serde(rename = "deletedAt")]
    pub deleted_at: crate::models::AnyType,
    #[serde(rename = "networkId")]
    pub network_id: String,
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "updatedAt")]
    pub updated_at: String,
    #[serde(rename = "provider")]
    pub provider: crate::models::AnyType,
    #[serde(rename = "online")]
    pub online: bool,
    #[serde(rename = "zitiId")]
    pub ziti_id: String,
    #[serde(rename = "userData")]
    pub user_data: crate::models::AnyType,
    #[serde(rename = "ownerIdentityId")]
    pub owner_identity_id: String,
    #[serde(rename = "attributes")]
    pub attributes: Vec<String>,
    #[serde(rename = "providerId")]
    pub provider_id: crate::models::AnyType,
    #[serde(rename = "jwt")]
    pub jwt: crate::models::AnyType,
    #[serde(rename = "id")]
    pub id: String,
    #[serde(rename = "ipAddress")]
    pub ip_address: crate::models::AnyType,
    #[serde(rename = "status")]
    pub status: String,
    #[serde(rename = "hostId")]
    pub host_id: crate::models::AnyType,
    #[serde(rename = "createdAt")]
    pub created_at: String,
    #[serde(rename = "createdBy")]
    pub created_by: String,
    #[serde(rename = "deletedBy")]
    pub deleted_by: crate::models::AnyType,
    #[serde(rename = "locationMetadataId")]
    pub location_metadata_id: crate::models::AnyType,
    #[serde(rename = "linkListener")]
    pub link_listener: bool,
    #[serde(rename = "dataCenterId")]
    pub data_center_id: crate::models::AnyType,
    #[serde(rename = "verified")]
    pub verified: bool,
    #[serde(rename = "_links")]
    pub _links: crate::models::InlineResponse200Links,
}

impl InlineResponse20012 {
    pub fn new(deleted_at: crate::models::AnyType, network_id: String, name: String, updated_at: String, provider: crate::models::AnyType, online: bool, ziti_id: String, user_data: crate::models::AnyType, owner_identity_id: String, attributes: Vec<String>, provider_id: crate::models::AnyType, jwt: crate::models::AnyType, id: String, ip_address: crate::models::AnyType, status: String, host_id: crate::models::AnyType, created_at: String, created_by: String, deleted_by: crate::models::AnyType, location_metadata_id: crate::models::AnyType, link_listener: bool, data_center_id: crate::models::AnyType, verified: bool, _links: crate::models::InlineResponse200Links) -> InlineResponse20012 {
        InlineResponse20012 {
            deleted_at,
            network_id,
            name,
            updated_at,
            provider,
            online,
            ziti_id,
            user_data,
            owner_identity_id,
            attributes,
            provider_id,
            jwt,
            id,
            ip_address,
            status,
            host_id,
            created_at,
            created_by,
            deleted_by,
            location_metadata_id,
            link_listener,
            data_center_id,
            verified,
            _links,
        }
    }
}


