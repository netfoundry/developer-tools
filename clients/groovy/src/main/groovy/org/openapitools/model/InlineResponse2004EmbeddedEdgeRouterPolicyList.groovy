package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.InlineResponse200Links;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class InlineResponse2004EmbeddedEdgeRouterPolicyList {
    
    oas_any_type_not_mapped deletedAt = null
    
    String networkId
    
    String name
    
    List<String> edgeRouterAttributes = new ArrayList<String>()
    
    String updatedAt
    
    String zitiId
    
    String ownerIdentityId
    
    String id
    
    String createdAt
    
    String createdBy
    
    oas_any_type_not_mapped deletedBy = null
    
    List<String> endpointAttributes = new ArrayList<String>()
    
    InlineResponse200Links links
}
