/**
* untitled API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 5170
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.client.models

import org.openapitools.client.models.CoreV2ServicesModelClientIngress
import org.openapitools.client.models.CoreV2ServicesModelEdgeRouterHosts
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

data class CoreV2ServicesModel (
    @Json(name = "edgeRouterAttributes")
    val edgeRouterAttributes: kotlin.Array<kotlin.String>,
    @Json(name = "clientIngress")
    val clientIngress: CoreV2ServicesModelClientIngress,
    @Json(name = "serverEgress")
    val serverEgress: InlineResponse2003EmbeddedModelServerEgress? = null,
    @Json(name = "bindEndpointAttributes")
    val bindEndpointAttributes: kotlin.Array<kotlin.String>? = null,
    @Json(name = "edgeRouterHosts")
    val edgeRouterHosts: kotlin.Array<CoreV2ServicesModelEdgeRouterHosts>? = null
)

