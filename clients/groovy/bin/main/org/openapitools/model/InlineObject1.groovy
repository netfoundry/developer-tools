package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.CoreV2ServicesModel;

@Canonical
class InlineObject1 {
    
    String networkId
    
    String name
    
    CoreV2ServicesModel model
    
    List<String> attributes = new ArrayList<String>()
    
    String modelType
    
    Boolean encryptionRequired
}
