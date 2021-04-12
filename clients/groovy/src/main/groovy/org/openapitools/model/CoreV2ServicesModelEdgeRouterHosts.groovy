package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.CoreV2ServicesModelServerEgress;

@Canonical
class CoreV2ServicesModelEdgeRouterHosts {
    
    String edgeRouterId
    
    CoreV2ServicesModelServerEgress serverEgress
}
