package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.CoreV2EndpointsEnrollmentMethod;

@Canonical
class InlineObject5 {
    
    List<String> attributes = new ArrayList<String>()
    
    CoreV2EndpointsEnrollmentMethod enrollmentMethod
    
    String name
    
    String networkId
}
