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


import com.squareup.moshi.Json
/**
 * 
 * @param name 
 * @param size 
 * @param locationCode 
 * @param productVersion 
 * @param networkGroupId 
 */

data class InlineObject (
    @Json(name = "name")
    val name: kotlin.String,
    @Json(name = "size")
    val size: kotlin.String,
    @Json(name = "locationCode")
    val locationCode: kotlin.String,
    @Json(name = "productVersion")
    val productVersion: kotlin.String,
    @Json(name = "networkGroupId")
    val networkGroupId: kotlin.String
)

