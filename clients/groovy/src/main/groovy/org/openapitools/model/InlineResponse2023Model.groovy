package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.CoreV2ServicesServiceIdModelServerEgress;
import org.openapitools.model.InlineResponse2023ModelClientIngress;

@Canonical
class InlineResponse2023Model {
    
    List<String> bindEndpointAttributes = new ArrayList<String>()
    
    InlineResponse2023ModelClientIngress clientIngress
    
    List<String> edgeRouterAttributes = new ArrayList<String>()
    
    CoreV2ServicesServiceIdModelServerEgress serverEgress
}
