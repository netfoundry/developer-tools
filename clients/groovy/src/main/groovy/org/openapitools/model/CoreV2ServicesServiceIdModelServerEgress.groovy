package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class CoreV2ServicesServiceIdModelServerEgress {
    
    oas_any_type_not_mapped dialInterceptAddress = null
    
    oas_any_type_not_mapped dialInterceptPort = null
    
    BigDecimal port
    
    Boolean dialInterceptProtocol
    
    String address
    
    oas_any_type_not_mapped protocol = null
}
