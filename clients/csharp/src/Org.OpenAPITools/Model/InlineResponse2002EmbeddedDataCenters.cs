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
    /// InlineResponse2002EmbeddedDataCenters
    /// </summary>
    [DataContract]
    public partial class InlineResponse2002EmbeddedDataCenters :  IEquatable<InlineResponse2002EmbeddedDataCenters>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse2002EmbeddedDataCenters" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected InlineResponse2002EmbeddedDataCenters() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse2002EmbeddedDataCenters" /> class.
        /// </summary>
        /// <param name="city">city (required).</param>
        /// <param name="continentCode">continentCode (required).</param>
        /// <param name="stateCode">stateCode (required).</param>
        /// <param name="lng">lng (required).</param>
        /// <param name="provider">provider (required).</param>
        /// <param name="stateName">stateName (required).</param>
        /// <param name="continentName">continentName (required).</param>
        /// <param name="isp">isp (required).</param>
        /// <param name="locationCode">locationCode (required).</param>
        /// <param name="countryName">countryName (required).</param>
        /// <param name="id">id (required).</param>
        /// <param name="countryCode">countryCode (required).</param>
        /// <param name="address">address (required).</param>
        /// <param name="locationName">locationName (required).</param>
        /// <param name="lat">lat (required).</param>
        /// <param name="links">links (required).</param>
        public InlineResponse2002EmbeddedDataCenters(AnyType city = default(AnyType), AnyType continentCode = default(AnyType), AnyType stateCode = default(AnyType), decimal lng = default(decimal), string provider = default(string), AnyType stateName = default(AnyType), AnyType continentName = default(AnyType), AnyType isp = default(AnyType), string locationCode = default(string), AnyType countryName = default(AnyType), string id = default(string), AnyType countryCode = default(AnyType), AnyType address = default(AnyType), string locationName = default(string), decimal lat = default(decimal), InlineResponse2002EmbeddedLinks links = default(InlineResponse2002EmbeddedLinks))
        {
            // to ensure "city" is required (not null)
            if (city == null)
            {
                throw new InvalidDataException("city is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.City = city;
            }
            
            // to ensure "continentCode" is required (not null)
            if (continentCode == null)
            {
                throw new InvalidDataException("continentCode is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.ContinentCode = continentCode;
            }
            
            // to ensure "stateCode" is required (not null)
            if (stateCode == null)
            {
                throw new InvalidDataException("stateCode is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.StateCode = stateCode;
            }
            
            // to ensure "lng" is required (not null)
            if (lng == null)
            {
                throw new InvalidDataException("lng is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.Lng = lng;
            }
            
            // to ensure "provider" is required (not null)
            if (provider == null)
            {
                throw new InvalidDataException("provider is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.Provider = provider;
            }
            
            // to ensure "stateName" is required (not null)
            if (stateName == null)
            {
                throw new InvalidDataException("stateName is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.StateName = stateName;
            }
            
            // to ensure "continentName" is required (not null)
            if (continentName == null)
            {
                throw new InvalidDataException("continentName is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.ContinentName = continentName;
            }
            
            // to ensure "isp" is required (not null)
            if (isp == null)
            {
                throw new InvalidDataException("isp is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.Isp = isp;
            }
            
            // to ensure "locationCode" is required (not null)
            if (locationCode == null)
            {
                throw new InvalidDataException("locationCode is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.LocationCode = locationCode;
            }
            
            // to ensure "countryName" is required (not null)
            if (countryName == null)
            {
                throw new InvalidDataException("countryName is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.CountryName = countryName;
            }
            
            // to ensure "id" is required (not null)
            if (id == null)
            {
                throw new InvalidDataException("id is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.Id = id;
            }
            
            // to ensure "countryCode" is required (not null)
            if (countryCode == null)
            {
                throw new InvalidDataException("countryCode is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.CountryCode = countryCode;
            }
            
            // to ensure "address" is required (not null)
            if (address == null)
            {
                throw new InvalidDataException("address is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.Address = address;
            }
            
            // to ensure "locationName" is required (not null)
            if (locationName == null)
            {
                throw new InvalidDataException("locationName is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.LocationName = locationName;
            }
            
            // to ensure "lat" is required (not null)
            if (lat == null)
            {
                throw new InvalidDataException("lat is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.Lat = lat;
            }
            
            // to ensure "links" is required (not null)
            if (links == null)
            {
                throw new InvalidDataException("links is a required property for InlineResponse2002EmbeddedDataCenters and cannot be null");
            }
            else
            {
                this.Links = links;
            }
            
        }
        
        /// <summary>
        /// Gets or Sets City
        /// </summary>
        [DataMember(Name="city", EmitDefaultValue=true)]
        public AnyType City { get; set; }

        /// <summary>
        /// Gets or Sets ContinentCode
        /// </summary>
        [DataMember(Name="continentCode", EmitDefaultValue=true)]
        public AnyType ContinentCode { get; set; }

        /// <summary>
        /// Gets or Sets StateCode
        /// </summary>
        [DataMember(Name="stateCode", EmitDefaultValue=true)]
        public AnyType StateCode { get; set; }

        /// <summary>
        /// Gets or Sets Lng
        /// </summary>
        [DataMember(Name="lng", EmitDefaultValue=true)]
        public decimal Lng { get; set; }

        /// <summary>
        /// Gets or Sets Provider
        /// </summary>
        [DataMember(Name="provider", EmitDefaultValue=true)]
        public string Provider { get; set; }

        /// <summary>
        /// Gets or Sets StateName
        /// </summary>
        [DataMember(Name="stateName", EmitDefaultValue=true)]
        public AnyType StateName { get; set; }

        /// <summary>
        /// Gets or Sets ContinentName
        /// </summary>
        [DataMember(Name="continentName", EmitDefaultValue=true)]
        public AnyType ContinentName { get; set; }

        /// <summary>
        /// Gets or Sets Isp
        /// </summary>
        [DataMember(Name="isp", EmitDefaultValue=true)]
        public AnyType Isp { get; set; }

        /// <summary>
        /// Gets or Sets LocationCode
        /// </summary>
        [DataMember(Name="locationCode", EmitDefaultValue=true)]
        public string LocationCode { get; set; }

        /// <summary>
        /// Gets or Sets CountryName
        /// </summary>
        [DataMember(Name="countryName", EmitDefaultValue=true)]
        public AnyType CountryName { get; set; }

        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=true)]
        public string Id { get; set; }

        /// <summary>
        /// Gets or Sets CountryCode
        /// </summary>
        [DataMember(Name="countryCode", EmitDefaultValue=true)]
        public AnyType CountryCode { get; set; }

        /// <summary>
        /// Gets or Sets Address
        /// </summary>
        [DataMember(Name="address", EmitDefaultValue=true)]
        public AnyType Address { get; set; }

        /// <summary>
        /// Gets or Sets LocationName
        /// </summary>
        [DataMember(Name="locationName", EmitDefaultValue=true)]
        public string LocationName { get; set; }

        /// <summary>
        /// Gets or Sets Lat
        /// </summary>
        [DataMember(Name="lat", EmitDefaultValue=true)]
        public decimal Lat { get; set; }

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
            sb.Append("class InlineResponse2002EmbeddedDataCenters {\n");
            sb.Append("  City: ").Append(City).Append("\n");
            sb.Append("  ContinentCode: ").Append(ContinentCode).Append("\n");
            sb.Append("  StateCode: ").Append(StateCode).Append("\n");
            sb.Append("  Lng: ").Append(Lng).Append("\n");
            sb.Append("  Provider: ").Append(Provider).Append("\n");
            sb.Append("  StateName: ").Append(StateName).Append("\n");
            sb.Append("  ContinentName: ").Append(ContinentName).Append("\n");
            sb.Append("  Isp: ").Append(Isp).Append("\n");
            sb.Append("  LocationCode: ").Append(LocationCode).Append("\n");
            sb.Append("  CountryName: ").Append(CountryName).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  CountryCode: ").Append(CountryCode).Append("\n");
            sb.Append("  Address: ").Append(Address).Append("\n");
            sb.Append("  LocationName: ").Append(LocationName).Append("\n");
            sb.Append("  Lat: ").Append(Lat).Append("\n");
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
            return this.Equals(input as InlineResponse2002EmbeddedDataCenters);
        }

        /// <summary>
        /// Returns true if InlineResponse2002EmbeddedDataCenters instances are equal
        /// </summary>
        /// <param name="input">Instance of InlineResponse2002EmbeddedDataCenters to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(InlineResponse2002EmbeddedDataCenters input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.City == input.City ||
                    (this.City != null &&
                    this.City.Equals(input.City))
                ) && 
                (
                    this.ContinentCode == input.ContinentCode ||
                    (this.ContinentCode != null &&
                    this.ContinentCode.Equals(input.ContinentCode))
                ) && 
                (
                    this.StateCode == input.StateCode ||
                    (this.StateCode != null &&
                    this.StateCode.Equals(input.StateCode))
                ) && 
                (
                    this.Lng == input.Lng ||
                    (this.Lng != null &&
                    this.Lng.Equals(input.Lng))
                ) && 
                (
                    this.Provider == input.Provider ||
                    (this.Provider != null &&
                    this.Provider.Equals(input.Provider))
                ) && 
                (
                    this.StateName == input.StateName ||
                    (this.StateName != null &&
                    this.StateName.Equals(input.StateName))
                ) && 
                (
                    this.ContinentName == input.ContinentName ||
                    (this.ContinentName != null &&
                    this.ContinentName.Equals(input.ContinentName))
                ) && 
                (
                    this.Isp == input.Isp ||
                    (this.Isp != null &&
                    this.Isp.Equals(input.Isp))
                ) && 
                (
                    this.LocationCode == input.LocationCode ||
                    (this.LocationCode != null &&
                    this.LocationCode.Equals(input.LocationCode))
                ) && 
                (
                    this.CountryName == input.CountryName ||
                    (this.CountryName != null &&
                    this.CountryName.Equals(input.CountryName))
                ) && 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.CountryCode == input.CountryCode ||
                    (this.CountryCode != null &&
                    this.CountryCode.Equals(input.CountryCode))
                ) && 
                (
                    this.Address == input.Address ||
                    (this.Address != null &&
                    this.Address.Equals(input.Address))
                ) && 
                (
                    this.LocationName == input.LocationName ||
                    (this.LocationName != null &&
                    this.LocationName.Equals(input.LocationName))
                ) && 
                (
                    this.Lat == input.Lat ||
                    (this.Lat != null &&
                    this.Lat.Equals(input.Lat))
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
                if (this.City != null)
                    hashCode = hashCode * 59 + this.City.GetHashCode();
                if (this.ContinentCode != null)
                    hashCode = hashCode * 59 + this.ContinentCode.GetHashCode();
                if (this.StateCode != null)
                    hashCode = hashCode * 59 + this.StateCode.GetHashCode();
                if (this.Lng != null)
                    hashCode = hashCode * 59 + this.Lng.GetHashCode();
                if (this.Provider != null)
                    hashCode = hashCode * 59 + this.Provider.GetHashCode();
                if (this.StateName != null)
                    hashCode = hashCode * 59 + this.StateName.GetHashCode();
                if (this.ContinentName != null)
                    hashCode = hashCode * 59 + this.ContinentName.GetHashCode();
                if (this.Isp != null)
                    hashCode = hashCode * 59 + this.Isp.GetHashCode();
                if (this.LocationCode != null)
                    hashCode = hashCode * 59 + this.LocationCode.GetHashCode();
                if (this.CountryName != null)
                    hashCode = hashCode * 59 + this.CountryName.GetHashCode();
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.CountryCode != null)
                    hashCode = hashCode * 59 + this.CountryCode.GetHashCode();
                if (this.Address != null)
                    hashCode = hashCode * 59 + this.Address.GetHashCode();
                if (this.LocationName != null)
                    hashCode = hashCode * 59 + this.LocationName.GetHashCode();
                if (this.Lat != null)
                    hashCode = hashCode * 59 + this.Lat.GetHashCode();
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
