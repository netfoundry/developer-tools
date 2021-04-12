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
    /// InlineResponse2024Links
    /// </summary>
    [DataContract]
    public partial class InlineResponse2024Links :  IEquatable<InlineResponse2024Links>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse2024Links" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected InlineResponse2024Links() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="InlineResponse2024Links" /> class.
        /// </summary>
        /// <param name="services">services (required).</param>
        /// <param name="processExecution">processExecution (required).</param>
        /// <param name="networks">networks (required).</param>
        /// <param name="appWans">appWans (required).</param>
        /// <param name="endpoints">endpoints (required).</param>
        /// <param name="certificateAuthorities">certificateAuthorities (required).</param>
        /// <param name="self">self (required).</param>
        /// <param name="processExecutions">processExecutions (required).</param>
        /// <param name="networkControllers">networkControllers (required).</param>
        /// <param name="postureChecks">postureChecks (required).</param>
        /// <param name="edgeRouters">edgeRouters (required).</param>
        /// <param name="edgeRouterPolicies">edgeRouterPolicies (required).</param>
        public InlineResponse2024Links(InlineResponse200LinksSelf services = default(InlineResponse200LinksSelf), InlineResponse200LinksNetwork processExecution = default(InlineResponse200LinksNetwork), InlineResponse200LinksNetwork networks = default(InlineResponse200LinksNetwork), InlineResponse200LinksSelf appWans = default(InlineResponse200LinksSelf), InlineResponse200LinksSelf endpoints = default(InlineResponse200LinksSelf), InlineResponse200LinksSelf certificateAuthorities = default(InlineResponse200LinksSelf), InlineResponse200LinksSelf self = default(InlineResponse200LinksSelf), InlineResponse200LinksNetwork processExecutions = default(InlineResponse200LinksNetwork), InlineResponse200LinksSelf networkControllers = default(InlineResponse200LinksSelf), InlineResponse200LinksSelf postureChecks = default(InlineResponse200LinksSelf), InlineResponse200LinksSelf edgeRouters = default(InlineResponse200LinksSelf), InlineResponse200LinksSelf edgeRouterPolicies = default(InlineResponse200LinksSelf))
        {
            // to ensure "services" is required (not null)
            if (services == null)
            {
                throw new InvalidDataException("services is a required property for InlineResponse2024Links and cannot be null");
            }
            else
            {
                this.Services = services;
            }
            
            // to ensure "processExecution" is required (not null)
            if (processExecution == null)
            {
                throw new InvalidDataException("processExecution is a required property for InlineResponse2024Links and cannot be null");
            }
            else
            {
                this.ProcessExecution = processExecution;
            }
            
            // to ensure "networks" is required (not null)
            if (networks == null)
            {
                throw new InvalidDataException("networks is a required property for InlineResponse2024Links and cannot be null");
            }
            else
            {
                this.Networks = networks;
            }
            
            // to ensure "appWans" is required (not null)
            if (appWans == null)
            {
                throw new InvalidDataException("appWans is a required property for InlineResponse2024Links and cannot be null");
            }
            else
            {
                this.AppWans = appWans;
            }
            
            // to ensure "endpoints" is required (not null)
            if (endpoints == null)
            {
                throw new InvalidDataException("endpoints is a required property for InlineResponse2024Links and cannot be null");
            }
            else
            {
                this.Endpoints = endpoints;
            }
            
            // to ensure "certificateAuthorities" is required (not null)
            if (certificateAuthorities == null)
            {
                throw new InvalidDataException("certificateAuthorities is a required property for InlineResponse2024Links and cannot be null");
            }
            else
            {
                this.CertificateAuthorities = certificateAuthorities;
            }
            
            // to ensure "self" is required (not null)
            if (self == null)
            {
                throw new InvalidDataException("self is a required property for InlineResponse2024Links and cannot be null");
            }
            else
            {
                this.Self = self;
            }
            
            // to ensure "processExecutions" is required (not null)
            if (processExecutions == null)
            {
                throw new InvalidDataException("processExecutions is a required property for InlineResponse2024Links and cannot be null");
            }
            else
            {
                this.ProcessExecutions = processExecutions;
            }
            
            // to ensure "networkControllers" is required (not null)
            if (networkControllers == null)
            {
                throw new InvalidDataException("networkControllers is a required property for InlineResponse2024Links and cannot be null");
            }
            else
            {
                this.NetworkControllers = networkControllers;
            }
            
            // to ensure "postureChecks" is required (not null)
            if (postureChecks == null)
            {
                throw new InvalidDataException("postureChecks is a required property for InlineResponse2024Links and cannot be null");
            }
            else
            {
                this.PostureChecks = postureChecks;
            }
            
            // to ensure "edgeRouters" is required (not null)
            if (edgeRouters == null)
            {
                throw new InvalidDataException("edgeRouters is a required property for InlineResponse2024Links and cannot be null");
            }
            else
            {
                this.EdgeRouters = edgeRouters;
            }
            
            // to ensure "edgeRouterPolicies" is required (not null)
            if (edgeRouterPolicies == null)
            {
                throw new InvalidDataException("edgeRouterPolicies is a required property for InlineResponse2024Links and cannot be null");
            }
            else
            {
                this.EdgeRouterPolicies = edgeRouterPolicies;
            }
            
        }
        
        /// <summary>
        /// Gets or Sets Services
        /// </summary>
        [DataMember(Name="services", EmitDefaultValue=true)]
        public InlineResponse200LinksSelf Services { get; set; }

        /// <summary>
        /// Gets or Sets ProcessExecution
        /// </summary>
        [DataMember(Name="process-execution", EmitDefaultValue=true)]
        public InlineResponse200LinksNetwork ProcessExecution { get; set; }

        /// <summary>
        /// Gets or Sets Networks
        /// </summary>
        [DataMember(Name="networks", EmitDefaultValue=true)]
        public InlineResponse200LinksNetwork Networks { get; set; }

        /// <summary>
        /// Gets or Sets AppWans
        /// </summary>
        [DataMember(Name="app-wans", EmitDefaultValue=true)]
        public InlineResponse200LinksSelf AppWans { get; set; }

        /// <summary>
        /// Gets or Sets Endpoints
        /// </summary>
        [DataMember(Name="endpoints", EmitDefaultValue=true)]
        public InlineResponse200LinksSelf Endpoints { get; set; }

        /// <summary>
        /// Gets or Sets CertificateAuthorities
        /// </summary>
        [DataMember(Name="certificate-authorities", EmitDefaultValue=true)]
        public InlineResponse200LinksSelf CertificateAuthorities { get; set; }

        /// <summary>
        /// Gets or Sets Self
        /// </summary>
        [DataMember(Name="self", EmitDefaultValue=true)]
        public InlineResponse200LinksSelf Self { get; set; }

        /// <summary>
        /// Gets or Sets ProcessExecutions
        /// </summary>
        [DataMember(Name="process-executions", EmitDefaultValue=true)]
        public InlineResponse200LinksNetwork ProcessExecutions { get; set; }

        /// <summary>
        /// Gets or Sets NetworkControllers
        /// </summary>
        [DataMember(Name="network-controllers", EmitDefaultValue=true)]
        public InlineResponse200LinksSelf NetworkControllers { get; set; }

        /// <summary>
        /// Gets or Sets PostureChecks
        /// </summary>
        [DataMember(Name="posture-checks", EmitDefaultValue=true)]
        public InlineResponse200LinksSelf PostureChecks { get; set; }

        /// <summary>
        /// Gets or Sets EdgeRouters
        /// </summary>
        [DataMember(Name="edge-routers", EmitDefaultValue=true)]
        public InlineResponse200LinksSelf EdgeRouters { get; set; }

        /// <summary>
        /// Gets or Sets EdgeRouterPolicies
        /// </summary>
        [DataMember(Name="edge-router-policies", EmitDefaultValue=true)]
        public InlineResponse200LinksSelf EdgeRouterPolicies { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class InlineResponse2024Links {\n");
            sb.Append("  Services: ").Append(Services).Append("\n");
            sb.Append("  ProcessExecution: ").Append(ProcessExecution).Append("\n");
            sb.Append("  Networks: ").Append(Networks).Append("\n");
            sb.Append("  AppWans: ").Append(AppWans).Append("\n");
            sb.Append("  Endpoints: ").Append(Endpoints).Append("\n");
            sb.Append("  CertificateAuthorities: ").Append(CertificateAuthorities).Append("\n");
            sb.Append("  Self: ").Append(Self).Append("\n");
            sb.Append("  ProcessExecutions: ").Append(ProcessExecutions).Append("\n");
            sb.Append("  NetworkControllers: ").Append(NetworkControllers).Append("\n");
            sb.Append("  PostureChecks: ").Append(PostureChecks).Append("\n");
            sb.Append("  EdgeRouters: ").Append(EdgeRouters).Append("\n");
            sb.Append("  EdgeRouterPolicies: ").Append(EdgeRouterPolicies).Append("\n");
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
            return this.Equals(input as InlineResponse2024Links);
        }

        /// <summary>
        /// Returns true if InlineResponse2024Links instances are equal
        /// </summary>
        /// <param name="input">Instance of InlineResponse2024Links to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(InlineResponse2024Links input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Services == input.Services ||
                    (this.Services != null &&
                    this.Services.Equals(input.Services))
                ) && 
                (
                    this.ProcessExecution == input.ProcessExecution ||
                    (this.ProcessExecution != null &&
                    this.ProcessExecution.Equals(input.ProcessExecution))
                ) && 
                (
                    this.Networks == input.Networks ||
                    (this.Networks != null &&
                    this.Networks.Equals(input.Networks))
                ) && 
                (
                    this.AppWans == input.AppWans ||
                    (this.AppWans != null &&
                    this.AppWans.Equals(input.AppWans))
                ) && 
                (
                    this.Endpoints == input.Endpoints ||
                    (this.Endpoints != null &&
                    this.Endpoints.Equals(input.Endpoints))
                ) && 
                (
                    this.CertificateAuthorities == input.CertificateAuthorities ||
                    (this.CertificateAuthorities != null &&
                    this.CertificateAuthorities.Equals(input.CertificateAuthorities))
                ) && 
                (
                    this.Self == input.Self ||
                    (this.Self != null &&
                    this.Self.Equals(input.Self))
                ) && 
                (
                    this.ProcessExecutions == input.ProcessExecutions ||
                    (this.ProcessExecutions != null &&
                    this.ProcessExecutions.Equals(input.ProcessExecutions))
                ) && 
                (
                    this.NetworkControllers == input.NetworkControllers ||
                    (this.NetworkControllers != null &&
                    this.NetworkControllers.Equals(input.NetworkControllers))
                ) && 
                (
                    this.PostureChecks == input.PostureChecks ||
                    (this.PostureChecks != null &&
                    this.PostureChecks.Equals(input.PostureChecks))
                ) && 
                (
                    this.EdgeRouters == input.EdgeRouters ||
                    (this.EdgeRouters != null &&
                    this.EdgeRouters.Equals(input.EdgeRouters))
                ) && 
                (
                    this.EdgeRouterPolicies == input.EdgeRouterPolicies ||
                    (this.EdgeRouterPolicies != null &&
                    this.EdgeRouterPolicies.Equals(input.EdgeRouterPolicies))
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
                if (this.Services != null)
                    hashCode = hashCode * 59 + this.Services.GetHashCode();
                if (this.ProcessExecution != null)
                    hashCode = hashCode * 59 + this.ProcessExecution.GetHashCode();
                if (this.Networks != null)
                    hashCode = hashCode * 59 + this.Networks.GetHashCode();
                if (this.AppWans != null)
                    hashCode = hashCode * 59 + this.AppWans.GetHashCode();
                if (this.Endpoints != null)
                    hashCode = hashCode * 59 + this.Endpoints.GetHashCode();
                if (this.CertificateAuthorities != null)
                    hashCode = hashCode * 59 + this.CertificateAuthorities.GetHashCode();
                if (this.Self != null)
                    hashCode = hashCode * 59 + this.Self.GetHashCode();
                if (this.ProcessExecutions != null)
                    hashCode = hashCode * 59 + this.ProcessExecutions.GetHashCode();
                if (this.NetworkControllers != null)
                    hashCode = hashCode * 59 + this.NetworkControllers.GetHashCode();
                if (this.PostureChecks != null)
                    hashCode = hashCode * 59 + this.PostureChecks.GetHashCode();
                if (this.EdgeRouters != null)
                    hashCode = hashCode * 59 + this.EdgeRouters.GetHashCode();
                if (this.EdgeRouterPolicies != null)
                    hashCode = hashCode * 59 + this.EdgeRouterPolicies.GetHashCode();
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
