package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.ArrayList;
import java.util.List;
import org.openapitools.model.InlineResponse5001Status;

@Canonical
class InlineResponse5001 {
    
    List<String> errors = new ArrayList<String>()
    
    InlineResponse5001Status status
    
    String traceId
}
