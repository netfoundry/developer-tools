/*
 * untitled API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5170
 * 
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct InlineResponse2002EmbeddedDataCenters {
    #[serde(rename = "city")]
    pub city: crate::models::AnyType,
    #[serde(rename = "continentCode")]
    pub continent_code: crate::models::AnyType,
    #[serde(rename = "stateCode")]
    pub state_code: crate::models::AnyType,
    #[serde(rename = "lng")]
    pub lng: f32,
    #[serde(rename = "provider")]
    pub provider: String,
    #[serde(rename = "stateName")]
    pub state_name: crate::models::AnyType,
    #[serde(rename = "continentName")]
    pub continent_name: crate::models::AnyType,
    #[serde(rename = "isp")]
    pub isp: crate::models::AnyType,
    #[serde(rename = "locationCode")]
    pub location_code: String,
    #[serde(rename = "countryName")]
    pub country_name: crate::models::AnyType,
    #[serde(rename = "id")]
    pub id: String,
    #[serde(rename = "countryCode")]
    pub country_code: crate::models::AnyType,
    #[serde(rename = "address")]
    pub address: crate::models::AnyType,
    #[serde(rename = "locationName")]
    pub location_name: String,
    #[serde(rename = "lat")]
    pub lat: f32,
    #[serde(rename = "_links")]
    pub _links: crate::models::InlineResponse2002EmbeddedLinks,
}

impl InlineResponse2002EmbeddedDataCenters {
    pub fn new(city: crate::models::AnyType, continent_code: crate::models::AnyType, state_code: crate::models::AnyType, lng: f32, provider: String, state_name: crate::models::AnyType, continent_name: crate::models::AnyType, isp: crate::models::AnyType, location_code: String, country_name: crate::models::AnyType, id: String, country_code: crate::models::AnyType, address: crate::models::AnyType, location_name: String, lat: f32, _links: crate::models::InlineResponse2002EmbeddedLinks) -> InlineResponse2002EmbeddedDataCenters {
        InlineResponse2002EmbeddedDataCenters {
            city,
            continent_code,
            state_code,
            lng,
            provider,
            state_name,
            continent_name,
            isp,
            location_code,
            country_name,
            id,
            country_code,
            address,
            location_name,
            lat,
            _links,
        }
    }
}


