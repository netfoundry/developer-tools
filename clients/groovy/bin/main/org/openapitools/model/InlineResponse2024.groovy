package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.InlineResponse2024Links;
import org.openapitools.model.InlineResponse2024NetworkController;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class InlineResponse2024 {
    
    oas_any_type_not_mapped deletedAt = null
    
    String name
    
    String updatedAt
    
    String size
    
    String ownerIdentityId
    
    String productVersion
    
    String networkGroupId
    
    String id
    
    String status
    
    String createdAt
    
    String createdBy
    
    oas_any_type_not_mapped deletedBy = null
    
    InlineResponse2024NetworkController networkController
    
    String o365BreakoutCategory
    
    InlineResponse2024Links links
}
