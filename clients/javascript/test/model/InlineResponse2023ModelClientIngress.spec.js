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
    instance = new UntitledApi.InlineResponse2023ModelClientIngress();
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

  describe('InlineResponse2023ModelClientIngress', function() {
    it('should create an instance of InlineResponse2023ModelClientIngress', function() {
      // uncomment below and update the code to test InlineResponse2023ModelClientIngress
      //var instane = new UntitledApi.InlineResponse2023ModelClientIngress();
      //expect(instance).to.be.a(UntitledApi.InlineResponse2023ModelClientIngress);
    });

    it('should have the property addresses (base name: "addresses")', function() {
      // uncomment below and update the code to test the property addresses
      //var instane = new UntitledApi.InlineResponse2023ModelClientIngress();
      //expect(instance).to.be();
    });

    it('should have the property ports (base name: "ports")', function() {
      // uncomment below and update the code to test the property ports
      //var instane = new UntitledApi.InlineResponse2023ModelClientIngress();
      //expect(instance).to.be();
    });

    it('should have the property protocols (base name: "protocols")', function() {
      // uncomment below and update the code to test the property protocols
      //var instane = new UntitledApi.InlineResponse2023ModelClientIngress();
      //expect(instance).to.be();
    });

  });

}));
