package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.InlineResponse20014IdentityProviders;
import org.openapitools.model.InlineResponse20014UpdatedAt;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class InlineResponse20014 {
    
    oas_any_type_not_mapped deletedAt = null
    
    String name
    
    InlineResponse20014UpdatedAt updatedAt
    
    String label
    
    String id
    
    String mfaProvider
    
    InlineResponse20014UpdatedAt createdAt
    
    List<InlineResponse20014IdentityProviders> identityProviders = new ArrayList<InlineResponse20014IdentityProviders>()
    
    Boolean deleted
    
    Boolean active
}
