package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.InlineResponse2001Page;
import org.openapitools.model.InlineResponse2002EmbeddedLinks;
import org.openapitools.model.InlineResponse2006Embedded;

@Canonical
class InlineResponse2006 {
    
    InlineResponse2006Embedded embedded
    
    InlineResponse2002EmbeddedLinks links
    
    InlineResponse2001Page page
}
