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
import org.openapitools.client.model.InlineResponse200;

/**
 * InlineResponse2006Embedded
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-05-03T11:59:07.273777-04:00[America/New_York]")
public class InlineResponse2006Embedded {
  public static final String SERIALIZED_NAME_APP_WAN_LIST = "appWanList";
  @SerializedName(SERIALIZED_NAME_APP_WAN_LIST)
  private List<InlineResponse200> appWanList = new ArrayList<InlineResponse200>();


  public InlineResponse2006Embedded appWanList(List<InlineResponse200> appWanList) {
    
    this.appWanList = appWanList;
    return this;
  }

  public InlineResponse2006Embedded addAppWanListItem(InlineResponse200 appWanListItem) {
    this.appWanList.add(appWanListItem);
    return this;
  }

   /**
   * Get appWanList
   * @return appWanList
  **/
  @ApiModelProperty(required = true, value = "")

  public List<InlineResponse200> getAppWanList() {
    return appWanList;
  }


  public void setAppWanList(List<InlineResponse200> appWanList) {
    this.appWanList = appWanList;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse2006Embedded inlineResponse2006Embedded = (InlineResponse2006Embedded) o;
    return Objects.equals(this.appWanList, inlineResponse2006Embedded.appWanList);
  }

  @Override
  public int hashCode() {
    return Objects.hash(appWanList);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse2006Embedded {\n");
    sb.append("    appWanList: ").append(toIndentedString(appWanList)).append("\n");
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

