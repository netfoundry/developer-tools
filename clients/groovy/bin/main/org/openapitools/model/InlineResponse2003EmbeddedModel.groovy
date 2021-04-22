package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.InlineResponse2003EmbeddedModelClientIngress;
import org.openapitools.model.InlineResponse2003EmbeddedModelEdgeRouterHosts;
import org.openapitools.model.InlineResponse2003EmbeddedModelServerEgress;

@Canonical
class InlineResponse2003EmbeddedModel {
    
    List<String> edgeRouterAttributes = new ArrayList<String>()
    
    InlineResponse2003EmbeddedModelServerEgress serverEgress
    
    List<String> bindEndpointAttributes = new ArrayList<String>()
    
    InlineResponse2003EmbeddedModelClientIngress clientIngress
    
    List<InlineResponse2003EmbeddedModelEdgeRouterHosts> edgeRouterHosts = new ArrayList<InlineResponse2003EmbeddedModelEdgeRouterHosts>()
}
