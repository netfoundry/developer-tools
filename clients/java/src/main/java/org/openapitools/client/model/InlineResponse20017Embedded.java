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
import org.openapitools.client.model.InlineResponse20017EmbeddedOrganizations;

/**
 * InlineResponse20017Embedded
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-05-03T11:59:07.273777-04:00[America/New_York]")
public class InlineResponse20017Embedded {
  public static final String SERIALIZED_NAME_ORGANIZATIONS = "organizations";
  @SerializedName(SERIALIZED_NAME_ORGANIZATIONS)
  private List<InlineResponse20017EmbeddedOrganizations> organizations = new ArrayList<InlineResponse20017EmbeddedOrganizations>();


  public InlineResponse20017Embedded organizations(List<InlineResponse20017EmbeddedOrganizations> organizations) {
    
    this.organizations = organizations;
    return this;
  }

  public InlineResponse20017Embedded addOrganizationsItem(InlineResponse20017EmbeddedOrganizations organizationsItem) {
    this.organizations.add(organizationsItem);
    return this;
  }

   /**
   * Get organizations
   * @return organizations
  **/
  @ApiModelProperty(required = true, value = "")

  public List<InlineResponse20017EmbeddedOrganizations> getOrganizations() {
    return organizations;
  }


  public void setOrganizations(List<InlineResponse20017EmbeddedOrganizations> organizations) {
    this.organizations = organizations;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20017Embedded inlineResponse20017Embedded = (InlineResponse20017Embedded) o;
    return Objects.equals(this.organizations, inlineResponse20017Embedded.organizations);
  }

  @Override
  public int hashCode() {
    return Objects.hash(organizations);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20017Embedded {\n");
    sb.append("    organizations: ").append(toIndentedString(organizations)).append("\n");
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

