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


import com.squareup.moshi.Json
/**
 * 
 * @param networkId 
 * @param name 
 * @param attributes 
 * @param linkListener 
 * @param dataCenterId 
 */

data class InlineObject6 (
    @Json(name = "networkId")
    val networkId: kotlin.String,
    @Json(name = "name")
    val name: kotlin.String,
    @Json(name = "attributes")
    val attributes: kotlin.Array<kotlin.String>,
    @Json(name = "linkListener")
    val linkListener: kotlin.Boolean,
    @Json(name = "dataCenterId")
    val dataCenterId: kotlin.String? = null
)

