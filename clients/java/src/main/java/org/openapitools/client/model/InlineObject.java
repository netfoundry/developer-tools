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

/**
 * InlineObject
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-04-12T16:43:17.497575-04:00[America/New_York]")
public class InlineObject {
  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_SIZE = "size";
  @SerializedName(SERIALIZED_NAME_SIZE)
  private String size;

  public static final String SERIALIZED_NAME_LOCATION_CODE = "locationCode";
  @SerializedName(SERIALIZED_NAME_LOCATION_CODE)
  private String locationCode;

  public static final String SERIALIZED_NAME_PRODUCT_VERSION = "productVersion";
  @SerializedName(SERIALIZED_NAME_PRODUCT_VERSION)
  private String productVersion;

  public static final String SERIALIZED_NAME_NETWORK_GROUP_ID = "networkGroupId";
  @SerializedName(SERIALIZED_NAME_NETWORK_GROUP_ID)
  private String networkGroupId;


  public InlineObject name(String name) {
    
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


  public InlineObject size(String size) {
    
    this.size = size;
    return this;
  }

   /**
   * Get size
   * @return size
  **/
  @ApiModelProperty(required = true, value = "")

  public String getSize() {
    return size;
  }


  public void setSize(String size) {
    this.size = size;
  }


  public InlineObject locationCode(String locationCode) {
    
    this.locationCode = locationCode;
    return this;
  }

   /**
   * Get locationCode
   * @return locationCode
  **/
  @ApiModelProperty(required = true, value = "")

  public String getLocationCode() {
    return locationCode;
  }


  public void setLocationCode(String locationCode) {
    this.locationCode = locationCode;
  }


  public InlineObject productVersion(String productVersion) {
    
    this.productVersion = productVersion;
    return this;
  }

   /**
   * Get productVersion
   * @return productVersion
  **/
  @ApiModelProperty(required = true, value = "")

  public String getProductVersion() {
    return productVersion;
  }


  public void setProductVersion(String productVersion) {
    this.productVersion = productVersion;
  }


  public InlineObject networkGroupId(String networkGroupId) {
    
    this.networkGroupId = networkGroupId;
    return this;
  }

   /**
   * Get networkGroupId
   * @return networkGroupId
  **/
  @ApiModelProperty(required = true, value = "")

  public String getNetworkGroupId() {
    return networkGroupId;
  }


  public void setNetworkGroupId(String networkGroupId) {
    this.networkGroupId = networkGroupId;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineObject inlineObject = (InlineObject) o;
    return Objects.equals(this.name, inlineObject.name) &&
        Objects.equals(this.size, inlineObject.size) &&
        Objects.equals(this.locationCode, inlineObject.locationCode) &&
        Objects.equals(this.productVersion, inlineObject.productVersion) &&
        Objects.equals(this.networkGroupId, inlineObject.networkGroupId);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name, size, locationCode, productVersion, networkGroupId);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineObject {\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    size: ").append(toIndentedString(size)).append("\n");
    sb.append("    locationCode: ").append(toIndentedString(locationCode)).append("\n");
    sb.append("    productVersion: ").append(toIndentedString(productVersion)).append("\n");
    sb.append("    networkGroupId: ").append(toIndentedString(networkGroupId)).append("\n");
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

