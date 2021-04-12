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
import org.openapitools.client.models.InlineResponse2003EmbeddedConfigIdByConfigTypeId
import org.openapitools.client.models.InlineResponse2003EmbeddedModel
import org.openapitools.client.models.InlineResponse200Links

import com.squareup.moshi.Json
/**
 * 
 * @param deletedAt 
 * @param networkId 
 * @param name 
 * @param updatedAt 
 * @param model 
 * @param zitiId 
 * @param ownerIdentityId 
 * @param attributes 
 * @param modelType 
 * @param id 
 * @param configIdByConfigTypeId 
 * @param createdAt 
 * @param createdBy 
 * @param deletedBy 
 * @param encryptionRequired 
 * @param authority 
 * @param links 
 */

data class InlineResponse2003EmbeddedServiceList (
    @Json(name = "deletedAt")
    val deletedAt: AnyType,
    @Json(name = "networkId")
    val networkId: kotlin.String,
    @Json(name = "name")
    val name: kotlin.String,
    @Json(name = "updatedAt")
    val updatedAt: kotlin.String,
    @Json(name = "model")
    val model: InlineResponse2003EmbeddedModel,
    @Json(name = "zitiId")
    val zitiId: AnyType,
    @Json(name = "ownerIdentityId")
    val ownerIdentityId: kotlin.String,
    @Json(name = "attributes")
    val attributes: kotlin.Array<kotlin.String>,
    @Json(name = "modelType")
    val modelType: kotlin.String,
    @Json(name = "id")
    val id: kotlin.String,
    @Json(name = "configIdByConfigTypeId")
    val configIdByConfigTypeId: InlineResponse2003EmbeddedConfigIdByConfigTypeId,
    @Json(name = "createdAt")
    val createdAt: kotlin.String,
    @Json(name = "createdBy")
    val createdBy: kotlin.String,
    @Json(name = "deletedBy")
    val deletedBy: AnyType,
    @Json(name = "encryptionRequired")
    val encryptionRequired: kotlin.Boolean,
    @Json(name = "authority")
    val authority: AnyType,
    @Json(name = "_links")
    val links: InlineResponse200Links
)

