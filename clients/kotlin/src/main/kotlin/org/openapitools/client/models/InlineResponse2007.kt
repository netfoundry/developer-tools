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

import org.openapitools.client.models.InlineResponse2001Page
import org.openapitools.client.models.InlineResponse2002EmbeddedLinks
import org.openapitools.client.models.InlineResponse2007Embedded

import com.squareup.moshi.Json
/**
 * 
 * @param links 
 * @param page 
 * @param embedded 
 */

data class InlineResponse2007 (
    @Json(name = "_links")
    val links: InlineResponse2002EmbeddedLinks,
    @Json(name = "page")
    val page: InlineResponse2001Page,
    @Json(name = "_embedded")
    val embedded: InlineResponse2007Embedded? = null
)

