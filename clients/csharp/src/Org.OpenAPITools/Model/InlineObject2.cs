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
    /// InlineObject2
    /// </summary>
    [DataContract]
    public partial class InlineObject2 :  IEquatable<InlineObject2>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineObject2" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected InlineObject2() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineObject2" /> class.
        /// </summary>
        /// <param name="edgeRouterAttributes">edgeRouterAttributes (required).</param>
        /// <param name="endpointAttributes">endpointAttributes (required).</param>
        /// <param name="name">name (required).</param>
        /// <param name="networkId">networkId (required).</param>
        public InlineObject2(List<string> edgeRouterAttributes = default(List<string>), List<string> endpointAttributes = default(List<string>), string name = default(string), string networkId = default(string))
        {
            // to ensure "edgeRouterAttributes" is required (not null)
            if (edgeRouterAttributes == null)
            {
                throw new InvalidDataException("edgeRouterAttributes is a required property for InlineObject2 and cannot be null");
            }
            else
            {
                this.EdgeRouterAttributes = edgeRouterAttributes;
            }
            
            // to ensure "endpointAttributes" is required (not null)
            if (endpointAttributes == null)
            {
                throw new InvalidDataException("endpointAttributes is a required property for InlineObject2 and cannot be null");
            }
            else
            {
                this.EndpointAttributes = endpointAttributes;
            }
            
            // to ensure "name" is required (not null)
            if (name == null)
            {
                throw new InvalidDataException("name is a required property for InlineObject2 and cannot be null");
            }
            else
            {
                this.Name = name;
            }
            
            // to ensure "networkId" is required (not null)
            if (networkId == null)
            {
                throw new InvalidDataException("networkId is a required property for InlineObject2 and cannot be null");
            }
            else
            {
                this.NetworkId = networkId;
            }
            
        }
        
        /// <summary>
        /// Gets or Sets EdgeRouterAttributes
        /// </summary>
        [DataMember(Name="edgeRouterAttributes", EmitDefaultValue=true)]
        public List<string> EdgeRouterAttributes { get; set; }

        /// <summary>
        /// Gets or Sets EndpointAttributes
        /// </summary>
        [DataMember(Name="endpointAttributes", EmitDefaultValue=true)]
        public List<string> EndpointAttributes { get; set; }

        /// <summary>
        /// Gets or Sets Name
        /// </summary>
        [DataMember(Name="name", EmitDefaultValue=true)]
        public string Name { get; set; }

        /// <summary>
        /// Gets or Sets NetworkId
        /// </summary>
        [DataMember(Name="networkId", EmitDefaultValue=true)]
        public string NetworkId { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class InlineObject2 {\n");
            sb.Append("  EdgeRouterAttributes: ").Append(EdgeRouterAttributes).Append("\n");
            sb.Append("  EndpointAttributes: ").Append(EndpointAttributes).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  NetworkId: ").Append(NetworkId).Append("\n");
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
            return this.Equals(input as InlineObject2);
        }

        /// <summary>
        /// Returns true if InlineObject2 instances are equal
        /// </summary>
        /// <param name="input">Instance of InlineObject2 to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(InlineObject2 input)
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
                    this.EndpointAttributes == input.EndpointAttributes ||
                    this.EndpointAttributes != null &&
                    input.EndpointAttributes != null &&
                    this.EndpointAttributes.SequenceEqual(input.EndpointAttributes)
                ) && 
                (
                    this.Name == input.Name ||
                    (this.Name != null &&
                    this.Name.Equals(input.Name))
                ) && 
                (
                    this.NetworkId == input.NetworkId ||
                    (this.NetworkId != null &&
                    this.NetworkId.Equals(input.NetworkId))
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
                if (this.EndpointAttributes != null)
                    hashCode = hashCode * 59 + this.EndpointAttributes.GetHashCode();
                if (this.Name != null)
                    hashCode = hashCode * 59 + this.Name.GetHashCode();
                if (this.NetworkId != null)
                    hashCode = hashCode * 59 + this.NetworkId.GetHashCode();
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
