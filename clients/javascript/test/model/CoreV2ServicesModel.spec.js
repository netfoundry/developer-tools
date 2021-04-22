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
    instance = new UntitledApi.CoreV2ServicesModel();
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

  describe('CoreV2ServicesModel', function() {
    it('should create an instance of CoreV2ServicesModel', function() {
      // uncomment below and update the code to test CoreV2ServicesModel
      //var instane = new UntitledApi.CoreV2ServicesModel();
      //expect(instance).to.be.a(UntitledApi.CoreV2ServicesModel);
    });

    it('should have the property edgeRouterAttributes (base name: "edgeRouterAttributes")', function() {
      // uncomment below and update the code to test the property edgeRouterAttributes
      //var instane = new UntitledApi.CoreV2ServicesModel();
      //expect(instance).to.be();
    });

    it('should have the property serverEgress (base name: "serverEgress")', function() {
      // uncomment below and update the code to test the property serverEgress
      //var instane = new UntitledApi.CoreV2ServicesModel();
      //expect(instance).to.be();
    });

    it('should have the property bindEndpointAttributes (base name: "bindEndpointAttributes")', function() {
      // uncomment below and update the code to test the property bindEndpointAttributes
      //var instane = new UntitledApi.CoreV2ServicesModel();
      //expect(instance).to.be();
    });

    it('should have the property clientIngress (base name: "clientIngress")', function() {
      // uncomment below and update the code to test the property clientIngress
      //var instane = new UntitledApi.CoreV2ServicesModel();
      //expect(instance).to.be();
    });

    it('should have the property edgeRouterHosts (base name: "edgeRouterHosts")', function() {
      // uncomment below and update the code to test the property edgeRouterHosts
      //var instane = new UntitledApi.CoreV2ServicesModel();
      //expect(instance).to.be();
    });

  });

}));
