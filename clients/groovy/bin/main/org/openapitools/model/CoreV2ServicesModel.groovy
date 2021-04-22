package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.CoreV2ServicesModelClientIngress;
import org.openapitools.model.CoreV2ServicesModelEdgeRouterHosts;
import org.openapitools.model.InlineResponse2003EmbeddedModelServerEgress;

@Canonical
class CoreV2ServicesModel {
    
    List<String> edgeRouterAttributes = new ArrayList<String>()
    
    InlineResponse2003EmbeddedModelServerEgress serverEgress
    
    List<String> bindEndpointAttributes = new ArrayList<String>()
    
    CoreV2ServicesModelClientIngress clientIngress
    
    List<CoreV2ServicesModelEdgeRouterHosts> edgeRouterHosts = new ArrayList<CoreV2ServicesModelEdgeRouterHosts>()
}
