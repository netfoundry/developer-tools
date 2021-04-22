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
pub struct InlineResponse2023 {
    #[serde(rename = "deletedAt")]
    pub deleted_at: crate::models::AnyType,
    #[serde(rename = "networkId")]
    pub network_id: String,
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "updatedAt")]
    pub updated_at: String,
    #[serde(rename = "model")]
    pub model: crate::models::InlineResponse2023Model,
    #[serde(rename = "zitiId")]
    pub ziti_id: String,
    #[serde(rename = "ownerIdentityId")]
    pub owner_identity_id: String,
    #[serde(rename = "attributes")]
    pub attributes: Vec<String>,
    #[serde(rename = "modelType")]
    pub model_type: String,
    #[serde(rename = "id")]
    pub id: String,
    #[serde(rename = "configIdByConfigTypeId")]
    pub config_id_by_config_type_id: crate::models::InlineResponse2023ConfigIdByConfigTypeId,
    #[serde(rename = "createdAt")]
    pub created_at: String,
    #[serde(rename = "createdBy")]
    pub created_by: String,
    #[serde(rename = "deletedBy")]
    pub deleted_by: crate::models::AnyType,
    #[serde(rename = "encryptionRequired")]
    pub encryption_required: bool,
    #[serde(rename = "authority")]
    pub authority: crate::models::AnyType,
    #[serde(rename = "_links")]
    pub _links: crate::models::InlineResponse2021Links,
}

impl InlineResponse2023 {
    pub fn new(deleted_at: crate::models::AnyType, network_id: String, name: String, updated_at: String, model: crate::models::InlineResponse2023Model, ziti_id: String, owner_identity_id: String, attributes: Vec<String>, model_type: String, id: String, config_id_by_config_type_id: crate::models::InlineResponse2023ConfigIdByConfigTypeId, created_at: String, created_by: String, deleted_by: crate::models::AnyType, encryption_required: bool, authority: crate::models::AnyType, _links: crate::models::InlineResponse2021Links) -> InlineResponse2023 {
        InlineResponse2023 {
            deleted_at,
            network_id,
            name,
            updated_at,
            model,
            ziti_id,
            owner_identity_id,
            attributes,
            model_type,
            id,
            config_id_by_config_type_id,
            created_at,
            created_by,
            deleted_by,
            encryption_required,
            authority,
            _links,
        }
    }
}


