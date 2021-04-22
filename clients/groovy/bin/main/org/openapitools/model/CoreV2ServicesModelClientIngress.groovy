package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.CoreV2ServicesModelClientIngressPorts;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class CoreV2ServicesModelClientIngress {
    
    List<String> protocols = new ArrayList<String>()
    
    String host
    
    List<CoreV2ServicesModelClientIngressPorts> ports = new ArrayList<CoreV2ServicesModelClientIngressPorts>()
    
    oas_any_type_not_mapped port = null
    
    List<String> addresses = new ArrayList<String>()
}
