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
    /// InlineResponse20017Links
    /// </summary>
    [DataContract]
    public partial class InlineResponse20017Links :  IEquatable<InlineResponse20017Links>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse20017Links" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected InlineResponse20017Links() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse20017Links" /> class.
        /// </summary>
        /// <param name="first">first (required).</param>
        /// <param name="last">last (required).</param>
        public InlineResponse20017Links(InlineResponse200LinksSelf first = default(InlineResponse200LinksSelf), InlineResponse200LinksSelf last = default(InlineResponse200LinksSelf))
        {
            // to ensure "first" is required (not null)
            if (first == null)
            {
                throw new InvalidDataException("first is a required property for InlineResponse20017Links and cannot be null");
            }
            else
            {
                this.First = first;
            }
            
            // to ensure "last" is required (not null)
            if (last == null)
            {
                throw new InvalidDataException("last is a required property for InlineResponse20017Links and cannot be null");
            }
            else
            {
                this.Last = last;
            }
            
        }
        
        /// <summary>
        /// Gets or Sets First
        /// </summary>
        [DataMember(Name="first", EmitDefaultValue=true)]
        public InlineResponse200LinksSelf First { get; set; }

        /// <summary>
        /// Gets or Sets Last
        /// </summary>
        [DataMember(Name="last", EmitDefaultValue=true)]
        public InlineResponse200LinksSelf Last { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class InlineResponse20017Links {\n");
            sb.Append("  First: ").Append(First).Append("\n");
            sb.Append("  Last: ").Append(Last).Append("\n");
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
            return this.Equals(input as InlineResponse20017Links);
        }

        /// <summary>
        /// Returns true if InlineResponse20017Links instances are equal
        /// </summary>
        /// <param name="input">Instance of InlineResponse20017Links to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(InlineResponse20017Links input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.First == input.First ||
                    (this.First != null &&
                    this.First.Equals(input.First))
                ) && 
                (
                    this.Last == input.Last ||
                    (this.Last != null &&
                    this.Last.Equals(input.Last))
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
                if (this.First != null)
                    hashCode = hashCode * 59 + this.First.GetHashCode();
                if (this.Last != null)
                    hashCode = hashCode * 59 + this.Last.GetHashCode();
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
