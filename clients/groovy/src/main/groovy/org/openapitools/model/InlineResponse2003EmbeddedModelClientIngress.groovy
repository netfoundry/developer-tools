package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.InlineResponse2003EmbeddedModelClientIngressPorts;

@Canonical
class InlineResponse2003EmbeddedModelClientIngress {
    
    List<String> protocols = new ArrayList<String>()
    
    String host
    
    List<InlineResponse2003EmbeddedModelClientIngressPorts> ports = new ArrayList<InlineResponse2003EmbeddedModelClientIngressPorts>()
    
    BigDecimal port
    
    List<String> addresses = new ArrayList<String>()
}
