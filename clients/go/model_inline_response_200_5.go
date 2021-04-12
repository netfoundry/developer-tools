/*
 * untitled API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 5170
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// InlineResponse2005 struct for InlineResponse2005
type InlineResponse2005 struct {
	DeletedAt interface{} `json:"deletedAt"`
	NetworkId string `json:"networkId"`
	Name string `json:"name"`
	UpdatedAt string `json:"updatedAt"`
	Model InlineResponse2003EmbeddedModel `json:"model"`
	ZitiId string `json:"zitiId"`
	OwnerIdentityId string `json:"ownerIdentityId"`
	Attributes []string `json:"attributes"`
	ModelType string `json:"modelType"`
	Id string `json:"id"`
	ConfigIdByConfigTypeId InlineResponse2005ConfigIdByConfigTypeId `json:"configIdByConfigTypeId"`
	CreatedAt string `json:"createdAt"`
	CreatedBy string `json:"createdBy"`
	DeletedBy interface{} `json:"deletedBy"`
	EncryptionRequired bool `json:"encryptionRequired"`
	Authority interface{} `json:"authority"`
	Links InlineResponse200Links `json:"_links"`
}
