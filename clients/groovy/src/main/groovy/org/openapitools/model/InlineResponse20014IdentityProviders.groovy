package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.InlineResponse20014UpdatedAt;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class InlineResponse20014IdentityProviders {
    
    oas_any_type_not_mapped deletedAt = null
    
    String name
    
    oas_any_type_not_mapped updatedAt = null
    
    String auth0ConnectionType
    
    String auth0ConnectionId
    
    String id
    
    InlineResponse20014UpdatedAt createdAt
    
    String organizationId
    
    Boolean active
}
