/*
 * untitled API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5170
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
import java.util.ArrayList;
import java.util.List;

/**
 * InlineObject2
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-04-12T16:43:17.497575-04:00[America/New_York]")
public class InlineObject2 {
  public static final String SERIALIZED_NAME_EDGE_ROUTER_ATTRIBUTES = "edgeRouterAttributes";
  @SerializedName(SERIALIZED_NAME_EDGE_ROUTER_ATTRIBUTES)
  private List<String> edgeRouterAttributes = new ArrayList<String>();

  public static final String SERIALIZED_NAME_ENDPOINT_ATTRIBUTES = "endpointAttributes";
  @SerializedName(SERIALIZED_NAME_ENDPOINT_ATTRIBUTES)
  private List<String> endpointAttributes = new ArrayList<String>();

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_NETWORK_ID = "networkId";
  @SerializedName(SERIALIZED_NAME_NETWORK_ID)
  private String networkId;


  public InlineObject2 edgeRouterAttributes(List<String> edgeRouterAttributes) {
    
    this.edgeRouterAttributes = edgeRouterAttributes;
    return this;
  }

  public InlineObject2 addEdgeRouterAttributesItem(String edgeRouterAttributesItem) {
    this.edgeRouterAttributes.add(edgeRouterAttributesItem);
    return this;
  }

   /**
   * Get edgeRouterAttributes
   * @return edgeRouterAttributes
  **/
  @ApiModelProperty(required = true, value = "")

  public List<String> getEdgeRouterAttributes() {
    return edgeRouterAttributes;
  }


  public void setEdgeRouterAttributes(List<String> edgeRouterAttributes) {
    this.edgeRouterAttributes = edgeRouterAttributes;
  }


  public InlineObject2 endpointAttributes(List<String> endpointAttributes) {
    
    this.endpointAttributes = endpointAttributes;
    return this;
  }

  public InlineObject2 addEndpointAttributesItem(String endpointAttributesItem) {
    this.endpointAttributes.add(endpointAttributesItem);
    return this;
  }

   /**
   * Get endpointAttributes
   * @return endpointAttributes
  **/
  @ApiModelProperty(required = true, value = "")

  public List<String> getEndpointAttributes() {
    return endpointAttributes;
  }


  public void setEndpointAttributes(List<String> endpointAttributes) {
    this.endpointAttributes = endpointAttributes;
  }


  public InlineObject2 name(String name) {
    
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


  public InlineObject2 networkId(String networkId) {
    
    this.networkId = networkId;
    return this;
  }

   /**
   * Get networkId
   * @return networkId
  **/
  @ApiModelProperty(required = true, value = "")

  public String getNetworkId() {
    return networkId;
  }


  public void setNetworkId(String networkId) {
    this.networkId = networkId;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineObject2 inlineObject2 = (InlineObject2) o;
    return Objects.equals(this.edgeRouterAttributes, inlineObject2.edgeRouterAttributes) &&
        Objects.equals(this.endpointAttributes, inlineObject2.endpointAttributes) &&
        Objects.equals(this.name, inlineObject2.name) &&
        Objects.equals(this.networkId, inlineObject2.networkId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(edgeRouterAttributes, endpointAttributes, name, networkId);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineObject2 {\n");
    sb.append("    edgeRouterAttributes: ").append(toIndentedString(edgeRouterAttributes)).append("\n");
    sb.append("    endpointAttributes: ").append(toIndentedString(endpointAttributes)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    networkId: ").append(toIndentedString(networkId)).append("\n");
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

