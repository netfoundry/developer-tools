package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;

@Canonical
class InlineObject6 {
    
    String networkId
    
    String name
    
    List<String> attributes = new ArrayList<String>()
    
    Boolean linkListener
    
    String dataCenterId
}
