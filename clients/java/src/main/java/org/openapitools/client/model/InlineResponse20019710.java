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

/**
 * InlineResponse20019710
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-04-13T16:26:28.927973-04:00[America/New_York]")
public class InlineResponse20019710 {
  public static final String SERIALIZED_NAME_ZITI_CLI_LINUX_BINARY_SHA1 = "zitiCliLinuxBinary.sha-1";
  @SerializedName(SERIALIZED_NAME_ZITI_CLI_LINUX_BINARY_SHA1)
  private String zitiCliLinuxBinarySha1;

  public static final String SERIALIZED_NAME_ZITI_TUNNEL_LINUX_BINARY = "zitiTunnelLinuxBinary";
  @SerializedName(SERIALIZED_NAME_ZITI_TUNNEL_LINUX_BINARY)
  private String zitiTunnelLinuxBinary;

  public static final String SERIALIZED_NAME_ZITI_TUNNEL_LINUX_BINARY_SHA1 = "zitiTunnelLinuxBinary.sha-1";
  @SerializedName(SERIALIZED_NAME_ZITI_TUNNEL_LINUX_BINARY_SHA1)
  private String zitiTunnelLinuxBinarySha1;

  public static final String SERIALIZED_NAME_ZITI_CONTROLLER_BINARY = "zitiControllerBinary";
  @SerializedName(SERIALIZED_NAME_ZITI_CONTROLLER_BINARY)
  private String zitiControllerBinary;

  public static final String SERIALIZED_NAME_ZITI_CLI_LINUX_BINARY_MD5 = "zitiCliLinuxBinary.md5";
  @SerializedName(SERIALIZED_NAME_ZITI_CLI_LINUX_BINARY_MD5)
  private String zitiCliLinuxBinaryMd5;

  public static final String SERIALIZED_NAME_ZITI_ROUTER_LINUX_BINARY_SHA1 = "zitiRouterLinuxBinary.sha-1";
  @SerializedName(SERIALIZED_NAME_ZITI_ROUTER_LINUX_BINARY_SHA1)
  private String zitiRouterLinuxBinarySha1;

  public static final String SERIALIZED_NAME_ZITI_ROUTER_LINUX_BINARY_SHA256 = "zitiRouterLinuxBinary.sha-256";
  @SerializedName(SERIALIZED_NAME_ZITI_ROUTER_LINUX_BINARY_SHA256)
  private String zitiRouterLinuxBinarySha256;

  public static final String SERIALIZED_NAME_ZITI_ROUTER_LINUX_BINARY_MD5 = "zitiRouterLinuxBinary.md5";
  @SerializedName(SERIALIZED_NAME_ZITI_ROUTER_LINUX_BINARY_MD5)
  private String zitiRouterLinuxBinaryMd5;

  public static final String SERIALIZED_NAME_ZITI_WINDOWS_DESKTOP_EDGE = "zitiWindowsDesktopEdge";
  @SerializedName(SERIALIZED_NAME_ZITI_WINDOWS_DESKTOP_EDGE)
  private String zitiWindowsDesktopEdge;

  public static final String SERIALIZED_NAME_ZITI_MAC_DESKTOP_EDGE = "zitiMacDesktopEdge";
  @SerializedName(SERIALIZED_NAME_ZITI_MAC_DESKTOP_EDGE)
  private String zitiMacDesktopEdge;

  public static final String SERIALIZED_NAME_ZITI_CONTROLLER_BINARY_SHA1 = "zitiControllerBinary.sha-1";
  @SerializedName(SERIALIZED_NAME_ZITI_CONTROLLER_BINARY_SHA1)
  private String zitiControllerBinarySha1;

  public static final String SERIALIZED_NAME_ZITI_CONTROLLER_BINARY_MD5 = "zitiControllerBinary.md5";
  @SerializedName(SERIALIZED_NAME_ZITI_CONTROLLER_BINARY_MD5)
  private String zitiControllerBinaryMd5;

  public static final String SERIALIZED_NAME_ZITI_CONTROLLER_BINARY_SHA256 = "zitiControllerBinary.sha-256";
  @SerializedName(SERIALIZED_NAME_ZITI_CONTROLLER_BINARY_SHA256)
  private String zitiControllerBinarySha256;

  public static final String SERIALIZED_NAME_ZITI_IOS_EDGE = "zitiIosEdge";
  @SerializedName(SERIALIZED_NAME_ZITI_IOS_EDGE)
  private String zitiIosEdge;

  public static final String SERIALIZED_NAME_ZITI_CLI_LINUX_BINARY = "zitiCliLinuxBinary";
  @SerializedName(SERIALIZED_NAME_ZITI_CLI_LINUX_BINARY)
  private String zitiCliLinuxBinary;

  public static final String SERIALIZED_NAME_ZITI_VERSION = "zitiVersion";
  @SerializedName(SERIALIZED_NAME_ZITI_VERSION)
  private String zitiVersion;

  public static final String SERIALIZED_NAME_ZITI_ROUTER_LINUX_BINARY = "zitiRouterLinuxBinary";
  @SerializedName(SERIALIZED_NAME_ZITI_ROUTER_LINUX_BINARY)
  private String zitiRouterLinuxBinary;

  public static final String SERIALIZED_NAME_ZITI_TUNNEL_LINUX_BINARY_SHA256 = "zitiTunnelLinuxBinary.sha-256";
  @SerializedName(SERIALIZED_NAME_ZITI_TUNNEL_LINUX_BINARY_SHA256)
  private String zitiTunnelLinuxBinarySha256;

  public static final String SERIALIZED_NAME_ZITI_ANDROID_EDGE = "zitiAndroidEdge";
  @SerializedName(SERIALIZED_NAME_ZITI_ANDROID_EDGE)
  private String zitiAndroidEdge;

  public static final String SERIALIZED_NAME_ZITI_TUNNEL_LINUX_BINARY_MD5 = "zitiTunnelLinuxBinary.md5";
  @SerializedName(SERIALIZED_NAME_ZITI_TUNNEL_LINUX_BINARY_MD5)
  private String zitiTunnelLinuxBinaryMd5;

  public static final String SERIALIZED_NAME_ZITI_CLI_LINUX_BINARY_SHA256 = "zitiCliLinuxBinary.sha-256";
  @SerializedName(SERIALIZED_NAME_ZITI_CLI_LINUX_BINARY_SHA256)
  private String zitiCliLinuxBinarySha256;

  public static final String SERIALIZED_NAME_ACTIVE = "active";
  @SerializedName(SERIALIZED_NAME_ACTIVE)
  private Boolean active;


  public InlineResponse20019710 zitiCliLinuxBinarySha1(String zitiCliLinuxBinarySha1) {
    
    this.zitiCliLinuxBinarySha1 = zitiCliLinuxBinarySha1;
    return this;
  }

   /**
   * Get zitiCliLinuxBinarySha1
   * @return zitiCliLinuxBinarySha1
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiCliLinuxBinarySha1() {
    return zitiCliLinuxBinarySha1;
  }


  public void setZitiCliLinuxBinarySha1(String zitiCliLinuxBinarySha1) {
    this.zitiCliLinuxBinarySha1 = zitiCliLinuxBinarySha1;
  }


  public InlineResponse20019710 zitiTunnelLinuxBinary(String zitiTunnelLinuxBinary) {
    
    this.zitiTunnelLinuxBinary = zitiTunnelLinuxBinary;
    return this;
  }

   /**
   * Get zitiTunnelLinuxBinary
   * @return zitiTunnelLinuxBinary
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiTunnelLinuxBinary() {
    return zitiTunnelLinuxBinary;
  }


  public void setZitiTunnelLinuxBinary(String zitiTunnelLinuxBinary) {
    this.zitiTunnelLinuxBinary = zitiTunnelLinuxBinary;
  }


  public InlineResponse20019710 zitiTunnelLinuxBinarySha1(String zitiTunnelLinuxBinarySha1) {
    
    this.zitiTunnelLinuxBinarySha1 = zitiTunnelLinuxBinarySha1;
    return this;
  }

   /**
   * Get zitiTunnelLinuxBinarySha1
   * @return zitiTunnelLinuxBinarySha1
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiTunnelLinuxBinarySha1() {
    return zitiTunnelLinuxBinarySha1;
  }


  public void setZitiTunnelLinuxBinarySha1(String zitiTunnelLinuxBinarySha1) {
    this.zitiTunnelLinuxBinarySha1 = zitiTunnelLinuxBinarySha1;
  }


  public InlineResponse20019710 zitiControllerBinary(String zitiControllerBinary) {
    
    this.zitiControllerBinary = zitiControllerBinary;
    return this;
  }

   /**
   * Get zitiControllerBinary
   * @return zitiControllerBinary
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiControllerBinary() {
    return zitiControllerBinary;
  }


  public void setZitiControllerBinary(String zitiControllerBinary) {
    this.zitiControllerBinary = zitiControllerBinary;
  }


  public InlineResponse20019710 zitiCliLinuxBinaryMd5(String zitiCliLinuxBinaryMd5) {
    
    this.zitiCliLinuxBinaryMd5 = zitiCliLinuxBinaryMd5;
    return this;
  }

   /**
   * Get zitiCliLinuxBinaryMd5
   * @return zitiCliLinuxBinaryMd5
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiCliLinuxBinaryMd5() {
    return zitiCliLinuxBinaryMd5;
  }


  public void setZitiCliLinuxBinaryMd5(String zitiCliLinuxBinaryMd5) {
    this.zitiCliLinuxBinaryMd5 = zitiCliLinuxBinaryMd5;
  }


  public InlineResponse20019710 zitiRouterLinuxBinarySha1(String zitiRouterLinuxBinarySha1) {
    
    this.zitiRouterLinuxBinarySha1 = zitiRouterLinuxBinarySha1;
    return this;
  }

   /**
   * Get zitiRouterLinuxBinarySha1
   * @return zitiRouterLinuxBinarySha1
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiRouterLinuxBinarySha1() {
    return zitiRouterLinuxBinarySha1;
  }


  public void setZitiRouterLinuxBinarySha1(String zitiRouterLinuxBinarySha1) {
    this.zitiRouterLinuxBinarySha1 = zitiRouterLinuxBinarySha1;
  }


  public InlineResponse20019710 zitiRouterLinuxBinarySha256(String zitiRouterLinuxBinarySha256) {
    
    this.zitiRouterLinuxBinarySha256 = zitiRouterLinuxBinarySha256;
    return this;
  }

   /**
   * Get zitiRouterLinuxBinarySha256
   * @return zitiRouterLinuxBinarySha256
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiRouterLinuxBinarySha256() {
    return zitiRouterLinuxBinarySha256;
  }


  public void setZitiRouterLinuxBinarySha256(String zitiRouterLinuxBinarySha256) {
    this.zitiRouterLinuxBinarySha256 = zitiRouterLinuxBinarySha256;
  }


  public InlineResponse20019710 zitiRouterLinuxBinaryMd5(String zitiRouterLinuxBinaryMd5) {
    
    this.zitiRouterLinuxBinaryMd5 = zitiRouterLinuxBinaryMd5;
    return this;
  }

   /**
   * Get zitiRouterLinuxBinaryMd5
   * @return zitiRouterLinuxBinaryMd5
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiRouterLinuxBinaryMd5() {
    return zitiRouterLinuxBinaryMd5;
  }


  public void setZitiRouterLinuxBinaryMd5(String zitiRouterLinuxBinaryMd5) {
    this.zitiRouterLinuxBinaryMd5 = zitiRouterLinuxBinaryMd5;
  }


  public InlineResponse20019710 zitiWindowsDesktopEdge(String zitiWindowsDesktopEdge) {
    
    this.zitiWindowsDesktopEdge = zitiWindowsDesktopEdge;
    return this;
  }

   /**
   * Get zitiWindowsDesktopEdge
   * @return zitiWindowsDesktopEdge
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiWindowsDesktopEdge() {
    return zitiWindowsDesktopEdge;
  }


  public void setZitiWindowsDesktopEdge(String zitiWindowsDesktopEdge) {
    this.zitiWindowsDesktopEdge = zitiWindowsDesktopEdge;
  }


  public InlineResponse20019710 zitiMacDesktopEdge(String zitiMacDesktopEdge) {
    
    this.zitiMacDesktopEdge = zitiMacDesktopEdge;
    return this;
  }

   /**
   * Get zitiMacDesktopEdge
   * @return zitiMacDesktopEdge
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiMacDesktopEdge() {
    return zitiMacDesktopEdge;
  }


  public void setZitiMacDesktopEdge(String zitiMacDesktopEdge) {
    this.zitiMacDesktopEdge = zitiMacDesktopEdge;
  }


  public InlineResponse20019710 zitiControllerBinarySha1(String zitiControllerBinarySha1) {
    
    this.zitiControllerBinarySha1 = zitiControllerBinarySha1;
    return this;
  }

   /**
   * Get zitiControllerBinarySha1
   * @return zitiControllerBinarySha1
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiControllerBinarySha1() {
    return zitiControllerBinarySha1;
  }


  public void setZitiControllerBinarySha1(String zitiControllerBinarySha1) {
    this.zitiControllerBinarySha1 = zitiControllerBinarySha1;
  }


  public InlineResponse20019710 zitiControllerBinaryMd5(String zitiControllerBinaryMd5) {
    
    this.zitiControllerBinaryMd5 = zitiControllerBinaryMd5;
    return this;
  }

   /**
   * Get zitiControllerBinaryMd5
   * @return zitiControllerBinaryMd5
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiControllerBinaryMd5() {
    return zitiControllerBinaryMd5;
  }


  public void setZitiControllerBinaryMd5(String zitiControllerBinaryMd5) {
    this.zitiControllerBinaryMd5 = zitiControllerBinaryMd5;
  }


  public InlineResponse20019710 zitiControllerBinarySha256(String zitiControllerBinarySha256) {
    
    this.zitiControllerBinarySha256 = zitiControllerBinarySha256;
    return this;
  }

   /**
   * Get zitiControllerBinarySha256
   * @return zitiControllerBinarySha256
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiControllerBinarySha256() {
    return zitiControllerBinarySha256;
  }


  public void setZitiControllerBinarySha256(String zitiControllerBinarySha256) {
    this.zitiControllerBinarySha256 = zitiControllerBinarySha256;
  }


  public InlineResponse20019710 zitiIosEdge(String zitiIosEdge) {
    
    this.zitiIosEdge = zitiIosEdge;
    return this;
  }

   /**
   * Get zitiIosEdge
   * @return zitiIosEdge
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiIosEdge() {
    return zitiIosEdge;
  }


  public void setZitiIosEdge(String zitiIosEdge) {
    this.zitiIosEdge = zitiIosEdge;
  }


  public InlineResponse20019710 zitiCliLinuxBinary(String zitiCliLinuxBinary) {
    
    this.zitiCliLinuxBinary = zitiCliLinuxBinary;
    return this;
  }

   /**
   * Get zitiCliLinuxBinary
   * @return zitiCliLinuxBinary
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiCliLinuxBinary() {
    return zitiCliLinuxBinary;
  }


  public void setZitiCliLinuxBinary(String zitiCliLinuxBinary) {
    this.zitiCliLinuxBinary = zitiCliLinuxBinary;
  }


  public InlineResponse20019710 zitiVersion(String zitiVersion) {
    
    this.zitiVersion = zitiVersion;
    return this;
  }

   /**
   * Get zitiVersion
   * @return zitiVersion
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiVersion() {
    return zitiVersion;
  }


  public void setZitiVersion(String zitiVersion) {
    this.zitiVersion = zitiVersion;
  }


  public InlineResponse20019710 zitiRouterLinuxBinary(String zitiRouterLinuxBinary) {
    
    this.zitiRouterLinuxBinary = zitiRouterLinuxBinary;
    return this;
  }

   /**
   * Get zitiRouterLinuxBinary
   * @return zitiRouterLinuxBinary
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiRouterLinuxBinary() {
    return zitiRouterLinuxBinary;
  }


  public void setZitiRouterLinuxBinary(String zitiRouterLinuxBinary) {
    this.zitiRouterLinuxBinary = zitiRouterLinuxBinary;
  }


  public InlineResponse20019710 zitiTunnelLinuxBinarySha256(String zitiTunnelLinuxBinarySha256) {
    
    this.zitiTunnelLinuxBinarySha256 = zitiTunnelLinuxBinarySha256;
    return this;
  }

   /**
   * Get zitiTunnelLinuxBinarySha256
   * @return zitiTunnelLinuxBinarySha256
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiTunnelLinuxBinarySha256() {
    return zitiTunnelLinuxBinarySha256;
  }


  public void setZitiTunnelLinuxBinarySha256(String zitiTunnelLinuxBinarySha256) {
    this.zitiTunnelLinuxBinarySha256 = zitiTunnelLinuxBinarySha256;
  }


  public InlineResponse20019710 zitiAndroidEdge(String zitiAndroidEdge) {
    
    this.zitiAndroidEdge = zitiAndroidEdge;
    return this;
  }

   /**
   * Get zitiAndroidEdge
   * @return zitiAndroidEdge
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiAndroidEdge() {
    return zitiAndroidEdge;
  }


  public void setZitiAndroidEdge(String zitiAndroidEdge) {
    this.zitiAndroidEdge = zitiAndroidEdge;
  }


  public InlineResponse20019710 zitiTunnelLinuxBinaryMd5(String zitiTunnelLinuxBinaryMd5) {
    
    this.zitiTunnelLinuxBinaryMd5 = zitiTunnelLinuxBinaryMd5;
    return this;
  }

   /**
   * Get zitiTunnelLinuxBinaryMd5
   * @return zitiTunnelLinuxBinaryMd5
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiTunnelLinuxBinaryMd5() {
    return zitiTunnelLinuxBinaryMd5;
  }


  public void setZitiTunnelLinuxBinaryMd5(String zitiTunnelLinuxBinaryMd5) {
    this.zitiTunnelLinuxBinaryMd5 = zitiTunnelLinuxBinaryMd5;
  }


  public InlineResponse20019710 zitiCliLinuxBinarySha256(String zitiCliLinuxBinarySha256) {
    
    this.zitiCliLinuxBinarySha256 = zitiCliLinuxBinarySha256;
    return this;
  }

   /**
   * Get zitiCliLinuxBinarySha256
   * @return zitiCliLinuxBinarySha256
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiCliLinuxBinarySha256() {
    return zitiCliLinuxBinarySha256;
  }


  public void setZitiCliLinuxBinarySha256(String zitiCliLinuxBinarySha256) {
    this.zitiCliLinuxBinarySha256 = zitiCliLinuxBinarySha256;
  }


  public InlineResponse20019710 active(Boolean active) {
    
    this.active = active;
    return this;
  }

   /**
   * Get active
   * @return active
  **/
  @ApiModelProperty(required = true, value = "")

  public Boolean getActive() {
    return active;
  }


  public void setActive(Boolean active) {
    this.active = active;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse20019710 inlineResponse20019710 = (InlineResponse20019710) o;
    return Objects.equals(this.zitiCliLinuxBinarySha1, inlineResponse20019710.zitiCliLinuxBinarySha1) &&
        Objects.equals(this.zitiTunnelLinuxBinary, inlineResponse20019710.zitiTunnelLinuxBinary) &&
        Objects.equals(this.zitiTunnelLinuxBinarySha1, inlineResponse20019710.zitiTunnelLinuxBinarySha1) &&
        Objects.equals(this.zitiControllerBinary, inlineResponse20019710.zitiControllerBinary) &&
        Objects.equals(this.zitiCliLinuxBinaryMd5, inlineResponse20019710.zitiCliLinuxBinaryMd5) &&
        Objects.equals(this.zitiRouterLinuxBinarySha1, inlineResponse20019710.zitiRouterLinuxBinarySha1) &&
        Objects.equals(this.zitiRouterLinuxBinarySha256, inlineResponse20019710.zitiRouterLinuxBinarySha256) &&
        Objects.equals(this.zitiRouterLinuxBinaryMd5, inlineResponse20019710.zitiRouterLinuxBinaryMd5) &&
        Objects.equals(this.zitiWindowsDesktopEdge, inlineResponse20019710.zitiWindowsDesktopEdge) &&
        Objects.equals(this.zitiMacDesktopEdge, inlineResponse20019710.zitiMacDesktopEdge) &&
        Objects.equals(this.zitiControllerBinarySha1, inlineResponse20019710.zitiControllerBinarySha1) &&
        Objects.equals(this.zitiControllerBinaryMd5, inlineResponse20019710.zitiControllerBinaryMd5) &&
        Objects.equals(this.zitiControllerBinarySha256, inlineResponse20019710.zitiControllerBinarySha256) &&
        Objects.equals(this.zitiIosEdge, inlineResponse20019710.zitiIosEdge) &&
        Objects.equals(this.zitiCliLinuxBinary, inlineResponse20019710.zitiCliLinuxBinary) &&
        Objects.equals(this.zitiVersion, inlineResponse20019710.zitiVersion) &&
        Objects.equals(this.zitiRouterLinuxBinary, inlineResponse20019710.zitiRouterLinuxBinary) &&
        Objects.equals(this.zitiTunnelLinuxBinarySha256, inlineResponse20019710.zitiTunnelLinuxBinarySha256) &&
        Objects.equals(this.zitiAndroidEdge, inlineResponse20019710.zitiAndroidEdge) &&
        Objects.equals(this.zitiTunnelLinuxBinaryMd5, inlineResponse20019710.zitiTunnelLinuxBinaryMd5) &&
        Objects.equals(this.zitiCliLinuxBinarySha256, inlineResponse20019710.zitiCliLinuxBinarySha256) &&
        Objects.equals(this.active, inlineResponse20019710.active);
  }

  @Override
  public int hashCode() {
    return Objects.hash(zitiCliLinuxBinarySha1, zitiTunnelLinuxBinary, zitiTunnelLinuxBinarySha1, zitiControllerBinary, zitiCliLinuxBinaryMd5, zitiRouterLinuxBinarySha1, zitiRouterLinuxBinarySha256, zitiRouterLinuxBinaryMd5, zitiWindowsDesktopEdge, zitiMacDesktopEdge, zitiControllerBinarySha1, zitiControllerBinaryMd5, zitiControllerBinarySha256, zitiIosEdge, zitiCliLinuxBinary, zitiVersion, zitiRouterLinuxBinary, zitiTunnelLinuxBinarySha256, zitiAndroidEdge, zitiTunnelLinuxBinaryMd5, zitiCliLinuxBinarySha256, active);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20019710 {\n");
    sb.append("    zitiCliLinuxBinarySha1: ").append(toIndentedString(zitiCliLinuxBinarySha1)).append("\n");
    sb.append("    zitiTunnelLinuxBinary: ").append(toIndentedString(zitiTunnelLinuxBinary)).append("\n");
    sb.append("    zitiTunnelLinuxBinarySha1: ").append(toIndentedString(zitiTunnelLinuxBinarySha1)).append("\n");
    sb.append("    zitiControllerBinary: ").append(toIndentedString(zitiControllerBinary)).append("\n");
    sb.append("    zitiCliLinuxBinaryMd5: ").append(toIndentedString(zitiCliLinuxBinaryMd5)).append("\n");
    sb.append("    zitiRouterLinuxBinarySha1: ").append(toIndentedString(zitiRouterLinuxBinarySha1)).append("\n");
    sb.append("    zitiRouterLinuxBinarySha256: ").append(toIndentedString(zitiRouterLinuxBinarySha256)).append("\n");
    sb.append("    zitiRouterLinuxBinaryMd5: ").append(toIndentedString(zitiRouterLinuxBinaryMd5)).append("\n");
    sb.append("    zitiWindowsDesktopEdge: ").append(toIndentedString(zitiWindowsDesktopEdge)).append("\n");
    sb.append("    zitiMacDesktopEdge: ").append(toIndentedString(zitiMacDesktopEdge)).append("\n");
    sb.append("    zitiControllerBinarySha1: ").append(toIndentedString(zitiControllerBinarySha1)).append("\n");
    sb.append("    zitiControllerBinaryMd5: ").append(toIndentedString(zitiControllerBinaryMd5)).append("\n");
    sb.append("    zitiControllerBinarySha256: ").append(toIndentedString(zitiControllerBinarySha256)).append("\n");
    sb.append("    zitiIosEdge: ").append(toIndentedString(zitiIosEdge)).append("\n");
    sb.append("    zitiCliLinuxBinary: ").append(toIndentedString(zitiCliLinuxBinary)).append("\n");
    sb.append("    zitiVersion: ").append(toIndentedString(zitiVersion)).append("\n");
    sb.append("    zitiRouterLinuxBinary: ").append(toIndentedString(zitiRouterLinuxBinary)).append("\n");
    sb.append("    zitiTunnelLinuxBinarySha256: ").append(toIndentedString(zitiTunnelLinuxBinarySha256)).append("\n");
    sb.append("    zitiAndroidEdge: ").append(toIndentedString(zitiAndroidEdge)).append("\n");
    sb.append("    zitiTunnelLinuxBinaryMd5: ").append(toIndentedString(zitiTunnelLinuxBinaryMd5)).append("\n");
    sb.append("    zitiCliLinuxBinarySha256: ").append(toIndentedString(zitiCliLinuxBinarySha256)).append("\n");
    sb.append("    active: ").append(toIndentedString(active)).append("\n");
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

