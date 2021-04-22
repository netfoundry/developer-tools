package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.InlineResponse2021Links;
import org.openapitools.model.InlineResponse2022ConfigIdByConfigTypeId;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class InlineResponse2022 {
    
    String deletedAt
    
    String networkId
    
    String name
    
    String updatedAt
    
    oas_any_type_not_mapped model = null
    
    oas_any_type_not_mapped zitiId = null
    
    String ownerIdentityId
    
    oas_any_type_not_mapped attributes = null
    
    String modelType
    
    String id
    
    InlineResponse2022ConfigIdByConfigTypeId configIdByConfigTypeId
    
    String createdAt
    
    String createdBy
    
    String deletedBy
    
    Boolean encryptionRequired
    
    oas_any_type_not_mapped authority = null
    
    InlineResponse2021Links links
}
