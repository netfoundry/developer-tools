/*
 * untitled API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5229
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
import org.openapitools.client.model.InlineResponse2001EmbeddedNetworkList;

/**
 * InlineResponse2001Embedded
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-05-03T11:59:07.273777-04:00[America/New_York]")
public class InlineResponse2001Embedded {
  public static final String SERIALIZED_NAME_NETWORK_LIST = "networkList";
  @SerializedName(SERIALIZED_NAME_NETWORK_LIST)
  private List<InlineResponse2001EmbeddedNetworkList> networkList = new ArrayList<InlineResponse2001EmbeddedNetworkList>();


  public InlineResponse2001Embedded networkList(List<InlineResponse2001EmbeddedNetworkList> networkList) {
    
    this.networkList = networkList;
    return this;
  }

  public InlineResponse2001Embedded addNetworkListItem(InlineResponse2001EmbeddedNetworkList networkListItem) {
    this.networkList.add(networkListItem);
    return this;
  }

   /**
   * Get networkList
   * @return networkList
  **/
  @ApiModelProperty(required = true, value = "")

  public List<InlineResponse2001EmbeddedNetworkList> getNetworkList() {
    return networkList;
  }


  public void setNetworkList(List<InlineResponse2001EmbeddedNetworkList> networkList) {
    this.networkList = networkList;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse2001Embedded inlineResponse2001Embedded = (InlineResponse2001Embedded) o;
    return Objects.equals(this.networkList, inlineResponse2001Embedded.networkList);
  }

  @Override
  public int hashCode() {
    return Objects.hash(networkList);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse2001Embedded {\n");
    sb.append("    networkList: ").append(toIndentedString(networkList)).append("\n");
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

