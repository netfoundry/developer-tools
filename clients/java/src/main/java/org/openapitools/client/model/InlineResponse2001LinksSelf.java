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
 * InlineResponse2001LinksSelf
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-04-12T16:43:17.497575-04:00[America/New_York]")
public class InlineResponse2001LinksSelf {
  public static final String SERIALIZED_NAME_HREF = "href";
  @SerializedName(SERIALIZED_NAME_HREF)
  private String href;

  public static final String SERIALIZED_NAME_TEMPLATED = "templated";
  @SerializedName(SERIALIZED_NAME_TEMPLATED)
  private Boolean templated;


  public InlineResponse2001LinksSelf href(String href) {
    
    this.href = href;
    return this;
  }

   /**
   * Get href
   * @return href
  **/
  @ApiModelProperty(required = true, value = "")

  public String getHref() {
    return href;
  }


  public void setHref(String href) {
    this.href = href;
  }


  public InlineResponse2001LinksSelf templated(Boolean templated) {
    
    this.templated = templated;
    return this;
  }

   /**
   * Get templated
   * @return templated
  **/
  @ApiModelProperty(required = true, value = "")

  public Boolean getTemplated() {
    return templated;
  }


  public void setTemplated(Boolean templated) {
    this.templated = templated;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse2001LinksSelf inlineResponse2001LinksSelf = (InlineResponse2001LinksSelf) o;
    return Objects.equals(this.href, inlineResponse2001LinksSelf.href) &&
        Objects.equals(this.templated, inlineResponse2001LinksSelf.templated);
  }

  @Override
  public int hashCode() {
    return Objects.hash(href, templated);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse2001LinksSelf {\n");
    sb.append("    href: ").append(toIndentedString(href)).append("\n");
    sb.append("    templated: ").append(toIndentedString(templated)).append("\n");
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

