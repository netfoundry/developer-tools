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

import org.openapitools.client.models.CoreV2ServicesServiceIdModelServerEgress
import org.openapitools.client.models.InlineResponse2023ModelClientIngress

import com.squareup.moshi.Json
/**
 * 
 * @param bindEndpointAttributes 
 * @param clientIngress 
 * @param edgeRouterAttributes 
 * @param serverEgress 
 */

data class InlineResponse2023Model (
    @Json(name = "bindEndpointAttributes")
    val bindEndpointAttributes: kotlin.Array<kotlin.String>,
    @Json(name = "clientIngress")
    val clientIngress: InlineResponse2023ModelClientIngress,
    @Json(name = "edgeRouterAttributes")
    val edgeRouterAttributes: kotlin.Array<kotlin.String>,
    @Json(name = "serverEgress")
    val serverEgress: CoreV2ServicesServiceIdModelServerEgress
)

