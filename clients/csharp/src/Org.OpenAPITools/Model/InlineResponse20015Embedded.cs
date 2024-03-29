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
    /// InlineResponse20015Embedded
    /// </summary>
    [DataContract]
    public partial class InlineResponse20015Embedded :  IEquatable<InlineResponse20015Embedded>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse20015Embedded" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected InlineResponse20015Embedded() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse20015Embedded" /> class.
        /// </summary>
        /// <param name="networkConfigMetadataList">networkConfigMetadataList (required).</param>
        public InlineResponse20015Embedded(List<InlineResponse20015EmbeddedNetworkConfigMetadataList> networkConfigMetadataList = default(List<InlineResponse20015EmbeddedNetworkConfigMetadataList>))
        {
            // to ensure "networkConfigMetadataList" is required (not null)
            if (networkConfigMetadataList == null)
            {
                throw new InvalidDataException("networkConfigMetadataList is a required property for InlineResponse20015Embedded and cannot be null");
            }
            else
            {
                this.NetworkConfigMetadataList = networkConfigMetadataList;
            }
            
        }
        
        /// <summary>
        /// Gets or Sets NetworkConfigMetadataList
        /// </summary>
        [DataMember(Name="networkConfigMetadataList", EmitDefaultValue=true)]
        public List<InlineResponse20015EmbeddedNetworkConfigMetadataList> NetworkConfigMetadataList { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class InlineResponse20015Embedded {\n");
            sb.Append("  NetworkConfigMetadataList: ").Append(NetworkConfigMetadataList).Append("\n");
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
            return this.Equals(input as InlineResponse20015Embedded);
        }

        /// <summary>
        /// Returns true if InlineResponse20015Embedded instances are equal
        /// </summary>
        /// <param name="input">Instance of InlineResponse20015Embedded to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(InlineResponse20015Embedded input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.NetworkConfigMetadataList == input.NetworkConfigMetadataList ||
                    this.NetworkConfigMetadataList != null &&
                    input.NetworkConfigMetadataList != null &&
                    this.NetworkConfigMetadataList.SequenceEqual(input.NetworkConfigMetadataList)
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
                if (this.NetworkConfigMetadataList != null)
                    hashCode = hashCode * 59 + this.NetworkConfigMetadataList.GetHashCode();
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
