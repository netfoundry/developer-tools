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

import org.openapitools.client.models.AnyType
import org.openapitools.client.models.CoreV2ServicesModelClientIngressPorts

import com.squareup.moshi.Json
/**
 * 
 * @param protocols 
 * @param host 
 * @param ports 
 * @param port 
 * @param addresses 
 */

data class CoreV2ServicesModelClientIngress (
    @Json(name = "protocols")
    val protocols: kotlin.Array<kotlin.String>? = null,
    @Json(name = "host")
    val host: kotlin.String? = null,
    @Json(name = "ports")
    val ports: kotlin.Array<CoreV2ServicesModelClientIngressPorts>? = null,
    @Json(name = "port")
    val port: AnyType? = null,
    @Json(name = "addresses")
    val addresses: kotlin.Array<kotlin.String>? = null
)

