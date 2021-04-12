/* 
 * untitled API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5170
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
    /// InlineResponse2024NetworkController
    /// </summary>
    [DataContract]
    public partial class InlineResponse2024NetworkController :  IEquatable<InlineResponse2024NetworkController>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse2024NetworkController" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected InlineResponse2024NetworkController() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse2024NetworkController" /> class.
        /// </summary>
        /// <param name="deletedAt">deletedAt (required).</param>
        /// <param name="networkId">networkId (required).</param>
        /// <param name="name">name (required).</param>
        /// <param name="updatedAt">updatedAt (required).</param>
        /// <param name="provider">provider (required).</param>
        /// <param name="userData">userData (required).</param>
        /// <param name="ownerIdentityId">ownerIdentityId (required).</param>
        /// <param name="domainName">domainName (required).</param>
        /// <param name="providerId">providerId (required).</param>
        /// <param name="id">id (required).</param>
        /// <param name="port">port (required).</param>
        /// <param name="ipAddress">ipAddress (required).</param>
        /// <param name="status">status (required).</param>
        /// <param name="hostId">hostId (required).</param>
        /// <param name="createdAt">createdAt (required).</param>
        /// <param name="deletedBy">deletedBy (required).</param>
        /// <param name="locationMetadataId">locationMetadataId (required).</param>
        /// <param name="dataCenterId">dataCenterId (required).</param>
        public InlineResponse2024NetworkController(AnyType deletedAt = default(AnyType), string networkId = default(string), string name = default(string), string updatedAt = default(string), string provider = default(string), AnyType userData = default(AnyType), AnyType ownerIdentityId = default(AnyType), string domainName = default(string), string providerId = default(string), string id = default(string), decimal port = default(decimal), string ipAddress = default(string), string status = default(string), string hostId = default(string), string createdAt = default(string), AnyType deletedBy = default(AnyType), string locationMetadataId = default(string), string dataCenterId = default(string))
        {
            // to ensure "deletedAt" is required (not null)
            if (deletedAt == null)
            {
                throw new InvalidDataException("deletedAt is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.DeletedAt = deletedAt;
            }
            
            // to ensure "networkId" is required (not null)
            if (networkId == null)
            {
                throw new InvalidDataException("networkId is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.NetworkId = networkId;
            }
            
            // to ensure "name" is required (not null)
            if (name == null)
            {
                throw new InvalidDataException("name is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.Name = name;
            }
            
            // to ensure "updatedAt" is required (not null)
            if (updatedAt == null)
            {
                throw new InvalidDataException("updatedAt is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.UpdatedAt = updatedAt;
            }
            
            // to ensure "provider" is required (not null)
            if (provider == null)
            {
                throw new InvalidDataException("provider is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.Provider = provider;
            }
            
            // to ensure "userData" is required (not null)
            if (userData == null)
            {
                throw new InvalidDataException("userData is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.UserData = userData;
            }
            
            // to ensure "ownerIdentityId" is required (not null)
            if (ownerIdentityId == null)
            {
                throw new InvalidDataException("ownerIdentityId is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.OwnerIdentityId = ownerIdentityId;
            }
            
            // to ensure "domainName" is required (not null)
            if (domainName == null)
            {
                throw new InvalidDataException("domainName is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.DomainName = domainName;
            }
            
            // to ensure "providerId" is required (not null)
            if (providerId == null)
            {
                throw new InvalidDataException("providerId is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.ProviderId = providerId;
            }
            
            // to ensure "id" is required (not null)
            if (id == null)
            {
                throw new InvalidDataException("id is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.Id = id;
            }
            
            // to ensure "port" is required (not null)
            if (port == null)
            {
                throw new InvalidDataException("port is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.Port = port;
            }
            
            // to ensure "ipAddress" is required (not null)
            if (ipAddress == null)
            {
                throw new InvalidDataException("ipAddress is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.IpAddress = ipAddress;
            }
            
            // to ensure "status" is required (not null)
            if (status == null)
            {
                throw new InvalidDataException("status is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.Status = status;
            }
            
            // to ensure "hostId" is required (not null)
            if (hostId == null)
            {
                throw new InvalidDataException("hostId is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.HostId = hostId;
            }
            
            // to ensure "createdAt" is required (not null)
            if (createdAt == null)
            {
                throw new InvalidDataException("createdAt is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.CreatedAt = createdAt;
            }
            
            // to ensure "deletedBy" is required (not null)
            if (deletedBy == null)
            {
                throw new InvalidDataException("deletedBy is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.DeletedBy = deletedBy;
            }
            
            // to ensure "locationMetadataId" is required (not null)
            if (locationMetadataId == null)
            {
                throw new InvalidDataException("locationMetadataId is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.LocationMetadataId = locationMetadataId;
            }
            
            // to ensure "dataCenterId" is required (not null)
            if (dataCenterId == null)
            {
                throw new InvalidDataException("dataCenterId is a required property for InlineResponse2024NetworkController and cannot be null");
            }
            else
            {
                this.DataCenterId = dataCenterId;
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
        public string Provider { get; set; }

        /// <summary>
        /// Gets or Sets UserData
        /// </summary>
        [DataMember(Name="userData", EmitDefaultValue=true)]
        public AnyType UserData { get; set; }

        /// <summary>
        /// Gets or Sets OwnerIdentityId
        /// </summary>
        [DataMember(Name="ownerIdentityId", EmitDefaultValue=true)]
        public AnyType OwnerIdentityId { get; set; }

        /// <summary>
        /// Gets or Sets DomainName
        /// </summary>
        [DataMember(Name="domainName", EmitDefaultValue=true)]
        public string DomainName { get; set; }

        /// <summary>
        /// Gets or Sets ProviderId
        /// </summary>
        [DataMember(Name="providerId", EmitDefaultValue=true)]
        public string ProviderId { get; set; }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=true)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets Port
        /// </summary>
        [DataMember(Name="port", EmitDefaultValue=true)]
        public decimal Port { get; set; }

        /// <summary>
        /// Gets or Sets IpAddress
        /// </summary>
        [DataMember(Name="ipAddress", EmitDefaultValue=true)]
        public string IpAddress { get; set; }

        /// <summary>
        /// Gets or Sets Status
        /// </summary>
        [DataMember(Name="status", EmitDefaultValue=true)]
        public string Status { get; set; }

        /// <summary>
        /// Gets or Sets HostId
        /// </summary>
        [DataMember(Name="hostId", EmitDefaultValue=true)]
        public string HostId { get; set; }

        /// <summary>
        /// Gets or Sets CreatedAt
        /// </summary>
        [DataMember(Name="createdAt", EmitDefaultValue=true)]
        public string CreatedAt { get; set; }

        /// <summary>
        /// Gets or Sets DeletedBy
        /// </summary>
        [DataMember(Name="deletedBy", EmitDefaultValue=true)]
        public AnyType DeletedBy { get; set; }

        /// <summary>
        /// Gets or Sets LocationMetadataId
        /// </summary>
        [DataMember(Name="locationMetadataId", EmitDefaultValue=true)]
        public string LocationMetadataId { get; set; }

        /// <summary>
        /// Gets or Sets DataCenterId
        /// </summary>
        [DataMember(Name="dataCenterId", EmitDefaultValue=true)]
        public string DataCenterId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class InlineResponse2024NetworkController {\n");
            sb.Append("  DeletedAt: ").Append(DeletedAt).Append("\n");
            sb.Append("  NetworkId: ").Append(NetworkId).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  UpdatedAt: ").Append(UpdatedAt).Append("\n");
            sb.Append("  Provider: ").Append(Provider).Append("\n");
            sb.Append("  UserData: ").Append(UserData).Append("\n");
            sb.Append("  OwnerIdentityId: ").Append(OwnerIdentityId).Append("\n");
            sb.Append("  DomainName: ").Append(DomainName).Append("\n");
            sb.Append("  ProviderId: ").Append(ProviderId).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Port: ").Append(Port).Append("\n");
            sb.Append("  IpAddress: ").Append(IpAddress).Append("\n");
            sb.Append("  Status: ").Append(Status).Append("\n");
            sb.Append("  HostId: ").Append(HostId).Append("\n");
            sb.Append("  CreatedAt: ").Append(CreatedAt).Append("\n");
            sb.Append("  DeletedBy: ").Append(DeletedBy).Append("\n");
            sb.Append("  LocationMetadataId: ").Append(LocationMetadataId).Append("\n");
            sb.Append("  DataCenterId: ").Append(DataCenterId).Append("\n");
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
            return this.Equals(input as InlineResponse2024NetworkController);
        }

        /// <summary>
        /// Returns true if InlineResponse2024NetworkController instances are equal
        /// </summary>
        /// <param name="input">Instance of InlineResponse2024NetworkController to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(InlineResponse2024NetworkController input)
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
                    this.DomainName == input.DomainName ||
                    (this.DomainName != null &&
                    this.DomainName.Equals(input.DomainName))
                ) && 
                (
                    this.ProviderId == input.ProviderId ||
                    (this.ProviderId != null &&
                    this.ProviderId.Equals(input.ProviderId))
                ) && 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.Port == input.Port ||
                    (this.Port != null &&
                    this.Port.Equals(input.Port))
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
                    this.DataCenterId == input.DataCenterId ||
                    (this.DataCenterId != null &&
                    this.DataCenterId.Equals(input.DataCenterId))
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
                if (this.UserData != null)
                    hashCode = hashCode * 59 + this.UserData.GetHashCode();
                if (this.OwnerIdentityId != null)
                    hashCode = hashCode * 59 + this.OwnerIdentityId.GetHashCode();
                if (this.DomainName != null)
                    hashCode = hashCode * 59 + this.DomainName.GetHashCode();
                if (this.ProviderId != null)
                    hashCode = hashCode * 59 + this.ProviderId.GetHashCode();
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.Port != null)
                    hashCode = hashCode * 59 + this.Port.GetHashCode();
                if (this.IpAddress != null)
                    hashCode = hashCode * 59 + this.IpAddress.GetHashCode();
                if (this.Status != null)
                    hashCode = hashCode * 59 + this.Status.GetHashCode();
                if (this.HostId != null)
                    hashCode = hashCode * 59 + this.HostId.GetHashCode();
                if (this.CreatedAt != null)
                    hashCode = hashCode * 59 + this.CreatedAt.GetHashCode();
                if (this.DeletedBy != null)
                    hashCode = hashCode * 59 + this.DeletedBy.GetHashCode();
                if (this.LocationMetadataId != null)
                    hashCode = hashCode * 59 + this.LocationMetadataId.GetHashCode();
                if (this.DataCenterId != null)
                    hashCode = hashCode * 59 + this.DataCenterId.GetHashCode();
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
