package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class InlineObject4 {
    
    List<String> serviceAttributes = new ArrayList<String>()
    
    String networkId
    
    String name
    
    List<oas_any_type_not_mapped> postureCheckAttributes = new ArrayList<oas_any_type_not_mapped>()
    
    List<String> endpointAttributes = new ArrayList<String>()
}
