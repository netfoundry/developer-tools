/*
 * untitled API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 5170
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// InlineResponse20014IdentityProviders struct for InlineResponse20014IdentityProviders
type InlineResponse20014IdentityProviders struct {
	DeletedAt interface{} `json:"deletedAt"`
	Name string `json:"name"`
	UpdatedAt interface{} `json:"updatedAt"`
	Auth0ConnectionType string `json:"auth0ConnectionType"`
	Auth0ConnectionId string `json:"auth0ConnectionId"`
	Id string `json:"id"`
	CreatedAt InlineResponse20014UpdatedAt `json:"createdAt"`
	OrganizationId string `json:"organizationId"`
	Active bool `json:"active"`
}
