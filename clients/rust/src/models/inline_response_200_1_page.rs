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
pub struct InlineResponse2001Page {
    #[serde(rename = "number")]
    pub number: f32,
    #[serde(rename = "size")]
    pub size: f32,
    #[serde(rename = "totalElements")]
    pub total_elements: f32,
    #[serde(rename = "totalPages")]
    pub total_pages: f32,
}

impl InlineResponse2001Page {
    pub fn new(number: f32, size: f32, total_elements: f32, total_pages: f32) -> InlineResponse2001Page {
        InlineResponse2001Page {
            number,
            size,
            total_elements,
            total_pages,
        }
    }
}


