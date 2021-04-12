package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.InlineResponse20014UpdatedAt;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class InlineResponse20016 {
    
    oas_any_type_not_mapped deletedAt = null
    
    String name
    
    oas_any_type_not_mapped updatedAt = null
    
    String email
    
    String description
    
    String awsCognitoClientId
    
    oas_any_type_not_mapped auth0ClientId = null
    
    String id
    
    String contactEmail
    
    InlineResponse20014UpdatedAt createdAt
    
    String organizationId
    
    String tenantId
    
    String type
    
    String authenticationUrl
    
    Boolean active
}
