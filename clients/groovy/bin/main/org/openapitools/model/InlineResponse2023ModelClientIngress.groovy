package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.InlineResponse2003EmbeddedModelClientIngressPorts;

@Canonical
class InlineResponse2023ModelClientIngress {
    
    List<String> addresses = new ArrayList<String>()
    
    List<InlineResponse2003EmbeddedModelClientIngressPorts> ports = new ArrayList<InlineResponse2003EmbeddedModelClientIngressPorts>()
    
    List<String> protocols = new ArrayList<String>()
}
