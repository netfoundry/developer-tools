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

import org.openapitools.client.models.InlineResponse20017EmbeddedOrganizations

import com.squareup.moshi.Json
/**
 * 
 * @param organizations 
 */

data class InlineResponse20017Embedded (
    @Json(name = "organizations")
    val organizations: kotlin.Array<InlineResponse20017EmbeddedOrganizations>
)

