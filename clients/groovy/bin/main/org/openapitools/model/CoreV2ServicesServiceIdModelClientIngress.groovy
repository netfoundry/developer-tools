package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.CoreV2ServicesModelClientIngressPorts;

@Canonical
class CoreV2ServicesServiceIdModelClientIngress {
    
    List<String> addresses = new ArrayList<String>()
    
    List<CoreV2ServicesModelClientIngressPorts> ports = new ArrayList<CoreV2ServicesModelClientIngressPorts>()
    
    List<String> protocols = new ArrayList<String>()
}
