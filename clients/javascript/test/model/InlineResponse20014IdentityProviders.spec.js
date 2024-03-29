/**
 * untitled API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5170
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', process.cwd()+'/src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require(process.cwd()+'/src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.UntitledApi);
  }
}(this, function(expect, UntitledApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new UntitledApi.InlineResponse20014IdentityProviders();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('InlineResponse20014IdentityProviders', function() {
    it('should create an instance of InlineResponse20014IdentityProviders', function() {
      // uncomment below and update the code to test InlineResponse20014IdentityProviders
      //var instane = new UntitledApi.InlineResponse20014IdentityProviders();
      //expect(instance).to.be.a(UntitledApi.InlineResponse20014IdentityProviders);
    });

    it('should have the property deletedAt (base name: "deletedAt")', function() {
      // uncomment below and update the code to test the property deletedAt
      //var instane = new UntitledApi.InlineResponse20014IdentityProviders();
      //expect(instance).to.be();
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instane = new UntitledApi.InlineResponse20014IdentityProviders();
      //expect(instance).to.be();
    });

    it('should have the property updatedAt (base name: "updatedAt")', function() {
      // uncomment below and update the code to test the property updatedAt
      //var instane = new UntitledApi.InlineResponse20014IdentityProviders();
      //expect(instance).to.be();
    });

    it('should have the property auth0ConnectionType (base name: "auth0ConnectionType")', function() {
      // uncomment below and update the code to test the property auth0ConnectionType
      //var instane = new UntitledApi.InlineResponse20014IdentityProviders();
      //expect(instance).to.be();
    });

    it('should have the property auth0ConnectionId (base name: "auth0ConnectionId")', function() {
      // uncomment below and update the code to test the property auth0ConnectionId
      //var instane = new UntitledApi.InlineResponse20014IdentityProviders();
      //expect(instance).to.be();
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new UntitledApi.InlineResponse20014IdentityProviders();
      //expect(instance).to.be();
    });

    it('should have the property createdAt (base name: "createdAt")', function() {
      // uncomment below and update the code to test the property createdAt
      //var instane = new UntitledApi.InlineResponse20014IdentityProviders();
      //expect(instance).to.be();
    });

    it('should have the property organizationId (base name: "organizationId")', function() {
      // uncomment below and update the code to test the property organizationId
      //var instane = new UntitledApi.InlineResponse20014IdentityProviders();
      //expect(instance).to.be();
    });

    it('should have the property active (base name: "active")', function() {
      // uncomment below and update the code to test the property active
      //var instane = new UntitledApi.InlineResponse20014IdentityProviders();
      //expect(instance).to.be();
    });

  });

}));
