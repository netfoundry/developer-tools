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

import org.openapitools.client.models.AnyType
import org.openapitools.client.models.InlineResponse200Links

import com.squareup.moshi.Json
/**
 * 
 * @param deletedAt 
 * @param networkId 
 * @param name 
 * @param edgeRouterAttributes 
 * @param updatedAt 
 * @param zitiId 
 * @param ownerIdentityId 
 * @param id 
 * @param createdAt 
 * @param createdBy 
 * @param deletedBy 
 * @param endpointAttributes 
 * @param links 
 */

data class InlineResponse2004EmbeddedEdgeRouterPolicyList (
    @Json(name = "deletedAt")
    val deletedAt: AnyType,
    @Json(name = "networkId")
    val networkId: kotlin.String,
    @Json(name = "name")
    val name: kotlin.String,
    @Json(name = "edgeRouterAttributes")
    val edgeRouterAttributes: kotlin.Array<kotlin.String>,
    @Json(name = "updatedAt")
    val updatedAt: kotlin.String,
    @Json(name = "zitiId")
    val zitiId: kotlin.String,
    @Json(name = "ownerIdentityId")
    val ownerIdentityId: kotlin.String,
    @Json(name = "id")
    val id: kotlin.String,
    @Json(name = "createdAt")
    val createdAt: kotlin.String,
    @Json(name = "createdBy")
    val createdBy: kotlin.String,
    @Json(name = "deletedBy")
    val deletedBy: AnyType,
    @Json(name = "endpointAttributes")
    val endpointAttributes: kotlin.Array<kotlin.String>,
    @Json(name = "_links")
    val links: InlineResponse200Links
)

