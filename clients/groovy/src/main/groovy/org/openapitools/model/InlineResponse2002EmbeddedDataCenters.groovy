package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import org.openapitools.model.InlineResponse2002EmbeddedLinks;
import org.openapitools.model.oas_any_type_not_mapped;

@Canonical
class InlineResponse2002EmbeddedDataCenters {
    
    oas_any_type_not_mapped city = null
    
    oas_any_type_not_mapped continentCode = null
    
    oas_any_type_not_mapped stateCode = null
    
    BigDecimal lng
    
    String provider
    
    oas_any_type_not_mapped stateName = null
    
    oas_any_type_not_mapped continentName = null
    
    oas_any_type_not_mapped isp = null
    
    String locationCode
    
    oas_any_type_not_mapped countryName = null
    
    String id
    
    oas_any_type_not_mapped countryCode = null
    
    oas_any_type_not_mapped address = null
    
    String locationName
    
    BigDecimal lat
    
    InlineResponse2002EmbeddedLinks links
}
