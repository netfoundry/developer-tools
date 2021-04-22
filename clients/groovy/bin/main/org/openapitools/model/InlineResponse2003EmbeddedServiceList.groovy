package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.InlineResponse2003EmbeddedConfigIdByConfigTypeId;
import org.openapitools.model.InlineResponse2003EmbeddedModel;
import org.openapitools.model.InlineResponse200Links;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class InlineResponse2003EmbeddedServiceList {
    
    oas_any_type_not_mapped deletedAt = null
    
    String networkId
    
    String name
    
    String updatedAt
    
    InlineResponse2003EmbeddedModel model
    
    oas_any_type_not_mapped zitiId = null
    
    String ownerIdentityId
    
    List<String> attributes = new ArrayList<String>()
    
    String modelType
    
    String id
    
    InlineResponse2003EmbeddedConfigIdByConfigTypeId configIdByConfigTypeId
    
    String createdAt
    
    String createdBy
    
    oas_any_type_not_mapped deletedBy = null
    
    Boolean encryptionRequired
    
    oas_any_type_not_mapped authority = null
    
    InlineResponse200Links links
}
