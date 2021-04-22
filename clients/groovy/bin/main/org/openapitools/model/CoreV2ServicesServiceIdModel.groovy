package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.CoreV2ServicesServiceIdModelClientIngress;
import org.openapitools.model.CoreV2ServicesServiceIdModelServerEgress;

@Canonical
class CoreV2ServicesServiceIdModel {
    
    List<String> bindEndpointAttributes = new ArrayList<String>()
    
    CoreV2ServicesServiceIdModelClientIngress clientIngress
    
    List<String> edgeRouterAttributes = new ArrayList<String>()
    
    CoreV2ServicesServiceIdModelServerEgress serverEgress
}
