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
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.CoreV2EndpointsEnrollmentMethod;

/**
 * InlineObject5
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-04-13T16:26:28.927973-04:00[America/New_York]")
public class InlineObject5 {
  public static final String SERIALIZED_NAME_ATTRIBUTES = "attributes";
  @SerializedName(SERIALIZED_NAME_ATTRIBUTES)
  private List<String> attributes = new ArrayList<String>();

  public static final String SERIALIZED_NAME_ENROLLMENT_METHOD = "enrollmentMethod";
  @SerializedName(SERIALIZED_NAME_ENROLLMENT_METHOD)
  private CoreV2EndpointsEnrollmentMethod enrollmentMethod;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_NETWORK_ID = "networkId";
  @SerializedName(SERIALIZED_NAME_NETWORK_ID)
  private String networkId;


  public InlineObject5 attributes(List<String> attributes) {
    
    this.attributes = attributes;
    return this;
  }

  public InlineObject5 addAttributesItem(String attributesItem) {
    this.attributes.add(attributesItem);
    return this;
  }

   /**
   * Get attributes
   * @return attributes
  **/
  @ApiModelProperty(required = true, value = "")

  public List<String> getAttributes() {
    return attributes;
  }


  public void setAttributes(List<String> attributes) {
    this.attributes = attributes;
  }


  public InlineObject5 enrollmentMethod(CoreV2EndpointsEnrollmentMethod enrollmentMethod) {
    
    this.enrollmentMethod = enrollmentMethod;
    return this;
  }

   /**
   * Get enrollmentMethod
   * @return enrollmentMethod
  **/
  @ApiModelProperty(required = true, value = "")

  public CoreV2EndpointsEnrollmentMethod getEnrollmentMethod() {
    return enrollmentMethod;
  }


  public void setEnrollmentMethod(CoreV2EndpointsEnrollmentMethod enrollmentMethod) {
    this.enrollmentMethod = enrollmentMethod;
  }


  public InlineObject5 name(String name) {
    
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


  public InlineObject5 networkId(String networkId) {
    
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
    InlineObject5 inlineObject5 = (InlineObject5) o;
    return Objects.equals(this.attributes, inlineObject5.attributes) &&
        Objects.equals(this.enrollmentMethod, inlineObject5.enrollmentMethod) &&
        Objects.equals(this.name, inlineObject5.name) &&
        Objects.equals(this.networkId, inlineObject5.networkId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(attributes, enrollmentMethod, name, networkId);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineObject5 {\n");
    sb.append("    attributes: ").append(toIndentedString(attributes)).append("\n");
    sb.append("    enrollmentMethod: ").append(toIndentedString(enrollmentMethod)).append("\n");
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

