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
import org.openapitools.client.models.InlineResponse2001EmbeddedLinks

import com.squareup.moshi.Json
/**
 * 
 * @param deletedAt 
 * @param name 
 * @param updatedAt 
 * @param size 
 * @param ownerIdentityId 
 * @param productVersion 
 * @param networkGroupId 
 * @param id 
 * @param status 
 * @param createdAt 
 * @param createdBy 
 * @param deletedBy 
 * @param o365BreakoutCategory 
 * @param links 
 * @param locationCode 
 * @param sdsPassword 
 * @param networkController 
 */

data class InlineResponse20013 (
    @Json(name = "deletedAt")
    val deletedAt: AnyType,
    @Json(name = "name")
    val name: kotlin.String,
    @Json(name = "updatedAt")
    val updatedAt: kotlin.String,
    @Json(name = "size")
    val size: kotlin.String,
    @Json(name = "ownerIdentityId")
    val ownerIdentityId: kotlin.String,
    @Json(name = "productVersion")
    val productVersion: kotlin.String,
    @Json(name = "networkGroupId")
    val networkGroupId: kotlin.String,
    @Json(name = "id")
    val id: kotlin.String,
    @Json(name = "status")
    val status: kotlin.String,
    @Json(name = "createdAt")
    val createdAt: kotlin.String,
    @Json(name = "createdBy")
    val createdBy: kotlin.String,
    @Json(name = "deletedBy")
    val deletedBy: AnyType,
    @Json(name = "o365BreakoutCategory")
    val o365BreakoutCategory: kotlin.String,
    @Json(name = "_links")
    val links: InlineResponse2001EmbeddedLinks,
    @Json(name = "locationCode")
    val locationCode: kotlin.String? = null,
    @Json(name = "sdsPassword")
    val sdsPassword: kotlin.String? = null,
    @Json(name = "networkController")
    val networkController: AnyType? = null
)

