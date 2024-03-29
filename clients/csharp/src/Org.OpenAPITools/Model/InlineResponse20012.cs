/* 
 * untitled API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5229
 * 
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// InlineResponse20012
    /// </summary>
    [DataContract]
    public partial class InlineResponse20012 :  IEquatable<InlineResponse20012>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse20012" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected InlineResponse20012() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse20012" /> class.
        /// </summary>
        /// <param name="deletedAt">deletedAt (required).</param>
        /// <param name="networkId">networkId (required).</param>
        /// <param name="name">name (required).</param>
        /// <param name="updatedAt">updatedAt (required).</param>
        /// <param name="provider">provider (required).</param>
        /// <param name="online">online (required).</param>
        /// <param name="zitiId">zitiId (required).</param>
        /// <param name="userData">userData (required).</param>
        /// <param name="ownerIdentityId">ownerIdentityId (required).</param>
        /// <param name="attributes">attributes (required).</param>
        /// <param name="providerId">providerId (required).</param>
        /// <param name="jwt">jwt (required).</param>
        /// <param name="id">id (required).</param>
        /// <param name="ipAddress">ipAddress (required).</param>
        /// <param name="status">status (required).</param>
        /// <param name="hostId">hostId (required).</param>
        /// <param name="createdAt">createdAt (required).</param>
        /// <param name="createdBy">createdBy (required).</param>
        /// <param name="deletedBy">deletedBy (required).</param>
        /// <param name="locationMetadataId">locationMetadataId (required).</param>
        /// <param name="linkListener">linkListener (required).</param>
        /// <param name="dataCenterId">dataCenterId (required).</param>
        /// <param name="verified">verified (required).</param>
        /// <param name="links">links (required).</param>
        public InlineResponse20012(AnyType deletedAt = default(AnyType), string networkId = default(string), string name = default(string), string updatedAt = default(string), AnyType provider = default(AnyType), bool online = default(bool), string zitiId = default(string), AnyType userData = default(AnyType), string ownerIdentityId = default(string), List<string> attributes = default(List<string>), AnyType providerId = default(AnyType), AnyType jwt = default(AnyType), string id = default(string), AnyType ipAddress = default(AnyType), string status = default(string), AnyType hostId = default(AnyType), string createdAt = default(string), string createdBy = default(string), AnyType deletedBy = default(AnyType), AnyType locationMetadataId = default(AnyType), bool linkListener = default(bool), AnyType dataCenterId = default(AnyType), bool verified = default(bool), InlineResponse200Links links = default(InlineResponse200Links))
        {
            // to ensure "deletedAt" is required (not null)
            if (deletedAt == null)
            {
                throw new InvalidDataException("deletedAt is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.DeletedAt = deletedAt;
            }
            
            // to ensure "networkId" is required (not null)
            if (networkId == null)
            {
                throw new InvalidDataException("networkId is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.NetworkId = networkId;
            }
            
            // to ensure "name" is required (not null)
            if (name == null)
            {
                throw new InvalidDataException("name is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.Name = name;
            }
            
            // to ensure "updatedAt" is required (not null)
            if (updatedAt == null)
            {
                throw new InvalidDataException("updatedAt is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.UpdatedAt = updatedAt;
            }
            
            // to ensure "provider" is required (not null)
            if (provider == null)
            {
                throw new InvalidDataException("provider is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.Provider = provider;
            }
            
            // to ensure "online" is required (not null)
            if (online == null)
            {
                throw new InvalidDataException("online is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.Online = online;
            }
            
            // to ensure "zitiId" is required (not null)
            if (zitiId == null)
            {
                throw new InvalidDataException("zitiId is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.ZitiId = zitiId;
            }
            
            // to ensure "userData" is required (not null)
            if (userData == null)
            {
                throw new InvalidDataException("userData is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.UserData = userData;
            }
            
            // to ensure "ownerIdentityId" is required (not null)
            if (ownerIdentityId == null)
            {
                throw new InvalidDataException("ownerIdentityId is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.OwnerIdentityId = ownerIdentityId;
            }
            
            // to ensure "attributes" is required (not null)
            if (attributes == null)
            {
                throw new InvalidDataException("attributes is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.Attributes = attributes;
            }
            
            // to ensure "providerId" is required (not null)
            if (providerId == null)
            {
                throw new InvalidDataException("providerId is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.ProviderId = providerId;
            }
            
            // to ensure "jwt" is required (not null)
            if (jwt == null)
            {
                throw new InvalidDataException("jwt is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.Jwt = jwt;
            }
            
            // to ensure "id" is required (not null)
            if (id == null)
            {
                throw new InvalidDataException("id is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.Id = id;
            }
            
            // to ensure "ipAddress" is required (not null)
            if (ipAddress == null)
            {
                throw new InvalidDataException("ipAddress is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.IpAddress = ipAddress;
            }
            
            // to ensure "status" is required (not null)
            if (status == null)
            {
                throw new InvalidDataException("status is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.Status = status;
            }
            
            // to ensure "hostId" is required (not null)
            if (hostId == null)
            {
                throw new InvalidDataException("hostId is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.HostId = hostId;
            }
            
            // to ensure "createdAt" is required (not null)
            if (createdAt == null)
            {
                throw new InvalidDataException("createdAt is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.CreatedAt = createdAt;
            }
            
            // to ensure "createdBy" is required (not null)
            if (createdBy == null)
            {
                throw new InvalidDataException("createdBy is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.CreatedBy = createdBy;
            }
            
            // to ensure "deletedBy" is required (not null)
            if (deletedBy == null)
            {
                throw new InvalidDataException("deletedBy is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.DeletedBy = deletedBy;
            }
            
            // to ensure "locationMetadataId" is required (not null)
            if (locationMetadataId == null)
            {
                throw new InvalidDataException("locationMetadataId is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.LocationMetadataId = locationMetadataId;
            }
            
            // to ensure "linkListener" is required (not null)
            if (linkListener == null)
            {
                throw new InvalidDataException("linkListener is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.LinkListener = linkListener;
            }
            
            // to ensure "dataCenterId" is required (not null)
            if (dataCenterId == null)
            {
                throw new InvalidDataException("dataCenterId is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.DataCenterId = dataCenterId;
            }
            
            // to ensure "verified" is required (not null)
            if (verified == null)
            {
                throw new InvalidDataException("verified is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.Verified = verified;
            }
            
            // to ensure "links" is required (not null)
            if (links == null)
            {
                throw new InvalidDataException("links is a required property for InlineResponse20012 and cannot be null");
            }
            else
            {
                this.Links = links;
            }
            
        }
        
        /// <summary>
        /// Gets or Sets DeletedAt
        /// </summary>
        [DataMember(Name="deletedAt", EmitDefaultValue=true)]
        public AnyType DeletedAt { get; set; }

        /// <summary>
        /// Gets or Sets NetworkId
        /// </summary>
        [DataMember(Name="networkId", EmitDefaultValue=true)]
        public string NetworkId { get; set; }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=true)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets UpdatedAt
        /// </summary>
        [DataMember(Name="updatedAt", EmitDefaultValue=true)]
        public string UpdatedAt { get; set; }

        /// <summary>
        /// Gets or Sets Provider
        /// </summary>
        [DataMember(Name="provider", EmitDefaultValue=true)]
        public AnyType Provider { get; set; }

        /// <summary>
        /// Gets or Sets Online
        /// </summary>
        [DataMember(Name="online", EmitDefaultValue=true)]
        public bool Online { get; set; }

        /// <summary>
        /// Gets or Sets ZitiId
        /// </summary>
        [DataMember(Name="zitiId", EmitDefaultValue=true)]
        public string ZitiId { get; set; }

        /// <summary>
        /// Gets or Sets UserData
        /// </summary>
        [DataMember(Name="userData", EmitDefaultValue=true)]
        public AnyType UserData { get; set; }

        /// <summary>
        /// Gets or Sets OwnerIdentityId
        /// </summary>
        [DataMember(Name="ownerIdentityId", EmitDefaultValue=true)]
        public string OwnerIdentityId { get; set; }

        /// <summary>
        /// Gets or Sets Attributes
        /// </summary>
        [DataMember(Name="attributes", EmitDefaultValue=true)]
        public List<string> Attributes { get; set; }

        /// <summary>
        /// Gets or Sets ProviderId
        /// </summary>
        [DataMember(Name="providerId", EmitDefaultValue=true)]
        public AnyType ProviderId { get; set; }

        /// <summary>
        /// Gets or Sets Jwt
        /// </summary>
        [DataMember(Name="jwt", EmitDefaultValue=true)]
        public AnyType Jwt { get; set; }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=true)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets IpAddress
        /// </summary>
        [DataMember(Name="ipAddress", EmitDefaultValue=true)]
        public AnyType IpAddress { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name="status", EmitDefaultValue=true)]
        public string Status { get; set; }

        /// <summary>
        /// Gets or Sets HostId
        /// </summary>
        [DataMember(Name="hostId", EmitDefaultValue=true)]
        public AnyType HostId { get; set; }

        /// <summary>
        /// Gets or Sets CreatedAt
        /// </summary>
        [DataMember(Name="createdAt", EmitDefaultValue=true)]
        public string CreatedAt { get; set; }

        /// <summary>
        /// Gets or Sets CreatedBy
        /// </summary>
        [DataMember(Name="createdBy", EmitDefaultValue=true)]
        public string CreatedBy { get; set; }

        /// <summary>
        /// Gets or Sets DeletedBy
        /// </summary>
        [DataMember(Name="deletedBy", EmitDefaultValue=true)]
        public AnyType DeletedBy { get; set; }

        /// <summary>
        /// Gets or Sets LocationMetadataId
        /// </summary>
        [DataMember(Name="locationMetadataId", EmitDefaultValue=true)]
        public AnyType LocationMetadataId { get; set; }

        /// <summary>
        /// Gets or Sets LinkListener
        /// </summary>
        [DataMember(Name="linkListener", EmitDefaultValue=true)]
        public bool LinkListener { get; set; }

        /// <summary>
        /// Gets or Sets DataCenterId
        /// </summary>
        [DataMember(Name="dataCenterId", EmitDefaultValue=true)]
        public AnyType DataCenterId { get; set; }

        /// <summary>
        /// Gets or Sets Verified
        /// </summary>
        [DataMember(Name="verified", EmitDefaultValue=true)]
        public bool Verified { get; set; }

        /// <summary>
        /// Gets or Sets Links
        /// </summary>
        [DataMember(Name="_links", EmitDefaultValue=true)]
        public InlineResponse200Links Links { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class InlineResponse20012 {\n");
            sb.Append("  DeletedAt: ").Append(DeletedAt).Append("\n");
            sb.Append("  NetworkId: ").Append(NetworkId).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  UpdatedAt: ").Append(UpdatedAt).Append("\n");
            sb.Append("  Provider: ").Append(Provider).Append("\n");
            sb.Append("  Online: ").Append(Online).Append("\n");
            sb.Append("  ZitiId: ").Append(ZitiId).Append("\n");
            sb.Append("  UserData: ").Append(UserData).Append("\n");
            sb.Append("  OwnerIdentityId: ").Append(OwnerIdentityId).Append("\n");
            sb.Append("  Attributes: ").Append(Attributes).Append("\n");
            sb.Append("  ProviderId: ").Append(ProviderId).Append("\n");
            sb.Append("  Jwt: ").Append(Jwt).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  IpAddress: ").Append(IpAddress).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  HostId: ").Append(HostId).Append("\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  CreatedBy: ").Append(CreatedBy).Append("\n");
            sb.Append("  DeletedBy: ").Append(DeletedBy).Append("\n");
            sb.Append("  LocationMetadataId: ").Append(LocationMetadataId).Append("\n");
            sb.Append("  LinkListener: ").Append(LinkListener).Append("\n");
            sb.Append("  DataCenterId: ").Append(DataCenterId).Append("\n");
            sb.Append("  Verified: ").Append(Verified).Append("\n");
            sb.Append("  Links: ").Append(Links).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as InlineResponse20012);
        }

        /// <summary>
        /// Returns true if InlineResponse20012 instances are equal
        /// </summary>
        /// <param name="input">Instance of InlineResponse20012 to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(InlineResponse20012 input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.DeletedAt == input.DeletedAt ||
                    (this.DeletedAt != null &&
                    this.DeletedAt.Equals(input.DeletedAt))
                ) && 
                (
                    this.NetworkId == input.NetworkId ||
                    (this.NetworkId != null &&
                    this.NetworkId.Equals(input.NetworkId))
                ) && 
                (
                    this.Name == input.Name ||
                    (this.Name != null &&
                    this.Name.Equals(input.Name))
                ) && 
                (
                    this.UpdatedAt == input.UpdatedAt ||
                    (this.UpdatedAt != null &&
                    this.UpdatedAt.Equals(input.UpdatedAt))
                ) && 
                (
                    this.Provider == input.Provider ||
                    (this.Provider != null &&
                    this.Provider.Equals(input.Provider))
                ) && 
                (
                    this.Online == input.Online ||
                    (this.Online != null &&
                    this.Online.Equals(input.Online))
                ) && 
                (
                    this.ZitiId == input.ZitiId ||
                    (this.ZitiId != null &&
                    this.ZitiId.Equals(input.ZitiId))
                ) && 
                (
                    this.UserData == input.UserData ||
                    (this.UserData != null &&
                    this.UserData.Equals(input.UserData))
                ) && 
                (
                    this.OwnerIdentityId == input.OwnerIdentityId ||
                    (this.OwnerIdentityId != null &&
                    this.OwnerIdentityId.Equals(input.OwnerIdentityId))
                ) && 
                (
                    this.Attributes == input.Attributes ||
                    this.Attributes != null &&
                    input.Attributes != null &&
                    this.Attributes.SequenceEqual(input.Attributes)
                ) && 
                (
                    this.ProviderId == input.ProviderId ||
                    (this.ProviderId != null &&
                    this.ProviderId.Equals(input.ProviderId))
                ) && 
                (
                    this.Jwt == input.Jwt ||
                    (this.Jwt != null &&
                    this.Jwt.Equals(input.Jwt))
                ) && 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.IpAddress == input.IpAddress ||
                    (this.IpAddress != null &&
                    this.IpAddress.Equals(input.IpAddress))
                ) && 
                (
                    this.Status == input.Status ||
                    (this.Status != null &&
                    this.Status.Equals(input.Status))
                ) && 
                (
                    this.HostId == input.HostId ||
                    (this.HostId != null &&
                    this.HostId.Equals(input.HostId))
                ) && 
                (
                    this.CreatedAt == input.CreatedAt ||
                    (this.CreatedAt != null &&
                    this.CreatedAt.Equals(input.CreatedAt))
                ) && 
                (
                    this.CreatedBy == input.CreatedBy ||
                    (this.CreatedBy != null &&
                    this.CreatedBy.Equals(input.CreatedBy))
                ) && 
                (
                    this.DeletedBy == input.DeletedBy ||
                    (this.DeletedBy != null &&
                    this.DeletedBy.Equals(input.DeletedBy))
                ) && 
                (
                    this.LocationMetadataId == input.LocationMetadataId ||
                    (this.LocationMetadataId != null &&
                    this.LocationMetadataId.Equals(input.LocationMetadataId))
                ) && 
                (
                    this.LinkListener == input.LinkListener ||
                    (this.LinkListener != null &&
                    this.LinkListener.Equals(input.LinkListener))
                ) && 
                (
                    this.DataCenterId == input.DataCenterId ||
                    (this.DataCenterId != null &&
                    this.DataCenterId.Equals(input.DataCenterId))
                ) && 
                (
                    this.Verified == input.Verified ||
                    (this.Verified != null &&
                    this.Verified.Equals(input.Verified))
                ) && 
                (
                    this.Links == input.Links ||
                    (this.Links != null &&
                    this.Links.Equals(input.Links))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.DeletedAt != null)
                    hashCode = hashCode * 59 + this.DeletedAt.GetHashCode();
                if (this.NetworkId != null)
                    hashCode = hashCode * 59 + this.NetworkId.GetHashCode();
                if (this.Name != null)
                    hashCode = hashCode * 59 + this.Name.GetHashCode();
                if (this.UpdatedAt != null)
                    hashCode = hashCode * 59 + this.UpdatedAt.GetHashCode();
                if (this.Provider != null)
                    hashCode = hashCode * 59 + this.Provider.GetHashCode();
                if (this.Online != null)
                    hashCode = hashCode * 59 + this.Online.GetHashCode();
                if (this.ZitiId != null)
                    hashCode = hashCode * 59 + this.ZitiId.GetHashCode();
                if (this.UserData != null)
                    hashCode = hashCode * 59 + this.UserData.GetHashCode();
                if (this.OwnerIdentityId != null)
                    hashCode = hashCode * 59 + this.OwnerIdentityId.GetHashCode();
                if (this.Attributes != null)
                    hashCode = hashCode * 59 + this.Attributes.GetHashCode();
                if (this.ProviderId != null)
                    hashCode = hashCode * 59 + this.ProviderId.GetHashCode();
                if (this.Jwt != null)
                    hashCode = hashCode * 59 + this.Jwt.GetHashCode();
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.IpAddress != null)
                    hashCode = hashCode * 59 + this.IpAddress.GetHashCode();
                if (this.Status != null)
                    hashCode = hashCode * 59 + this.Status.GetHashCode();
                if (this.HostId != null)
                    hashCode = hashCode * 59 + this.HostId.GetHashCode();
                if (this.CreatedAt != null)
                    hashCode = hashCode * 59 + this.CreatedAt.GetHashCode();
                if (this.CreatedBy != null)
                    hashCode = hashCode * 59 + this.CreatedBy.GetHashCode();
                if (this.DeletedBy != null)
                    hashCode = hashCode * 59 + this.DeletedBy.GetHashCode();
                if (this.LocationMetadataId != null)
                    hashCode = hashCode * 59 + this.LocationMetadataId.GetHashCode();
                if (this.LinkListener != null)
                    hashCode = hashCode * 59 + this.LinkListener.GetHashCode();
                if (this.DataCenterId != null)
                    hashCode = hashCode * 59 + this.DataCenterId.GetHashCode();
                if (this.Verified != null)
                    hashCode = hashCode * 59 + this.Verified.GetHashCode();
                if (this.Links != null)
                    hashCode = hashCode * 59 + this.Links.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
