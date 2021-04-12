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
import java.math.BigDecimal;

/**
 * InlineResponse2003EmbeddedModelClientIngressPorts
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-04-12T16:43:17.497575-04:00[America/New_York]")
public class InlineResponse2003EmbeddedModelClientIngressPorts {
  public static final String SERIALIZED_NAME_HIGH = "high";
  @SerializedName(SERIALIZED_NAME_HIGH)
  private BigDecimal high;

  public static final String SERIALIZED_NAME_LOW = "low";
  @SerializedName(SERIALIZED_NAME_LOW)
  private BigDecimal low;


  public InlineResponse2003EmbeddedModelClientIngressPorts high(BigDecimal high) {
    
    this.high = high;
    return this;
  }

   /**
   * Get high
   * @return high
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getHigh() {
    return high;
  }


  public void setHigh(BigDecimal high) {
    this.high = high;
  }


  public InlineResponse2003EmbeddedModelClientIngressPorts low(BigDecimal low) {
    
    this.low = low;
    return this;
  }

   /**
   * Get low
   * @return low
  **/
  @ApiModelProperty(required = true, value = "")

  public BigDecimal getLow() {
    return low;
  }


  public void setLow(BigDecimal low) {
    this.low = low;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse2003EmbeddedModelClientIngressPorts inlineResponse2003EmbeddedModelClientIngressPorts = (InlineResponse2003EmbeddedModelClientIngressPorts) o;
    return Objects.equals(this.high, inlineResponse2003EmbeddedModelClientIngressPorts.high) &&
        Objects.equals(this.low, inlineResponse2003EmbeddedModelClientIngressPorts.low);
  }

  @Override
  public int hashCode() {
    return Objects.hash(high, low);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse2003EmbeddedModelClientIngressPorts {\n");
    sb.append("    high: ").append(toIndentedString(high)).append("\n");
    sb.append("    low: ").append(toIndentedString(low)).append("\n");
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

