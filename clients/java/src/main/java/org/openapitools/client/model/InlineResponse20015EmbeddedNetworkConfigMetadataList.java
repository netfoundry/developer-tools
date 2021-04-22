/*
 * untitled API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5227
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package org.openapitools.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.math.BigDecimal;
import org.openapitools.client.model.InlineResponse2002EmbeddedLinks;

/**
 * InlineResponse20015EmbeddedNetworkConfigMetadataList
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-04-13T16:26:28.927973-04:00[America/New_York]")
public class InlineResponse20015EmbeddedNetworkConfigMetadataList {
  public static final String SERIALIZED_NAME_NETWORK_CONTROLLER_VOLUME_SIZE = "networkControllerVolumeSize";
  @SerializedName(SERIALIZED_NAME_NETWORK_CONTROLLER_VOLUME_SIZE)
  private BigDecimal networkControllerVolumeSize;

  public static final String SERIALIZED_NAME_GATEWAY_VOLUME_SIZE = "gatewayVolumeSize";
  @SerializedName(SERIALIZED_NAME_GATEWAY_VOLUME_SIZE)
  private BigDecimal gatewayVolumeSize;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_GCP_TRANSFER_NODE_SIZE = "gcpTransferNodeSize";
  @SerializedName(SERIALIZED_NAME_GCP_TRANSFER_NODE_SIZE)
  private String gcpTransferNodeSize;

  public static final String SERIALIZED_NAME_AWS_NETWORK_CONTROLLER_SIZE = "awsNetworkControllerSize";
  @SerializedName(SERIALIZED_NAME_AWS_NETWORK_CONTROLLER_SIZE)
  private String awsNetworkControllerSize;

  public static final String SERIALIZED_NAME_TRANSFER_NODE_VOLUME_SIZE = "transferNodeVolumeSize";
  @SerializedName(SERIALIZED_NAME_TRANSFER_NODE_VOLUME_SIZE)
  private BigDecimal transferNodeVolumeSize;

  public static final String SERIALIZED_NAME_AWS_GATEWAY_SIZE = "awsGatewaySize";
  @SerializedName(SERIALIZED_NAME_AWS_GATEWAY_SIZE)
  private String awsGatewaySize;

  public static final String SERIALIZED_NAME_OCP_TRANSFER_NODE_SIZE = "ocpTransferNodeSize";
  @SerializedName(SERIALIZED_NAME_OCP_TRANSFER_NODE_SIZE)
  private String ocpTransferNodeSize;

  public static final String SERIALIZED_NAME_AWS_TRANSFER_NODE_SIZE = "awsTransferNodeSize";
  @SerializedName(SERIALIZED_NAME_AWS_TRANSFER_NODE_SIZE)
  private String awsTransferNodeSize;

  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_AZURE_TRANSFER_NODE_SIZE = "azureTransferNodeSize";
  @SerializedName(SERIALIZED_NAME_AZURE_TRANSFER_NODE_SIZE)
  private String azureTransferNodeSize;

  public static final String SERIALIZED_NAME_ALICLOUD_TRANSFER_NODE_SIZE = "alicloudTransferNodeSize";
  @SerializedName(SERIALIZED_NAME_ALICLOUD_TRANSFER_NODE_SIZE)
  private String alicloudTransferNodeSize;

  public static final String SERIALIZED_NAME_LINKS = "_links";
  @SerializedName(SERIALIZED_NAME_LINKS)
  private InlineResponse2002EmbeddedLinks links;


  public InlineResponse20015EmbeddedNetworkConfigMetadataList networkControllerVolumeSize(BigDecimal networkControllerVolumeSize) {
    
    this.networkControllerVolumeSize = networkControllerVolumeSize;
    return this;
  }

   /**
   * Get networkControllerVolumeSize
   * @return networkControllerVolumeSize
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getNetworkControllerVolumeSize() {
    return networkControllerVolumeSize;
  }


  public void setNetworkControllerVolumeSize(BigDecimal networkControllerVolumeSize) {
    this.networkControllerVolumeSize = networkControllerVolumeSize;
  }


  public InlineResponse20015EmbeddedNetworkConfigMetadataList gatewayVolumeSize(BigDecimal gatewayVolumeSize) {
    
    this.gatewayVolumeSize = gatewayVolumeSize;
    return this;
  }

   /**
   * Get gatewayVolumeSize
   * @return gatewayVolumeSize
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getGatewayVolumeSize() {
    return gatewayVolumeSize;
  }


  public void setGatewayVolumeSize(BigDecimal gatewayVolumeSize) {
    this.gatewayVolumeSize = gatewayVolumeSize;
  }


  public InlineResponse20015EmbeddedNetworkConfigMetadataList name(String name) {
    
    this.name = name;
    return this;
  }

   /**
   * Get name
   * @return name
  **/
  @ApiModelProperty(required = true, value = "")

  public String getName() {
    return name;
  }


  public void setName(String name) {
    this.name = name;
  }


  public InlineResponse20015EmbeddedNetworkConfigMetadataList gcpTransferNodeSize(String gcpTransferNodeSize) {
    
    this.gcpTransferNodeSize = gcpTransferNodeSize;
    return this;
  }

   /**
   * Get gcpTransferNodeSize
   * @return gcpTransferNodeSize
  **/
  @ApiModelProperty(required = true, value = "")

  public String getGcpTransferNodeSize() {
    return gcpTransferNodeSize;
  }


  public void setGcpTransferNodeSize(String gcpTransferNodeSize) {
    this.gcpTransferNodeSize = gcpTransferNodeSize;
  }


  public InlineResponse20015EmbeddedNetworkConfigMetadataList awsNetworkControllerSize(String awsNetworkControllerSize) {
    
    this.awsNetworkControllerSize = awsNetworkControllerSize;
    return this;
  }

   /**
   * Get awsNetworkControllerSize
   * @return awsNetworkControllerSize
  **/
  @ApiModelProperty(required = true, value = "")

  public String getAwsNetworkControllerSize() {
    return awsNetworkControllerSize;
  }


  public void setAwsNetworkControllerSize(String awsNetworkControllerSize) {
    this.awsNetworkControllerSize = awsNetworkControllerSize;
  }


  public InlineResponse20015EmbeddedNetworkConfigMetadataList transferNodeVolumeSize(BigDecimal transferNodeVolumeSize) {
    
    this.transferNodeVolumeSize = transferNodeVolumeSize;
    return this;
  }

   /**
   * Get transferNodeVolumeSize
   * @return transferNodeVolumeSize
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getTransferNodeVolumeSize() {
    return transferNodeVolumeSize;
  }


  public void setTransferNodeVolumeSize(BigDecimal transferNodeVolumeSize) {
    this.transferNodeVolumeSize = transferNodeVolumeSize;
  }


  public InlineResponse20015EmbeddedNetworkConfigMetadataList awsGatewaySize(String awsGatewaySize) {
    
    this.awsGatewaySize = awsGatewaySize;
    return this;
  }

   /**
   * Get awsGatewaySize
   * @return awsGatewaySize
  **/
  @ApiModelProperty(required = true, value = "")

  public String getAwsGatewaySize() {
    return awsGatewaySize;
  }


  public void setAwsGatewaySize(String awsGatewaySize) {
    this.awsGatewaySize = awsGatewaySize;
  }


  public InlineResponse20015EmbeddedNetworkConfigMetadataList ocpTransferNodeSize(String ocpTransferNodeSize) {
    
    this.ocpTransferNodeSize = ocpTransferNodeSize;
    return this;
  }

   /**
   * Get ocpTransferNodeSize
   * @return ocpTransferNodeSize
  **/
  @ApiModelProperty(required = true, value = "")

  public String getOcpTransferNodeSize() {
    return ocpTransferNodeSize;
  }


  public void setOcpTransferNodeSize(String ocpTransferNodeSize) {
    this.ocpTransferNodeSize = ocpTransferNodeSize;
  }


  public InlineResponse20015EmbeddedNetworkConfigMetadataList awsTransferNodeSize(String awsTransferNodeSize) {
    
    this.awsTransferNodeSize = awsTransferNodeSize;
    return this;
  }

   /**
   * Get awsTransferNodeSize
   * @return awsTransferNodeSize
  **/
  @ApiModelProperty(required = true, value = "")

  public String getAwsTransferNodeSize() {
    return awsTransferNodeSize;
  }


  public void setAwsTransferNodeSize(String awsTransferNodeSize) {
    this.awsTransferNodeSize = awsTransferNodeSize;
  }


  public InlineResponse20015EmbeddedNetworkConfigMetadataList id(String id) {
    
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @ApiModelProperty(required = true, value = "")

  public String getId() {
    return id;
  }


  public void setId(String id) {
    this.id = id;
  }


  public InlineResponse20015EmbeddedNetworkConfigMetadataList azureTransferNodeSize(String azureTransferNodeSize) {
    
    this.azureTransferNodeSize = azureTransferNodeSize;
    return this;
  }

   /**
   * Get azureTransferNodeSize
   * @return azureTransferNodeSize
  **/
  @ApiModelProperty(required = true, value = "")

  public String getAzureTransferNodeSize() {
    return azureTransferNodeSize;
  }


  public void setAzureTransferNodeSize(String azureTransferNodeSize) {
    this.azureTransferNodeSize = azureTransferNodeSize;
  }


  public InlineResponse20015EmbeddedNetworkConfigMetadataList alicloudTransferNodeSize(String alicloudTransferNodeSize) {
    
    this.alicloudTransferNodeSize = alicloudTransferNodeSize;
    return this;
  }

   /**
   * Get alicloudTransferNodeSize
   * @return alicloudTransferNodeSize
  **/
  @ApiModelProperty(required = true, value = "")

  public String getAlicloudTransferNodeSize() {
    return alicloudTransferNodeSize;
  }


  public void setAlicloudTransferNodeSize(String alicloudTransferNodeSize) {
    this.alicloudTransferNodeSize = alicloudTransferNodeSize;
  }


  public InlineResponse20015EmbeddedNetworkConfigMetadataList links(InlineResponse2002EmbeddedLinks links) {
    
    this.links = links;
    return this;
  }

   /**
   * Get links
   * @return links
  **/
  @ApiModelProperty(required = true, value = "")

  public InlineResponse2002EmbeddedLinks getLinks() {
    return links;
  }


  public void setLinks(InlineResponse2002EmbeddedLinks links) {
    this.links = links;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20015EmbeddedNetworkConfigMetadataList inlineResponse20015EmbeddedNetworkConfigMetadataList = (InlineResponse20015EmbeddedNetworkConfigMetadataList) o;
    return Objects.equals(this.networkControllerVolumeSize, inlineResponse20015EmbeddedNetworkConfigMetadataList.networkControllerVolumeSize) &&
        Objects.equals(this.gatewayVolumeSize, inlineResponse20015EmbeddedNetworkConfigMetadataList.gatewayVolumeSize) &&
        Objects.equals(this.name, inlineResponse20015EmbeddedNetworkConfigMetadataList.name) &&
        Objects.equals(this.gcpTransferNodeSize, inlineResponse20015EmbeddedNetworkConfigMetadataList.gcpTransferNodeSize) &&
        Objects.equals(this.awsNetworkControllerSize, inlineResponse20015EmbeddedNetworkConfigMetadataList.awsNetworkControllerSize) &&
        Objects.equals(this.transferNodeVolumeSize, inlineResponse20015EmbeddedNetworkConfigMetadataList.transferNodeVolumeSize) &&
        Objects.equals(this.awsGatewaySize, inlineResponse20015EmbeddedNetworkConfigMetadataList.awsGatewaySize) &&
        Objects.equals(this.ocpTransferNodeSize, inlineResponse20015EmbeddedNetworkConfigMetadataList.ocpTransferNodeSize) &&
        Objects.equals(this.awsTransferNodeSize, inlineResponse20015EmbeddedNetworkConfigMetadataList.awsTransferNodeSize) &&
        Objects.equals(this.id, inlineResponse20015EmbeddedNetworkConfigMetadataList.id) &&
        Objects.equals(this.azureTransferNodeSize, inlineResponse20015EmbeddedNetworkConfigMetadataList.azureTransferNodeSize) &&
        Objects.equals(this.alicloudTransferNodeSize, inlineResponse20015EmbeddedNetworkConfigMetadataList.alicloudTransferNodeSize) &&
        Objects.equals(this.links, inlineResponse20015EmbeddedNetworkConfigMetadataList.links);
  }

  @Override
  public int hashCode() {
    return Objects.hash(networkControllerVolumeSize, gatewayVolumeSize, name, gcpTransferNodeSize, awsNetworkControllerSize, transferNodeVolumeSize, awsGatewaySize, ocpTransferNodeSize, awsTransferNodeSize, id, azureTransferNodeSize, alicloudTransferNodeSize, links);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20015EmbeddedNetworkConfigMetadataList {\n");
    sb.append("    networkControllerVolumeSize: ").append(toIndentedString(networkControllerVolumeSize)).append("\n");
    sb.append("    gatewayVolumeSize: ").append(toIndentedString(gatewayVolumeSize)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    gcpTransferNodeSize: ").append(toIndentedString(gcpTransferNodeSize)).append("\n");
    sb.append("    awsNetworkControllerSize: ").append(toIndentedString(awsNetworkControllerSize)).append("\n");
    sb.append("    transferNodeVolumeSize: ").append(toIndentedString(transferNodeVolumeSize)).append("\n");
    sb.append("    awsGatewaySize: ").append(toIndentedString(awsGatewaySize)).append("\n");
    sb.append("    ocpTransferNodeSize: ").append(toIndentedString(ocpTransferNodeSize)).append("\n");
    sb.append("    awsTransferNodeSize: ").append(toIndentedString(awsTransferNodeSize)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    azureTransferNodeSize: ").append(toIndentedString(azureTransferNodeSize)).append("\n");
    sb.append("    alicloudTransferNodeSize: ").append(toIndentedString(alicloudTransferNodeSize)).append("\n");
    sb.append("    links: ").append(toIndentedString(links)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

