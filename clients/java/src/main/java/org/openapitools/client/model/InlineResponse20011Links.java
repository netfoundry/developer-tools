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
import org.openapitools.client.model.InlineResponse200LinksSelf;

/**
 * InlineResponse20011Links
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-04-13T16:26:28.927973-04:00[America/New_York]")
public class InlineResponse20011Links {
  public static final String SERIALIZED_NAME_AZURE_SUBSCRIPTION = "azureSubscription";
  @SerializedName(SERIALIZED_NAME_AZURE_SUBSCRIPTION)
  private InlineResponse200LinksSelf azureSubscription;

  public static final String SERIALIZED_NAME_NETWORKS = "networks";
  @SerializedName(SERIALIZED_NAME_NETWORKS)
  private InlineResponse200LinksSelf networks;

  public static final String SERIALIZED_NAME_SELF = "self";
  @SerializedName(SERIALIZED_NAME_SELF)
  private InlineResponse200LinksSelf self;


  public InlineResponse20011Links azureSubscription(InlineResponse200LinksSelf azureSubscription) {
    
    this.azureSubscription = azureSubscription;
    return this;
  }

   /**
   * Get azureSubscription
   * @return azureSubscription
  **/
  @ApiModelProperty(required = true, value = "")

  public InlineResponse200LinksSelf getAzureSubscription() {
    return azureSubscription;
  }


  public void setAzureSubscription(InlineResponse200LinksSelf azureSubscription) {
    this.azureSubscription = azureSubscription;
  }


  public InlineResponse20011Links networks(InlineResponse200LinksSelf networks) {
    
    this.networks = networks;
    return this;
  }

   /**
   * Get networks
   * @return networks
  **/
  @ApiModelProperty(required = true, value = "")

  public InlineResponse200LinksSelf getNetworks() {
    return networks;
  }


  public void setNetworks(InlineResponse200LinksSelf networks) {
    this.networks = networks;
  }


  public InlineResponse20011Links self(InlineResponse200LinksSelf self) {
    
    this.self = self;
    return this;
  }

   /**
   * Get self
   * @return self
  **/
  @ApiModelProperty(required = true, value = "")

  public InlineResponse200LinksSelf getSelf() {
    return self;
  }


  public void setSelf(InlineResponse200LinksSelf self) {
    this.self = self;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20011Links inlineResponse20011Links = (InlineResponse20011Links) o;
    return Objects.equals(this.azureSubscription, inlineResponse20011Links.azureSubscription) &&
        Objects.equals(this.networks, inlineResponse20011Links.networks) &&
        Objects.equals(this.self, inlineResponse20011Links.self);
  }

  @Override
  public int hashCode() {
    return Objects.hash(azureSubscription, networks, self);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20011Links {\n");
    sb.append("    azureSubscription: ").append(toIndentedString(azureSubscription)).append("\n");
    sb.append("    networks: ").append(toIndentedString(networks)).append("\n");
    sb.append("    self: ").append(toIndentedString(self)).append("\n");
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

