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
import org.openapitools.client.models.InlineResponse2002EmbeddedLinks

import com.squareup.moshi.Json
/**
 * 
 * @param city 
 * @param continentCode 
 * @param stateCode 
 * @param lng 
 * @param provider 
 * @param stateName 
 * @param continentName 
 * @param isp 
 * @param locationCode 
 * @param countryName 
 * @param id 
 * @param countryCode 
 * @param address 
 * @param locationName 
 * @param lat 
 * @param links 
 */

data class InlineResponse2002EmbeddedDataCenters (
    @Json(name = "city")
    val city: AnyType,
    @Json(name = "continentCode")
    val continentCode: AnyType,
    @Json(name = "stateCode")
    val stateCode: AnyType,
    @Json(name = "lng")
    val lng: java.math.BigDecimal,
    @Json(name = "provider")
    val provider: kotlin.String,
    @Json(name = "stateName")
    val stateName: AnyType,
    @Json(name = "continentName")
    val continentName: AnyType,
    @Json(name = "isp")
    val isp: AnyType,
    @Json(name = "locationCode")
    val locationCode: kotlin.String,
    @Json(name = "countryName")
    val countryName: AnyType,
    @Json(name = "id")
    val id: kotlin.String,
    @Json(name = "countryCode")
    val countryCode: AnyType,
    @Json(name = "address")
    val address: AnyType,
    @Json(name = "locationName")
    val locationName: kotlin.String,
    @Json(name = "lat")
    val lat: java.math.BigDecimal,
    @Json(name = "_links")
    val links: InlineResponse2002EmbeddedLinks
)

