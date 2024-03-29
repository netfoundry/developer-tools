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
import org.openapitools.client.model.InlineResponse200Links;
import org.openapitools.client.model.oas_any_type_not_mapped;

/**
 * InlineResponse2004EmbeddedEdgeRouterPolicyList
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-05-03T11:59:07.273777-04:00[America/New_York]")
public class InlineResponse2004EmbeddedEdgeRouterPolicyList {
  public static final String SERIALIZED_NAME_DELETED_AT = "deletedAt";
  @SerializedName(SERIALIZED_NAME_DELETED_AT)
  private oas_any_type_not_mapped deletedAt = null;

  public static final String SERIALIZED_NAME_NETWORK_ID = "networkId";
  @SerializedName(SERIALIZED_NAME_NETWORK_ID)
  private String networkId;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_EDGE_ROUTER_ATTRIBUTES = "edgeRouterAttributes";
  @SerializedName(SERIALIZED_NAME_EDGE_ROUTER_ATTRIBUTES)
  private List<String> edgeRouterAttributes = new ArrayList<String>();

  public static final String SERIALIZED_NAME_UPDATED_AT = "updatedAt";
  @SerializedName(SERIALIZED_NAME_UPDATED_AT)
  private String updatedAt;

  public static final String SERIALIZED_NAME_ZITI_ID = "zitiId";
  @SerializedName(SERIALIZED_NAME_ZITI_ID)
  private String zitiId;

  public static final String SERIALIZED_NAME_OWNER_IDENTITY_ID = "ownerIdentityId";
  @SerializedName(SERIALIZED_NAME_OWNER_IDENTITY_ID)
  private String ownerIdentityId;

  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_CREATED_AT = "createdAt";
  @SerializedName(SERIALIZED_NAME_CREATED_AT)
  private String createdAt;

  public static final String SERIALIZED_NAME_CREATED_BY = "createdBy";
  @SerializedName(SERIALIZED_NAME_CREATED_BY)
  private String createdBy;

  public static final String SERIALIZED_NAME_DELETED_BY = "deletedBy";
  @SerializedName(SERIALIZED_NAME_DELETED_BY)
  private oas_any_type_not_mapped deletedBy = null;

  public static final String SERIALIZED_NAME_ENDPOINT_ATTRIBUTES = "endpointAttributes";
  @SerializedName(SERIALIZED_NAME_ENDPOINT_ATTRIBUTES)
  private List<String> endpointAttributes = new ArrayList<String>();

  public static final String SERIALIZED_NAME_LINKS = "_links";
  @SerializedName(SERIALIZED_NAME_LINKS)
  private InlineResponse200Links links;


  public InlineResponse2004EmbeddedEdgeRouterPolicyList deletedAt(oas_any_type_not_mapped deletedAt) {
    
    this.deletedAt = deletedAt;
    return this;
  }

   /**
   * Get deletedAt
   * @return deletedAt
  **/
  @ApiModelProperty(required = true, value = "")

  public oas_any_type_not_mapped getDeletedAt() {
    return deletedAt;
  }


  public void setDeletedAt(oas_any_type_not_mapped deletedAt) {
    this.deletedAt = deletedAt;
  }


  public InlineResponse2004EmbeddedEdgeRouterPolicyList networkId(String networkId) {
    
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


  public InlineResponse2004EmbeddedEdgeRouterPolicyList name(String name) {
    
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


  public InlineResponse2004EmbeddedEdgeRouterPolicyList edgeRouterAttributes(List<String> edgeRouterAttributes) {
    
    this.edgeRouterAttributes = edgeRouterAttributes;
    return this;
  }

  public InlineResponse2004EmbeddedEdgeRouterPolicyList addEdgeRouterAttributesItem(String edgeRouterAttributesItem) {
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


  public InlineResponse2004EmbeddedEdgeRouterPolicyList updatedAt(String updatedAt) {
    
    this.updatedAt = updatedAt;
    return this;
  }

   /**
   * Get updatedAt
   * @return updatedAt
  **/
  @ApiModelProperty(required = true, value = "")

  public String getUpdatedAt() {
    return updatedAt;
  }


  public void setUpdatedAt(String updatedAt) {
    this.updatedAt = updatedAt;
  }


  public InlineResponse2004EmbeddedEdgeRouterPolicyList zitiId(String zitiId) {
    
    this.zitiId = zitiId;
    return this;
  }

   /**
   * Get zitiId
   * @return zitiId
  **/
  @ApiModelProperty(required = true, value = "")

  public String getZitiId() {
    return zitiId;
  }


  public void setZitiId(String zitiId) {
    this.zitiId = zitiId;
  }


  public InlineResponse2004EmbeddedEdgeRouterPolicyList ownerIdentityId(String ownerIdentityId) {
    
    this.ownerIdentityId = ownerIdentityId;
    return this;
  }

   /**
   * Get ownerIdentityId
   * @return ownerIdentityId
  **/
  @ApiModelProperty(required = true, value = "")

  public String getOwnerIdentityId() {
    return ownerIdentityId;
  }


  public void setOwnerIdentityId(String ownerIdentityId) {
    this.ownerIdentityId = ownerIdentityId;
  }


  public InlineResponse2004EmbeddedEdgeRouterPolicyList id(String id) {
    
    this.id = id;
    return this;
  }

   /**
   * Get id
   * @return id
  **/
  @ApiModelProperty(required = true, value = "")

  public String getId() {
    return id;
  }


  public void setId(String id) {
    this.id = id;
  }


  public InlineResponse2004EmbeddedEdgeRouterPolicyList createdAt(String createdAt) {
    
    this.createdAt = createdAt;
    return this;
  }

   /**
   * Get createdAt
   * @return createdAt
  **/
  @ApiModelProperty(required = true, value = "")

  public String getCreatedAt() {
    return createdAt;
  }


  public void setCreatedAt(String createdAt) {
    this.createdAt = createdAt;
  }


  public InlineResponse2004EmbeddedEdgeRouterPolicyList createdBy(String createdBy) {
    
    this.createdBy = createdBy;
    return this;
  }

   /**
   * Get createdBy
   * @return createdBy
  **/
  @ApiModelProperty(required = true, value = "")

  public String getCreatedBy() {
    return createdBy;
  }


  public void setCreatedBy(String createdBy) {
    this.createdBy = createdBy;
  }


  public InlineResponse2004EmbeddedEdgeRouterPolicyList deletedBy(oas_any_type_not_mapped deletedBy) {
    
    this.deletedBy = deletedBy;
    return this;
  }

   /**
   * Get deletedBy
   * @return deletedBy
  **/
  @ApiModelProperty(required = true, value = "")

  public oas_any_type_not_mapped getDeletedBy() {
    return deletedBy;
  }


  public void setDeletedBy(oas_any_type_not_mapped deletedBy) {
    this.deletedBy = deletedBy;
  }


  public InlineResponse2004EmbeddedEdgeRouterPolicyList endpointAttributes(List<String> endpointAttributes) {
    
    this.endpointAttributes = endpointAttributes;
    return this;
  }

  public InlineResponse2004EmbeddedEdgeRouterPolicyList addEndpointAttributesItem(String endpointAttributesItem) {
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


  public InlineResponse2004EmbeddedEdgeRouterPolicyList links(InlineResponse200Links links) {
    
    this.links = links;
    return this;
  }

   /**
   * Get links
   * @return links
  **/
  @ApiModelProperty(required = true, value = "")

  public InlineResponse200Links getLinks() {
    return links;
  }


  public void setLinks(InlineResponse200Links links) {
    this.links = links;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    InlineResponse2004EmbeddedEdgeRouterPolicyList inlineResponse2004EmbeddedEdgeRouterPolicyList = (InlineResponse2004EmbeddedEdgeRouterPolicyList) o;
    return Objects.equals(this.deletedAt, inlineResponse2004EmbeddedEdgeRouterPolicyList.deletedAt) &&
        Objects.equals(this.networkId, inlineResponse2004EmbeddedEdgeRouterPolicyList.networkId) &&
        Objects.equals(this.name, inlineResponse2004EmbeddedEdgeRouterPolicyList.name) &&
        Objects.equals(this.edgeRouterAttributes, inlineResponse2004EmbeddedEdgeRouterPolicyList.edgeRouterAttributes) &&
        Objects.equals(this.updatedAt, inlineResponse2004EmbeddedEdgeRouterPolicyList.updatedAt) &&
        Objects.equals(this.zitiId, inlineResponse2004EmbeddedEdgeRouterPolicyList.zitiId) &&
        Objects.equals(this.ownerIdentityId, inlineResponse2004EmbeddedEdgeRouterPolicyList.ownerIdentityId) &&
        Objects.equals(this.id, inlineResponse2004EmbeddedEdgeRouterPolicyList.id) &&
        Objects.equals(this.createdAt, inlineResponse2004EmbeddedEdgeRouterPolicyList.createdAt) &&
        Objects.equals(this.createdBy, inlineResponse2004EmbeddedEdgeRouterPolicyList.createdBy) &&
        Objects.equals(this.deletedBy, inlineResponse2004EmbeddedEdgeRouterPolicyList.deletedBy) &&
        Objects.equals(this.endpointAttributes, inlineResponse2004EmbeddedEdgeRouterPolicyList.endpointAttributes) &&
        Objects.equals(this.links, inlineResponse2004EmbeddedEdgeRouterPolicyList.links);
  }

  @Override
  public int hashCode() {
    return Objects.hash(deletedAt, networkId, name, edgeRouterAttributes, updatedAt, zitiId, ownerIdentityId, id, createdAt, createdBy, deletedBy, endpointAttributes, links);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse2004EmbeddedEdgeRouterPolicyList {\n");
    sb.append("    deletedAt: ").append(toIndentedString(deletedAt)).append("\n");
    sb.append("    networkId: ").append(toIndentedString(networkId)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    edgeRouterAttributes: ").append(toIndentedString(edgeRouterAttributes)).append("\n");
    sb.append("    updatedAt: ").append(toIndentedString(updatedAt)).append("\n");
    sb.append("    zitiId: ").append(toIndentedString(zitiId)).append("\n");
    sb.append("    ownerIdentityId: ").append(toIndentedString(ownerIdentityId)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    createdBy: ").append(toIndentedString(createdBy)).append("\n");
    sb.append("    deletedBy: ").append(toIndentedString(deletedBy)).append("\n");
    sb.append("    endpointAttributes: ").append(toIndentedString(endpointAttributes)).append("\n");
    sb.append("    links: ").append(toIndentedString(links)).append("\n");
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

