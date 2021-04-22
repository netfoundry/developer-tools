package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import org.openapitools.model.InlineResponse2001Page;
import org.openapitools.model.InlineResponse2002Embedded;
import org.openapitools.model.InlineResponse2002EmbeddedLinks;

@Canonical
class InlineResponse2002 {
    
    InlineResponse2002Embedded embedded
    
    InlineResponse2002EmbeddedLinks links
    
    InlineResponse2001Page page
}
