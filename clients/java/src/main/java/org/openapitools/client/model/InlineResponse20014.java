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
import java.util.ArrayList;
import java.util.List;
import org.openapitools.client.model.InlineResponse20014IdentityProviders;
import org.openapitools.client.model.InlineResponse20014UpdatedAt;
import org.openapitools.client.model.oas_any_type_not_mapped;

/**
 * InlineResponse20014
 */
@javax.annotation.Generated(value = "org.openapitools.codegen.languages.JavaClientCodegen", date = "2021-04-12T16:43:17.497575-04:00[America/New_York]")
public class InlineResponse20014 {
  public static final String SERIALIZED_NAME_DELETED_AT = "deletedAt";
  @SerializedName(SERIALIZED_NAME_DELETED_AT)
  private oas_any_type_not_mapped deletedAt = null;

  public static final String SERIALIZED_NAME_NAME = "name";
  @SerializedName(SERIALIZED_NAME_NAME)
  private String name;

  public static final String SERIALIZED_NAME_UPDATED_AT = "updatedAt";
  @SerializedName(SERIALIZED_NAME_UPDATED_AT)
  private InlineResponse20014UpdatedAt updatedAt;

  public static final String SERIALIZED_NAME_LABEL = "label";
  @SerializedName(SERIALIZED_NAME_LABEL)
  private String label;

  public static final String SERIALIZED_NAME_ID = "id";
  @SerializedName(SERIALIZED_NAME_ID)
  private String id;

  public static final String SERIALIZED_NAME_MFA_PROVIDER = "mfaProvider";
  @SerializedName(SERIALIZED_NAME_MFA_PROVIDER)
  private String mfaProvider;

  public static final String SERIALIZED_NAME_CREATED_AT = "createdAt";
  @SerializedName(SERIALIZED_NAME_CREATED_AT)
  private InlineResponse20014UpdatedAt createdAt;

  public static final String SERIALIZED_NAME_IDENTITY_PROVIDERS = "identityProviders";
  @SerializedName(SERIALIZED_NAME_IDENTITY_PROVIDERS)
  private List<InlineResponse20014IdentityProviders> identityProviders = new ArrayList<InlineResponse20014IdentityProviders>();

  public static final String SERIALIZED_NAME_DELETED = "deleted";
  @SerializedName(SERIALIZED_NAME_DELETED)
  private Boolean deleted;

  public static final String SERIALIZED_NAME_ACTIVE = "active";
  @SerializedName(SERIALIZED_NAME_ACTIVE)
  private Boolean active;


  public InlineResponse20014 deletedAt(oas_any_type_not_mapped deletedAt) {
    
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


  public InlineResponse20014 name(String name) {
    
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


  public InlineResponse20014 updatedAt(InlineResponse20014UpdatedAt updatedAt) {
    
    this.updatedAt = updatedAt;
    return this;
  }

   /**
   * Get updatedAt
   * @return updatedAt
  **/
  @ApiModelProperty(required = true, value = "")

  public InlineResponse20014UpdatedAt getUpdatedAt() {
    return updatedAt;
  }


  public void setUpdatedAt(InlineResponse20014UpdatedAt updatedAt) {
    this.updatedAt = updatedAt;
  }


  public InlineResponse20014 label(String label) {
    
    this.label = label;
    return this;
  }

   /**
   * Get label
   * @return label
  **/
  @ApiModelProperty(required = true, value = "")

  public String getLabel() {
    return label;
  }


  public void setLabel(String label) {
    this.label = label;
  }


  public InlineResponse20014 id(String id) {
    
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


  public InlineResponse20014 mfaProvider(String mfaProvider) {
    
    this.mfaProvider = mfaProvider;
    return this;
  }

   /**
   * Get mfaProvider
   * @return mfaProvider
  **/
  @ApiModelProperty(required = true, value = "")

  public String getMfaProvider() {
    return mfaProvider;
  }


  public void setMfaProvider(String mfaProvider) {
    this.mfaProvider = mfaProvider;
  }


  public InlineResponse20014 createdAt(InlineResponse20014UpdatedAt createdAt) {
    
    this.createdAt = createdAt;
    return this;
  }

   /**
   * Get createdAt
   * @return createdAt
  **/
  @ApiModelProperty(required = true, value = "")

  public InlineResponse20014UpdatedAt getCreatedAt() {
    return createdAt;
  }


  public void setCreatedAt(InlineResponse20014UpdatedAt createdAt) {
    this.createdAt = createdAt;
  }


  public InlineResponse20014 identityProviders(List<InlineResponse20014IdentityProviders> identityProviders) {
    
    this.identityProviders = identityProviders;
    return this;
  }

  public InlineResponse20014 addIdentityProvidersItem(InlineResponse20014IdentityProviders identityProvidersItem) {
    this.identityProviders.add(identityProvidersItem);
    return this;
  }

   /**
   * Get identityProviders
   * @return identityProviders
  **/
  @ApiModelProperty(required = true, value = "")

  public List<InlineResponse20014IdentityProviders> getIdentityProviders() {
    return identityProviders;
  }


  public void setIdentityProviders(List<InlineResponse20014IdentityProviders> identityProviders) {
    this.identityProviders = identityProviders;
  }


  public InlineResponse20014 deleted(Boolean deleted) {
    
    this.deleted = deleted;
    return this;
  }

   /**
   * Get deleted
   * @return deleted
  **/
  @ApiModelProperty(required = true, value = "")

  public Boolean getDeleted() {
    return deleted;
  }


  public void setDeleted(Boolean deleted) {
    this.deleted = deleted;
  }


  public InlineResponse20014 active(Boolean active) {
    
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
    InlineResponse20014 inlineResponse20014 = (InlineResponse20014) o;
    return Objects.equals(this.deletedAt, inlineResponse20014.deletedAt) &&
        Objects.equals(this.name, inlineResponse20014.name) &&
        Objects.equals(this.updatedAt, inlineResponse20014.updatedAt) &&
        Objects.equals(this.label, inlineResponse20014.label) &&
        Objects.equals(this.id, inlineResponse20014.id) &&
        Objects.equals(this.mfaProvider, inlineResponse20014.mfaProvider) &&
        Objects.equals(this.createdAt, inlineResponse20014.createdAt) &&
        Objects.equals(this.identityProviders, inlineResponse20014.identityProviders) &&
        Objects.equals(this.deleted, inlineResponse20014.deleted) &&
        Objects.equals(this.active, inlineResponse20014.active);
  }

  @Override
  public int hashCode() {
    return Objects.hash(deletedAt, name, updatedAt, label, id, mfaProvider, createdAt, identityProviders, deleted, active);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class InlineResponse20014 {\n");
    sb.append("    deletedAt: ").append(toIndentedString(deletedAt)).append("\n");
    sb.append("    name: ").append(toIndentedString(name)).append("\n");
    sb.append("    updatedAt: ").append(toIndentedString(updatedAt)).append("\n");
    sb.append("    label: ").append(toIndentedString(label)).append("\n");
    sb.append("    id: ").append(toIndentedString(id)).append("\n");
    sb.append("    mfaProvider: ").append(toIndentedString(mfaProvider)).append("\n");
    sb.append("    createdAt: ").append(toIndentedString(createdAt)).append("\n");
    sb.append("    identityProviders: ").append(toIndentedString(identityProviders)).append("\n");
    sb.append("    deleted: ").append(toIndentedString(deleted)).append("\n");
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

