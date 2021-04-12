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
    /// InlineResponse20015EmbeddedNetworkConfigMetadataList
    /// </summary>
    [DataContract]
    public partial class InlineResponse20015EmbeddedNetworkConfigMetadataList :  IEquatable<InlineResponse20015EmbeddedNetworkConfigMetadataList>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse20015EmbeddedNetworkConfigMetadataList" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected InlineResponse20015EmbeddedNetworkConfigMetadataList() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse20015EmbeddedNetworkConfigMetadataList" /> class.
        /// </summary>
        /// <param name="networkControllerVolumeSize">networkControllerVolumeSize (required).</param>
        /// <param name="gatewayVolumeSize">gatewayVolumeSize (required).</param>
        /// <param name="name">name (required).</param>
        /// <param name="gcpTransferNodeSize">gcpTransferNodeSize (required).</param>
        /// <param name="awsNetworkControllerSize">awsNetworkControllerSize (required).</param>
        /// <param name="transferNodeVolumeSize">transferNodeVolumeSize (required).</param>
        /// <param name="awsGatewaySize">awsGatewaySize (required).</param>
        /// <param name="ocpTransferNodeSize">ocpTransferNodeSize (required).</param>
        /// <param name="awsTransferNodeSize">awsTransferNodeSize (required).</param>
        /// <param name="id">id (required).</param>
        /// <param name="azureTransferNodeSize">azureTransferNodeSize (required).</param>
        /// <param name="alicloudTransferNodeSize">alicloudTransferNodeSize (required).</param>
        /// <param name="links">links (required).</param>
        public InlineResponse20015EmbeddedNetworkConfigMetadataList(decimal networkControllerVolumeSize = default(decimal), decimal gatewayVolumeSize = default(decimal), string name = default(string), string gcpTransferNodeSize = default(string), string awsNetworkControllerSize = default(string), decimal transferNodeVolumeSize = default(decimal), string awsGatewaySize = default(string), string ocpTransferNodeSize = default(string), string awsTransferNodeSize = default(string), string id = default(string), string azureTransferNodeSize = default(string), string alicloudTransferNodeSize = default(string), InlineResponse2002EmbeddedLinks links = default(InlineResponse2002EmbeddedLinks))
        {
            // to ensure "networkControllerVolumeSize" is required (not null)
            if (networkControllerVolumeSize == null)
            {
                throw new InvalidDataException("networkControllerVolumeSize is a required property for InlineResponse20015EmbeddedNetworkConfigMetadataList and cannot be null");
            }
            else
            {
                this.NetworkControllerVolumeSize = networkControllerVolumeSize;
            }
            
            // to ensure "gatewayVolumeSize" is required (not null)
            if (gatewayVolumeSize == null)
            {
                throw new InvalidDataException("gatewayVolumeSize is a required property for InlineResponse20015EmbeddedNetworkConfigMetadataList and cannot be null");
            }
            else
            {
                this.GatewayVolumeSize = gatewayVolumeSize;
            }
            
            // to ensure "name" is required (not null)
            if (name == null)
            {
                throw new InvalidDataException("name is a required property for InlineResponse20015EmbeddedNetworkConfigMetadataList and cannot be null");
            }
            else
            {
                this.Name = name;
            }
            
            // to ensure "gcpTransferNodeSize" is required (not null)
            if (gcpTransferNodeSize == null)
            {
                throw new InvalidDataException("gcpTransferNodeSize is a required property for InlineResponse20015EmbeddedNetworkConfigMetadataList and cannot be null");
            }
            else
            {
                this.GcpTransferNodeSize = gcpTransferNodeSize;
            }
            
            // to ensure "awsNetworkControllerSize" is required (not null)
            if (awsNetworkControllerSize == null)
            {
                throw new InvalidDataException("awsNetworkControllerSize is a required property for InlineResponse20015EmbeddedNetworkConfigMetadataList and cannot be null");
            }
            else
            {
                this.AwsNetworkControllerSize = awsNetworkControllerSize;
            }
            
            // to ensure "transferNodeVolumeSize" is required (not null)
            if (transferNodeVolumeSize == null)
            {
                throw new InvalidDataException("transferNodeVolumeSize is a required property for InlineResponse20015EmbeddedNetworkConfigMetadataList and cannot be null");
            }
            else
            {
                this.TransferNodeVolumeSize = transferNodeVolumeSize;
            }
            
            // to ensure "awsGatewaySize" is required (not null)
            if (awsGatewaySize == null)
            {
                throw new InvalidDataException("awsGatewaySize is a required property for InlineResponse20015EmbeddedNetworkConfigMetadataList and cannot be null");
            }
            else
            {
                this.AwsGatewaySize = awsGatewaySize;
            }
            
            // to ensure "ocpTransferNodeSize" is required (not null)
            if (ocpTransferNodeSize == null)
            {
                throw new InvalidDataException("ocpTransferNodeSize is a required property for InlineResponse20015EmbeddedNetworkConfigMetadataList and cannot be null");
            }
            else
            {
                this.OcpTransferNodeSize = ocpTransferNodeSize;
            }
            
            // to ensure "awsTransferNodeSize" is required (not null)
            if (awsTransferNodeSize == null)
            {
                throw new InvalidDataException("awsTransferNodeSize is a required property for InlineResponse20015EmbeddedNetworkConfigMetadataList and cannot be null");
            }
            else
            {
                this.AwsTransferNodeSize = awsTransferNodeSize;
            }
            
            // to ensure "id" is required (not null)
            if (id == null)
            {
                throw new InvalidDataException("id is a required property for InlineResponse20015EmbeddedNetworkConfigMetadataList and cannot be null");
            }
            else
            {
                this.Id = id;
            }
            
            // to ensure "azureTransferNodeSize" is required (not null)
            if (azureTransferNodeSize == null)
            {
                throw new InvalidDataException("azureTransferNodeSize is a required property for InlineResponse20015EmbeddedNetworkConfigMetadataList and cannot be null");
            }
            else
            {
                this.AzureTransferNodeSize = azureTransferNodeSize;
            }
            
            // to ensure "alicloudTransferNodeSize" is required (not null)
            if (alicloudTransferNodeSize == null)
            {
                throw new InvalidDataException("alicloudTransferNodeSize is a required property for InlineResponse20015EmbeddedNetworkConfigMetadataList and cannot be null");
            }
            else
            {
                this.AlicloudTransferNodeSize = alicloudTransferNodeSize;
            }
            
            // to ensure "links" is required (not null)
            if (links == null)
            {
                throw new InvalidDataException("links is a required property for InlineResponse20015EmbeddedNetworkConfigMetadataList and cannot be null");
            }
            else
            {
                this.Links = links;
            }
            
        }
        
        /// <summary>
        /// Gets or Sets NetworkControllerVolumeSize
        /// </summary>
        [DataMember(Name="networkControllerVolumeSize", EmitDefaultValue=true)]
        public decimal NetworkControllerVolumeSize { get; set; }

        /// <summary>
        /// Gets or Sets GatewayVolumeSize
        /// </summary>
        [DataMember(Name="gatewayVolumeSize", EmitDefaultValue=true)]
        public decimal GatewayVolumeSize { get; set; }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=true)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets GcpTransferNodeSize
        /// </summary>
        [DataMember(Name="gcpTransferNodeSize", EmitDefaultValue=true)]
        public string GcpTransferNodeSize { get; set; }

        /// <summary>
        /// Gets or Sets AwsNetworkControllerSize
        /// </summary>
        [DataMember(Name="awsNetworkControllerSize", EmitDefaultValue=true)]
        public string AwsNetworkControllerSize { get; set; }

        /// <summary>
        /// Gets or Sets TransferNodeVolumeSize
        /// </summary>
        [DataMember(Name="transferNodeVolumeSize", EmitDefaultValue=true)]
        public decimal TransferNodeVolumeSize { get; set; }

        /// <summary>
        /// Gets or Sets AwsGatewaySize
        /// </summary>
        [DataMember(Name="awsGatewaySize", EmitDefaultValue=true)]
        public string AwsGatewaySize { get; set; }

        /// <summary>
        /// Gets or Sets OcpTransferNodeSize
        /// </summary>
        [DataMember(Name="ocpTransferNodeSize", EmitDefaultValue=true)]
        public string OcpTransferNodeSize { get; set; }

        /// <summary>
        /// Gets or Sets AwsTransferNodeSize
        /// </summary>
        [DataMember(Name="awsTransferNodeSize", EmitDefaultValue=true)]
        public string AwsTransferNodeSize { get; set; }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=true)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets AzureTransferNodeSize
        /// </summary>
        [DataMember(Name="azureTransferNodeSize", EmitDefaultValue=true)]
        public string AzureTransferNodeSize { get; set; }

        /// <summary>
        /// Gets or Sets AlicloudTransferNodeSize
        /// </summary>
        [DataMember(Name="alicloudTransferNodeSize", EmitDefaultValue=true)]
        public string AlicloudTransferNodeSize { get; set; }

        /// <summary>
        /// Gets or Sets Links
        /// </summary>
        [DataMember(Name="_links", EmitDefaultValue=true)]
        public InlineResponse2002EmbeddedLinks Links { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class InlineResponse20015EmbeddedNetworkConfigMetadataList {\n");
            sb.Append("  NetworkControllerVolumeSize: ").Append(NetworkControllerVolumeSize).Append("\n");
            sb.Append("  GatewayVolumeSize: ").Append(GatewayVolumeSize).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  GcpTransferNodeSize: ").Append(GcpTransferNodeSize).Append("\n");
            sb.Append("  AwsNetworkControllerSize: ").Append(AwsNetworkControllerSize).Append("\n");
            sb.Append("  TransferNodeVolumeSize: ").Append(TransferNodeVolumeSize).Append("\n");
            sb.Append("  AwsGatewaySize: ").Append(AwsGatewaySize).Append("\n");
            sb.Append("  OcpTransferNodeSize: ").Append(OcpTransferNodeSize).Append("\n");
            sb.Append("  AwsTransferNodeSize: ").Append(AwsTransferNodeSize).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  AzureTransferNodeSize: ").Append(AzureTransferNodeSize).Append("\n");
            sb.Append("  AlicloudTransferNodeSize: ").Append(AlicloudTransferNodeSize).Append("\n");
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
            return this.Equals(input as InlineResponse20015EmbeddedNetworkConfigMetadataList);
        }

        /// <summary>
        /// Returns true if InlineResponse20015EmbeddedNetworkConfigMetadataList instances are equal
        /// </summary>
        /// <param name="input">Instance of InlineResponse20015EmbeddedNetworkConfigMetadataList to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(InlineResponse20015EmbeddedNetworkConfigMetadataList input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.NetworkControllerVolumeSize == input.NetworkControllerVolumeSize ||
                    (this.NetworkControllerVolumeSize != null &&
                    this.NetworkControllerVolumeSize.Equals(input.NetworkControllerVolumeSize))
                ) && 
                (
                    this.GatewayVolumeSize == input.GatewayVolumeSize ||
                    (this.GatewayVolumeSize != null &&
                    this.GatewayVolumeSize.Equals(input.GatewayVolumeSize))
                ) && 
                (
                    this.Name == input.Name ||
                    (this.Name != null &&
                    this.Name.Equals(input.Name))
                ) && 
                (
                    this.GcpTransferNodeSize == input.GcpTransferNodeSize ||
                    (this.GcpTransferNodeSize != null &&
                    this.GcpTransferNodeSize.Equals(input.GcpTransferNodeSize))
                ) && 
                (
                    this.AwsNetworkControllerSize == input.AwsNetworkControllerSize ||
                    (this.AwsNetworkControllerSize != null &&
                    this.AwsNetworkControllerSize.Equals(input.AwsNetworkControllerSize))
                ) && 
                (
                    this.TransferNodeVolumeSize == input.TransferNodeVolumeSize ||
                    (this.TransferNodeVolumeSize != null &&
                    this.TransferNodeVolumeSize.Equals(input.TransferNodeVolumeSize))
                ) && 
                (
                    this.AwsGatewaySize == input.AwsGatewaySize ||
                    (this.AwsGatewaySize != null &&
                    this.AwsGatewaySize.Equals(input.AwsGatewaySize))
                ) && 
                (
                    this.OcpTransferNodeSize == input.OcpTransferNodeSize ||
                    (this.OcpTransferNodeSize != null &&
                    this.OcpTransferNodeSize.Equals(input.OcpTransferNodeSize))
                ) && 
                (
                    this.AwsTransferNodeSize == input.AwsTransferNodeSize ||
                    (this.AwsTransferNodeSize != null &&
                    this.AwsTransferNodeSize.Equals(input.AwsTransferNodeSize))
                ) && 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.AzureTransferNodeSize == input.AzureTransferNodeSize ||
                    (this.AzureTransferNodeSize != null &&
                    this.AzureTransferNodeSize.Equals(input.AzureTransferNodeSize))
                ) && 
                (
                    this.AlicloudTransferNodeSize == input.AlicloudTransferNodeSize ||
                    (this.AlicloudTransferNodeSize != null &&
                    this.AlicloudTransferNodeSize.Equals(input.AlicloudTransferNodeSize))
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
                if (this.NetworkControllerVolumeSize != null)
                    hashCode = hashCode * 59 + this.NetworkControllerVolumeSize.GetHashCode();
                if (this.GatewayVolumeSize != null)
                    hashCode = hashCode * 59 + this.GatewayVolumeSize.GetHashCode();
                if (this.Name != null)
                    hashCode = hashCode * 59 + this.Name.GetHashCode();
                if (this.GcpTransferNodeSize != null)
                    hashCode = hashCode * 59 + this.GcpTransferNodeSize.GetHashCode();
                if (this.AwsNetworkControllerSize != null)
                    hashCode = hashCode * 59 + this.AwsNetworkControllerSize.GetHashCode();
                if (this.TransferNodeVolumeSize != null)
                    hashCode = hashCode * 59 + this.TransferNodeVolumeSize.GetHashCode();
                if (this.AwsGatewaySize != null)
                    hashCode = hashCode * 59 + this.AwsGatewaySize.GetHashCode();
                if (this.OcpTransferNodeSize != null)
                    hashCode = hashCode * 59 + this.OcpTransferNodeSize.GetHashCode();
                if (this.AwsTransferNodeSize != null)
                    hashCode = hashCode * 59 + this.AwsTransferNodeSize.GetHashCode();
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.AzureTransferNodeSize != null)
                    hashCode = hashCode * 59 + this.AzureTransferNodeSize.GetHashCode();
                if (this.AlicloudTransferNodeSize != null)
                    hashCode = hashCode * 59 + this.AlicloudTransferNodeSize.GetHashCode();
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
