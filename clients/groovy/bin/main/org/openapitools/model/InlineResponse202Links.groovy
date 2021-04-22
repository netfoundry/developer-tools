package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.InlineResponse200LinksNetwork;
import org.openapitools.model.InlineResponse200LinksSelf;

@Canonical
class InlineResponse202Links {
    
    InlineResponse200LinksSelf services
    
    InlineResponse200LinksNetwork networks
    
    InlineResponse200LinksSelf appWans
    
    InlineResponse200LinksNetwork process
    
    InlineResponse200LinksSelf endpoints
    
    InlineResponse200LinksSelf certificateAuthorities
    
    InlineResponse200LinksSelf self
    
    InlineResponse200LinksNetwork processExecutions
    
    InlineResponse200LinksSelf networkControllers
    
    InlineResponse200LinksSelf postureChecks
    
    InlineResponse200LinksSelf edgeRouters
    
    InlineResponse200LinksSelf edgeRouterPolicies
}
