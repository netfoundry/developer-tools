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
pub struct InlineResponse20015 {
    #[serde(rename = "_embedded")]
    pub _embedded: crate::models::InlineResponse20015Embedded,
    #[serde(rename = "_links")]
    pub _links: crate::models::InlineResponse2002EmbeddedLinks,
    #[serde(rename = "page")]
    pub page: crate::models::InlineResponse2001Page,
}

impl InlineResponse20015 {
    pub fn new(_embedded: crate::models::InlineResponse20015Embedded, _links: crate::models::InlineResponse2002EmbeddedLinks, page: crate::models::InlineResponse2001Page) -> InlineResponse20015 {
        InlineResponse20015 {
            _embedded,
            _links,
            page,
        }
    }
}


