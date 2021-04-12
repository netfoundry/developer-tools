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
    /// InlineResponse2003EmbeddedModel
    /// </summary>
    [DataContract]
    public partial class InlineResponse2003EmbeddedModel :  IEquatable<InlineResponse2003EmbeddedModel>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse2003EmbeddedModel" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected InlineResponse2003EmbeddedModel() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse2003EmbeddedModel" /> class.
        /// </summary>
        /// <param name="edgeRouterAttributes">edgeRouterAttributes (required).</param>
        /// <param name="serverEgress">serverEgress.</param>
        /// <param name="bindEndpointAttributes">bindEndpointAttributes.</param>
        /// <param name="clientIngress">clientIngress (required).</param>
        /// <param name="edgeRouterHosts">edgeRouterHosts.</param>
        public InlineResponse2003EmbeddedModel(List<string> edgeRouterAttributes = default(List<string>), InlineResponse2003EmbeddedModelServerEgress serverEgress = default(InlineResponse2003EmbeddedModelServerEgress), List<string> bindEndpointAttributes = default(List<string>), InlineResponse2003EmbeddedModelClientIngress clientIngress = default(InlineResponse2003EmbeddedModelClientIngress), List<InlineResponse2003EmbeddedModelEdgeRouterHosts> edgeRouterHosts = default(List<InlineResponse2003EmbeddedModelEdgeRouterHosts>))
        {
            // to ensure "edgeRouterAttributes" is required (not null)
            if (edgeRouterAttributes == null)
            {
                throw new InvalidDataException("edgeRouterAttributes is a required property for InlineResponse2003EmbeddedModel and cannot be null");
            }
            else
            {
                this.EdgeRouterAttributes = edgeRouterAttributes;
            }
            
            // to ensure "clientIngress" is required (not null)
            if (clientIngress == null)
            {
                throw new InvalidDataException("clientIngress is a required property for InlineResponse2003EmbeddedModel and cannot be null");
            }
            else
            {
                this.ClientIngress = clientIngress;
            }
            
            this.ServerEgress = serverEgress;
            this.BindEndpointAttributes = bindEndpointAttributes;
            this.EdgeRouterHosts = edgeRouterHosts;
        }
        
        /// <summary>
        /// Gets or Sets EdgeRouterAttributes
        /// </summary>
        [DataMember(Name="edgeRouterAttributes", EmitDefaultValue=true)]
        public List<string> EdgeRouterAttributes { get; set; }

        /// <summary>
        /// Gets or Sets ServerEgress
        /// </summary>
        [DataMember(Name="serverEgress", EmitDefaultValue=false)]
        public InlineResponse2003EmbeddedModelServerEgress ServerEgress { get; set; }

        /// <summary>
        /// Gets or Sets BindEndpointAttributes
        /// </summary>
        [DataMember(Name="bindEndpointAttributes", EmitDefaultValue=false)]
        public List<string> BindEndpointAttributes { get; set; }

        /// <summary>
        /// Gets or Sets ClientIngress
        /// </summary>
        [DataMember(Name="clientIngress", EmitDefaultValue=true)]
        public InlineResponse2003EmbeddedModelClientIngress ClientIngress { get; set; }

        /// <summary>
        /// Gets or Sets EdgeRouterHosts
        /// </summary>
        [DataMember(Name="edgeRouterHosts", EmitDefaultValue=false)]
        public List<InlineResponse2003EmbeddedModelEdgeRouterHosts> EdgeRouterHosts { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class InlineResponse2003EmbeddedModel {\n");
            sb.Append("  EdgeRouterAttributes: ").Append(EdgeRouterAttributes).Append("\n");
            sb.Append("  ServerEgress: ").Append(ServerEgress).Append("\n");
            sb.Append("  BindEndpointAttributes: ").Append(BindEndpointAttributes).Append("\n");
            sb.Append("  ClientIngress: ").Append(ClientIngress).Append("\n");
            sb.Append("  EdgeRouterHosts: ").Append(EdgeRouterHosts).Append("\n");
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
            return this.Equals(input as InlineResponse2003EmbeddedModel);
        }

        /// <summary>
        /// Returns true if InlineResponse2003EmbeddedModel instances are equal
        /// </summary>
        /// <param name="input">Instance of InlineResponse2003EmbeddedModel to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(InlineResponse2003EmbeddedModel input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.EdgeRouterAttributes == input.EdgeRouterAttributes ||
                    this.EdgeRouterAttributes != null &&
                    input.EdgeRouterAttributes != null &&
                    this.EdgeRouterAttributes.SequenceEqual(input.EdgeRouterAttributes)
                ) && 
                (
                    this.ServerEgress == input.ServerEgress ||
                    (this.ServerEgress != null &&
                    this.ServerEgress.Equals(input.ServerEgress))
                ) && 
                (
                    this.BindEndpointAttributes == input.BindEndpointAttributes ||
                    this.BindEndpointAttributes != null &&
                    input.BindEndpointAttributes != null &&
                    this.BindEndpointAttributes.SequenceEqual(input.BindEndpointAttributes)
                ) && 
                (
                    this.ClientIngress == input.ClientIngress ||
                    (this.ClientIngress != null &&
                    this.ClientIngress.Equals(input.ClientIngress))
                ) && 
                (
                    this.EdgeRouterHosts == input.EdgeRouterHosts ||
                    this.EdgeRouterHosts != null &&
                    input.EdgeRouterHosts != null &&
                    this.EdgeRouterHosts.SequenceEqual(input.EdgeRouterHosts)
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
                if (this.EdgeRouterAttributes != null)
                    hashCode = hashCode * 59 + this.EdgeRouterAttributes.GetHashCode();
                if (this.ServerEgress != null)
                    hashCode = hashCode * 59 + this.ServerEgress.GetHashCode();
                if (this.BindEndpointAttributes != null)
                    hashCode = hashCode * 59 + this.BindEndpointAttributes.GetHashCode();
                if (this.ClientIngress != null)
                    hashCode = hashCode * 59 + this.ClientIngress.GetHashCode();
                if (this.EdgeRouterHosts != null)
                    hashCode = hashCode * 59 + this.EdgeRouterHosts.GetHashCode();
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
