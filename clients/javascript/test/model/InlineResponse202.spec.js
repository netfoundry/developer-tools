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
    instance = new UntitledApi.InlineResponse202();
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

  describe('InlineResponse202', function() {
    it('should create an instance of InlineResponse202', function() {
      // uncomment below and update the code to test InlineResponse202
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be.a(UntitledApi.InlineResponse202);
    });

    it('should have the property deletedAt (base name: "deletedAt")', function() {
      // uncomment below and update the code to test the property deletedAt
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property name (base name: "name")', function() {
      // uncomment below and update the code to test the property name
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property updatedAt (base name: "updatedAt")', function() {
      // uncomment below and update the code to test the property updatedAt
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property size (base name: "size")', function() {
      // uncomment below and update the code to test the property size
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property ownerIdentityId (base name: "ownerIdentityId")', function() {
      // uncomment below and update the code to test the property ownerIdentityId
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property productVersion (base name: "productVersion")', function() {
      // uncomment below and update the code to test the property productVersion
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property networkGroupId (base name: "networkGroupId")', function() {
      // uncomment below and update the code to test the property networkGroupId
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property status (base name: "status")', function() {
      // uncomment below and update the code to test the property status
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property createdAt (base name: "createdAt")', function() {
      // uncomment below and update the code to test the property createdAt
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property createdBy (base name: "createdBy")', function() {
      // uncomment below and update the code to test the property createdBy
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property deletedBy (base name: "deletedBy")', function() {
      // uncomment below and update the code to test the property deletedBy
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property networkController (base name: "networkController")', function() {
      // uncomment below and update the code to test the property networkController
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property o365BreakoutCategory (base name: "o365BreakoutCategory")', function() {
      // uncomment below and update the code to test the property o365BreakoutCategory
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

    it('should have the property links (base name: "_links")', function() {
      // uncomment below and update the code to test the property links
      //var instane = new UntitledApi.InlineResponse202();
      //expect(instance).to.be();
    });

  });

}));
