package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.InlineResponse200Links;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class InlineResponse2007EmbeddedEndpointList {
    
    Boolean mfaEnabled
    
    oas_any_type_not_mapped deletedAt = null
    
    String networkId
    
    String name
    
    String updatedAt
    
    oas_any_type_not_mapped syncId = null
    
    oas_any_type_not_mapped sessionIdentityId = null
    
    oas_any_type_not_mapped osRelease = null
    
    oas_any_type_not_mapped syncResourceId = null
    
    String zitiId
    
    oas_any_type_not_mapped appVersion = null
    
    oas_any_type_not_mapped branch = null
    
    oas_any_type_not_mapped os = null
    
    String ownerIdentityId
    
    Boolean hasEdgeRouterConnection
    
    List<String> attributes = new ArrayList<String>()
    
    Boolean hasApiSession
    
    oas_any_type_not_mapped revision = null
    
    oas_any_type_not_mapped version = null
    
    oas_any_type_not_mapped jwt = null
    
    String id
    
    Boolean sessionActive
    
    oas_any_type_not_mapped jwtExpiresAt = null
    
    String createdAt
    
    oas_any_type_not_mapped arch = null
    
    String createdBy
    
    oas_any_type_not_mapped deletedBy = null
    
    oas_any_type_not_mapped type = null
    
    oas_any_type_not_mapped osVersion = null
    
    oas_any_type_not_mapped appId = null
    
    InlineResponse200Links links
}
