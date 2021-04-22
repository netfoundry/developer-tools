package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.InlineResponse2001Embedded;
import org.openapitools.model.InlineResponse2001Links;
import org.openapitools.model.InlineResponse2001Page;

@Canonical
class InlineResponse2001 {
    
    InlineResponse2001Embedded embedded
    
    InlineResponse2001Links links
    
    InlineResponse2001Page page
}
