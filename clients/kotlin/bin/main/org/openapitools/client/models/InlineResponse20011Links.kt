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

import org.openapitools.client.models.InlineResponse200LinksSelf

import com.squareup.moshi.Json
/**
 * 
 * @param azureSubscription 
 * @param networks 
 * @param self 
 */

data class InlineResponse20011Links (
    @Json(name = "azureSubscription")
    val azureSubscription: InlineResponse200LinksSelf,
    @Json(name = "networks")
    val networks: InlineResponse200LinksSelf,
    @Json(name = "self")
    val self: InlineResponse200LinksSelf
)

