package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.InlineResponse200Links;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class InlineResponse20012 {
    
    oas_any_type_not_mapped deletedAt = null
    
    String networkId
    
    String name
    
    String updatedAt
    
    oas_any_type_not_mapped provider = null
    
    Boolean online
    
    String zitiId
    
    oas_any_type_not_mapped userData = null
    
    String ownerIdentityId
    
    List<String> attributes = new ArrayList<String>()
    
    oas_any_type_not_mapped providerId = null
    
    oas_any_type_not_mapped jwt = null
    
    String id
    
    oas_any_type_not_mapped ipAddress = null
    
    String status
    
    oas_any_type_not_mapped hostId = null
    
    String createdAt
    
    String createdBy
    
    oas_any_type_not_mapped deletedBy = null
    
    oas_any_type_not_mapped locationMetadataId = null
    
    Boolean linkListener
    
    oas_any_type_not_mapped dataCenterId = null
    
    Boolean verified
    
    InlineResponse200Links links
}
