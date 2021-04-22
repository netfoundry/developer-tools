package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;

@Canonical
class InlineObject2 {
    
    List<String> edgeRouterAttributes = new ArrayList<String>()
    
    List<String> endpointAttributes = new ArrayList<String>()
    
    String name
    
    String networkId
}
