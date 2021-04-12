package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.InlineResponse200LinksNetwork;
import org.openapitools.model.InlineResponse200LinksSelf;

@Canonical
class InlineResponse2021Links {
    
    InlineResponse200LinksNetwork network
    
    InlineResponse200LinksNetwork process
    
    InlineResponse200LinksSelf self
}
