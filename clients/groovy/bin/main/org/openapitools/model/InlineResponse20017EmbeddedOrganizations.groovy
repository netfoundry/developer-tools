package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.InlineResponse20011Links;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class InlineResponse20017EmbeddedOrganizations {
    
    String organizationShortName
    
    String name
    
    String updatedAt
    
    Boolean zitiEnabled
    
    oas_any_type_not_mapped defaultAzureVirtualWanId = null
    
    oas_any_type_not_mapped ownerIdentityId = null
    
    String billingAccountId
    
    String id
    
    Boolean awsAutoScalingGatewayEnabled
    
    String createdAt
    
    Boolean mfaRequired
    
    Boolean deleted
    
    InlineResponse20011Links links
}
