/*
 * untitled API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 5170
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// InlineResponse2024Links struct for InlineResponse2024Links
type InlineResponse2024Links struct {
	Services InlineResponse200LinksSelf `json:"services"`
	ProcessExecution InlineResponse200LinksNetwork `json:"process-execution"`
	Networks InlineResponse200LinksNetwork `json:"networks"`
	AppWans InlineResponse200LinksSelf `json:"app-wans"`
	Endpoints InlineResponse200LinksSelf `json:"endpoints"`
	CertificateAuthorities InlineResponse200LinksSelf `json:"certificate-authorities"`
	Self InlineResponse200LinksSelf `json:"self"`
	ProcessExecutions InlineResponse200LinksNetwork `json:"process-executions"`
	NetworkControllers InlineResponse200LinksSelf `json:"network-controllers"`
	PostureChecks InlineResponse200LinksSelf `json:"posture-checks"`
	EdgeRouters InlineResponse200LinksSelf `json:"edge-routers"`
	EdgeRouterPolicies InlineResponse200LinksSelf `json:"edge-router-policies"`
}
