/*
 * untitled API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 5229
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// InlineResponse20012 struct for InlineResponse20012
type InlineResponse20012 struct {
	DeletedAt interface{} `json:"deletedAt"`
	NetworkId string `json:"networkId"`
	Name string `json:"name"`
	UpdatedAt string `json:"updatedAt"`
	Provider interface{} `json:"provider"`
	Online bool `json:"online"`
	ZitiId string `json:"zitiId"`
	UserData interface{} `json:"userData"`
	OwnerIdentityId string `json:"ownerIdentityId"`
	Attributes []string `json:"attributes"`
	ProviderId interface{} `json:"providerId"`
	Jwt interface{} `json:"jwt"`
	Id string `json:"id"`
	IpAddress interface{} `json:"ipAddress"`
	Status string `json:"status"`
	HostId interface{} `json:"hostId"`
	CreatedAt string `json:"createdAt"`
	CreatedBy string `json:"createdBy"`
	DeletedBy interface{} `json:"deletedBy"`
	LocationMetadataId interface{} `json:"locationMetadataId"`
	LinkListener bool `json:"linkListener"`
	DataCenterId interface{} `json:"dataCenterId"`
	Verified bool `json:"verified"`
	Links InlineResponse200Links `json:"_links"`
}
