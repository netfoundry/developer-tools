package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class CoreV2ServicesModelServerEgress {
    
    String host
    
    oas_any_type_not_mapped port = null
    
    String protocol
}
