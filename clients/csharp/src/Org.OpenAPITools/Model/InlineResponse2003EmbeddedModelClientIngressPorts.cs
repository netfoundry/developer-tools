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
    /// InlineResponse2003EmbeddedModelClientIngressPorts
    /// </summary>
    [DataContract]
    public partial class InlineResponse2003EmbeddedModelClientIngressPorts :  IEquatable<InlineResponse2003EmbeddedModelClientIngressPorts>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse2003EmbeddedModelClientIngressPorts" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected InlineResponse2003EmbeddedModelClientIngressPorts() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse2003EmbeddedModelClientIngressPorts" /> class.
        /// </summary>
        /// <param name="high">high (required).</param>
        /// <param name="low">low (required).</param>
        public InlineResponse2003EmbeddedModelClientIngressPorts(decimal high = default(decimal), decimal low = default(decimal))
        {
            // to ensure "high" is required (not null)
            if (high == null)
            {
                throw new InvalidDataException("high is a required property for InlineResponse2003EmbeddedModelClientIngressPorts and cannot be null");
            }
            else
            {
                this.High = high;
            }
            
            // to ensure "low" is required (not null)
            if (low == null)
            {
                throw new InvalidDataException("low is a required property for InlineResponse2003EmbeddedModelClientIngressPorts and cannot be null");
            }
            else
            {
                this.Low = low;
            }
            
        }
        
        /// <summary>
        /// Gets or Sets High
        /// </summary>
        [DataMember(Name="high", EmitDefaultValue=true)]
        public decimal High { get; set; }

        /// <summary>
        /// Gets or Sets Low
        /// </summary>
        [DataMember(Name="low", EmitDefaultValue=true)]
        public decimal Low { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class InlineResponse2003EmbeddedModelClientIngressPorts {\n");
            sb.Append("  High: ").Append(High).Append("\n");
            sb.Append("  Low: ").Append(Low).Append("\n");
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
            return this.Equals(input as InlineResponse2003EmbeddedModelClientIngressPorts);
        }

        /// <summary>
        /// Returns true if InlineResponse2003EmbeddedModelClientIngressPorts instances are equal
        /// </summary>
        /// <param name="input">Instance of InlineResponse2003EmbeddedModelClientIngressPorts to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(InlineResponse2003EmbeddedModelClientIngressPorts input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.High == input.High ||
                    (this.High != null &&
                    this.High.Equals(input.High))
                ) && 
                (
                    this.Low == input.Low ||
                    (this.Low != null &&
                    this.Low.Equals(input.Low))
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
                if (this.High != null)
                    hashCode = hashCode * 59 + this.High.GetHashCode();
                if (this.Low != null)
                    hashCode = hashCode * 59 + this.Low.GetHashCode();
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
