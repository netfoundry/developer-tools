/**
* untitled API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 5229
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.client.models

import org.openapitools.client.models.AnyType

import com.squareup.moshi.Json
/**
 * 
 * @param serviceAttributes 
 * @param networkId 
 * @param name 
 * @param postureCheckAttributes 
 * @param endpointAttributes 
 */

data class InlineObject4 (
    @Json(name = "serviceAttributes")
    val serviceAttributes: kotlin.Array<kotlin.String>,
    @Json(name = "networkId")
    val networkId: kotlin.String,
    @Json(name = "name")
    val name: kotlin.String,
    @Json(name = "postureCheckAttributes")
    val postureCheckAttributes: kotlin.Array<AnyType>,
    @Json(name = "endpointAttributes")
    val endpointAttributes: kotlin.Array<kotlin.String>
)

