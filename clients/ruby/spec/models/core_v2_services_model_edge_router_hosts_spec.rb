=begin
#untitled API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 5170

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.1

=end

require 'spec_helper'
require 'json'
require 'date'

# Unit tests for OpenapiClient::CoreV2ServicesModelEdgeRouterHosts
# Automatically generated by openapi-generator (https://openapi-generator.tech)
# Please update as you see appropriate
describe 'CoreV2ServicesModelEdgeRouterHosts' do
  before do
    # run before each test
    @instance = OpenapiClient::CoreV2ServicesModelEdgeRouterHosts.new
  end

  after do
    # run after each test
  end

  describe 'test an instance of CoreV2ServicesModelEdgeRouterHosts' do
    it 'should create an instance of CoreV2ServicesModelEdgeRouterHosts' do
      expect(@instance).to be_instance_of(OpenapiClient::CoreV2ServicesModelEdgeRouterHosts)
    end
  end
  describe 'test attribute "edge_router_id"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

  describe 'test attribute "server_egress"' do
    it 'should work' do
      # assertion here. ref: https://www.relishapp.com/rspec/rspec-expectations/docs/built-in-matchers
    end
  end

end
