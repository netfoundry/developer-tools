/**
* untitled API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 5227
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.client.models

import org.openapitools.client.models.InlineResponse2003EmbeddedModelClientIngress
import org.openapitools.client.models.InlineResponse2003EmbeddedModelEdgeRouterHosts
import org.openapitools.client.models.InlineResponse2003EmbeddedModelServerEgress

import com.squareup.moshi.Json
/**
 * 
 * @param edgeRouterAttributes 
 * @param clientIngress 
 * @param serverEgress 
 * @param bindEndpointAttributes 
 * @param edgeRouterHosts 
 */

data class InlineResponse2003EmbeddedModel (
    @Json(name = "edgeRouterAttributes")
    val edgeRouterAttributes: kotlin.Array<kotlin.String>,
    @Json(name = "clientIngress")
    val clientIngress: InlineResponse2003EmbeddedModelClientIngress,
    @Json(name = "serverEgress")
    val serverEgress: InlineResponse2003EmbeddedModelServerEgress? = null,
    @Json(name = "bindEndpointAttributes")
    val bindEndpointAttributes: kotlin.Array<kotlin.String>? = null,
    @Json(name = "edgeRouterHosts")
    val edgeRouterHosts: kotlin.Array<InlineResponse2003EmbeddedModelEdgeRouterHosts>? = null
)

