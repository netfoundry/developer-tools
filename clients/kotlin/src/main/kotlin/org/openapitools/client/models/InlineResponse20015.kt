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

import org.openapitools.client.models.InlineResponse20015Embedded
import org.openapitools.client.models.InlineResponse2001Page
import org.openapitools.client.models.InlineResponse2002EmbeddedLinks

import com.squareup.moshi.Json
/**
 * 
 * @param embedded 
 * @param links 
 * @param page 
 */

data class InlineResponse20015 (
    @Json(name = "_embedded")
    val embedded: InlineResponse20015Embedded,
    @Json(name = "_links")
    val links: InlineResponse2002EmbeddedLinks,
    @Json(name = "page")
    val page: InlineResponse2001Page
)

