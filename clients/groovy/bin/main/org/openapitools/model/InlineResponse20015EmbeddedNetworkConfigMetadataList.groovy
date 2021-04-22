package org.openapitools.model;

import groovy.transform.Canonical
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.math.BigDecimal;
import org.openapitools.model.InlineResponse2002EmbeddedLinks;

@Canonical
class InlineResponse20015EmbeddedNetworkConfigMetadataList {
    
    BigDecimal networkControllerVolumeSize
    
    BigDecimal gatewayVolumeSize
    
    String name
    
    String gcpTransferNodeSize
    
    String awsNetworkControllerSize
    
    BigDecimal transferNodeVolumeSize
    
    String awsGatewaySize
    
    String ocpTransferNodeSize
    
    String awsTransferNodeSize
    
    String id
    
    String azureTransferNodeSize
    
    String alicloudTransferNodeSize
    
    InlineResponse2002EmbeddedLinks links
}
