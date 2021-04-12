=begin
#untitled API

#No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

The version of the OpenAPI document: 5170

Generated by: https://openapi-generator.tech
OpenAPI Generator version: 4.3.1

=end

require 'date'

module OpenapiClient
  class InlineResponse2021
    attr_accessor :deleted_at

    attr_accessor :network_id

    attr_accessor :name

    attr_accessor :updated_at

    attr_accessor :model

    attr_accessor :ziti_id

    attr_accessor :owner_identity_id

    attr_accessor :attributes

    attr_accessor :model_type

    attr_accessor :id

    attr_accessor :config_id_by_config_type_id

    attr_accessor :created_at

    attr_accessor :created_by

    attr_accessor :deleted_by

    attr_accessor :encryption_required

    attr_accessor :authority

    attr_accessor :_links

    # Attribute mapping from ruby-style variable name to JSON key.
    def self.attribute_map
      {
        :'deleted_at' => :'deletedAt',
        :'network_id' => :'networkId',
        :'name' => :'name',
        :'updated_at' => :'updatedAt',
        :'model' => :'model',
        :'ziti_id' => :'zitiId',
        :'owner_identity_id' => :'ownerIdentityId',
        :'attributes' => :'attributes',
        :'model_type' => :'modelType',
        :'id' => :'id',
        :'config_id_by_config_type_id' => :'configIdByConfigTypeId',
        :'created_at' => :'createdAt',
        :'created_by' => :'createdBy',
        :'deleted_by' => :'deletedBy',
        :'encryption_required' => :'encryptionRequired',
        :'authority' => :'authority',
        :'_links' => :'_links'
      }
    end

    # Attribute type mapping.
    def self.openapi_types
      {
        :'deleted_at' => :'AnyType',
        :'network_id' => :'String',
        :'name' => :'String',
        :'updated_at' => :'String',
        :'model' => :'InlineResponse2003EmbeddedModel',
        :'ziti_id' => :'AnyType',
        :'owner_identity_id' => :'String',
        :'attributes' => :'Array<String>',
        :'model_type' => :'String',
        :'id' => :'String',
        :'config_id_by_config_type_id' => :'InlineResponse2021ConfigIdByConfigTypeId',
        :'created_at' => :'String',
        :'created_by' => :'String',
        :'deleted_by' => :'AnyType',
        :'encryption_required' => :'Boolean',
        :'authority' => :'AnyType',
        :'_links' => :'InlineResponse2021Links'
      }
    end

    # List of attributes with nullable: true
    def self.openapi_nullable
      Set.new([
      ])
    end

    # Initializes the object
    # @param [Hash] attributes Model attributes in the form of hash
    def initialize(attributes = {})
      if (!attributes.is_a?(Hash))
        fail ArgumentError, "The input argument (attributes) must be a hash in `OpenapiClient::InlineResponse2021` initialize method"
      end

      # check to see if the attribute exists and convert string to symbol for hash key
      attributes = attributes.each_with_object({}) { |(k, v), h|
        if (!self.class.attribute_map.key?(k.to_sym))
          fail ArgumentError, "`#{k}` is not a valid attribute in `OpenapiClient::InlineResponse2021`. Please check the name to make sure it's valid. List of attributes: " + self.class.attribute_map.keys.inspect
        end
        h[k.to_sym] = v
      }

      if attributes.key?(:'deleted_at')
        self.deleted_at = attributes[:'deleted_at']
      end

      if attributes.key?(:'network_id')
        self.network_id = attributes[:'network_id']
      end

      if attributes.key?(:'name')
        self.name = attributes[:'name']
      end

      if attributes.key?(:'updated_at')
        self.updated_at = attributes[:'updated_at']
      end

      if attributes.key?(:'model')
        self.model = attributes[:'model']
      end

      if attributes.key?(:'ziti_id')
        self.ziti_id = attributes[:'ziti_id']
      end

      if attributes.key?(:'owner_identity_id')
        self.owner_identity_id = attributes[:'owner_identity_id']
      end

      if attributes.key?(:'attributes')
        if (value = attributes[:'attributes']).is_a?(Array)
          self.attributes = value
        end
      end

      if attributes.key?(:'model_type')
        self.model_type = attributes[:'model_type']
      end

      if attributes.key?(:'id')
        self.id = attributes[:'id']
      end

      if attributes.key?(:'config_id_by_config_type_id')
        self.config_id_by_config_type_id = attributes[:'config_id_by_config_type_id']
      end

      if attributes.key?(:'created_at')
        self.created_at = attributes[:'created_at']
      end

      if attributes.key?(:'created_by')
        self.created_by = attributes[:'created_by']
      end

      if attributes.key?(:'deleted_by')
        self.deleted_by = attributes[:'deleted_by']
      end

      if attributes.key?(:'encryption_required')
        self.encryption_required = attributes[:'encryption_required']
      end

      if attributes.key?(:'authority')
        self.authority = attributes[:'authority']
      end

      if attributes.key?(:'_links')
        self._links = attributes[:'_links']
      end
    end

    # Show invalid properties with the reasons. Usually used together with valid?
    # @return Array for valid properties with the reasons
    def list_invalid_properties
      invalid_properties = Array.new
      if @deleted_at.nil?
        invalid_properties.push('invalid value for "deleted_at", deleted_at cannot be nil.')
      end

      if @network_id.nil?
        invalid_properties.push('invalid value for "network_id", network_id cannot be nil.')
      end

      if @name.nil?
        invalid_properties.push('invalid value for "name", name cannot be nil.')
      end

      if @updated_at.nil?
        invalid_properties.push('invalid value for "updated_at", updated_at cannot be nil.')
      end

      if @model.nil?
        invalid_properties.push('invalid value for "model", model cannot be nil.')
      end

      if @ziti_id.nil?
        invalid_properties.push('invalid value for "ziti_id", ziti_id cannot be nil.')
      end

      if @owner_identity_id.nil?
        invalid_properties.push('invalid value for "owner_identity_id", owner_identity_id cannot be nil.')
      end

      if @attributes.nil?
        invalid_properties.push('invalid value for "attributes", attributes cannot be nil.')
      end

      if @model_type.nil?
        invalid_properties.push('invalid value for "model_type", model_type cannot be nil.')
      end

      if @id.nil?
        invalid_properties.push('invalid value for "id", id cannot be nil.')
      end

      if @config_id_by_config_type_id.nil?
        invalid_properties.push('invalid value for "config_id_by_config_type_id", config_id_by_config_type_id cannot be nil.')
      end

      if @created_at.nil?
        invalid_properties.push('invalid value for "created_at", created_at cannot be nil.')
      end

      if @created_by.nil?
        invalid_properties.push('invalid value for "created_by", created_by cannot be nil.')
      end

      if @deleted_by.nil?
        invalid_properties.push('invalid value for "deleted_by", deleted_by cannot be nil.')
      end

      if @encryption_required.nil?
        invalid_properties.push('invalid value for "encryption_required", encryption_required cannot be nil.')
      end

      if @authority.nil?
        invalid_properties.push('invalid value for "authority", authority cannot be nil.')
      end

      if @_links.nil?
        invalid_properties.push('invalid value for "_links", _links cannot be nil.')
      end

      invalid_properties
    end

    # Check to see if the all the properties in the model are valid
    # @return true if the model is valid
    def valid?
      return false if @deleted_at.nil?
      return false if @network_id.nil?
      return false if @name.nil?
      return false if @updated_at.nil?
      return false if @model.nil?
      return false if @ziti_id.nil?
      return false if @owner_identity_id.nil?
      return false if @attributes.nil?
      return false if @model_type.nil?
      return false if @id.nil?
      return false if @config_id_by_config_type_id.nil?
      return false if @created_at.nil?
      return false if @created_by.nil?
      return false if @deleted_by.nil?
      return false if @encryption_required.nil?
      return false if @authority.nil?
      return false if @_links.nil?
      true
    end

    # Checks equality by comparing each attribute.
    # @param [Object] Object to be compared
    def ==(o)
      return true if self.equal?(o)
      self.class == o.class &&
          deleted_at == o.deleted_at &&
          network_id == o.network_id &&
          name == o.name &&
          updated_at == o.updated_at &&
          model == o.model &&
          ziti_id == o.ziti_id &&
          owner_identity_id == o.owner_identity_id &&
          attributes == o.attributes &&
          model_type == o.model_type &&
          id == o.id &&
          config_id_by_config_type_id == o.config_id_by_config_type_id &&
          created_at == o.created_at &&
          created_by == o.created_by &&
          deleted_by == o.deleted_by &&
          encryption_required == o.encryption_required &&
          authority == o.authority &&
          _links == o._links
    end

    # @see the `==` method
    # @param [Object] Object to be compared
    def eql?(o)
      self == o
    end

    # Calculates hash code according to all attributes.
    # @return [Integer] Hash code
    def hash
      [deleted_at, network_id, name, updated_at, model, ziti_id, owner_identity_id, attributes, model_type, id, config_id_by_config_type_id, created_at, created_by, deleted_by, encryption_required, authority, _links].hash
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def self.build_from_hash(attributes)
      new.build_from_hash(attributes)
    end

    # Builds the object from hash
    # @param [Hash] attributes Model attributes in the form of hash
    # @return [Object] Returns the model itself
    def build_from_hash(attributes)
      return nil unless attributes.is_a?(Hash)
      self.class.openapi_types.each_pair do |key, type|
        if type =~ /\AArray<(.*)>/i
          # check to ensure the input is an array given that the attribute
          # is documented as an array but the input is not
          if attributes[self.class.attribute_map[key]].is_a?(Array)
            self.send("#{key}=", attributes[self.class.attribute_map[key]].map { |v| _deserialize($1, v) })
          end
        elsif !attributes[self.class.attribute_map[key]].nil?
          self.send("#{key}=", _deserialize(type, attributes[self.class.attribute_map[key]]))
        end # or else data not found in attributes(hash), not an issue as the data can be optional
      end

      self
    end

    # Deserializes the data based on type
    # @param string type Data type
    # @param string value Value to be deserialized
    # @return [Object] Deserialized data
    def _deserialize(type, value)
      case type.to_sym
      when :DateTime
        DateTime.parse(value)
      when :Date
        Date.parse(value)
      when :String
        value.to_s
      when :Integer
        value.to_i
      when :Float
        value.to_f
      when :Boolean
        if value.to_s =~ /\A(true|t|yes|y|1)\z/i
          true
        else
          false
        end
      when :Object
        # generic object (usually a Hash), return directly
        value
      when /\AArray<(?<inner_type>.+)>\z/
        inner_type = Regexp.last_match[:inner_type]
        value.map { |v| _deserialize(inner_type, v) }
      when /\AHash<(?<k_type>.+?), (?<v_type>.+)>\z/
        k_type = Regexp.last_match[:k_type]
        v_type = Regexp.last_match[:v_type]
        {}.tap do |hash|
          value.each do |k, v|
            hash[_deserialize(k_type, k)] = _deserialize(v_type, v)
          end
        end
      else # model
        OpenapiClient.const_get(type).build_from_hash(value)
      end
    end

    # Returns the string representation of the object
    # @return [String] String presentation of the object
    def to_s
      to_hash.to_s
    end

    # to_body is an alias to to_hash (backward compatibility)
    # @return [Hash] Returns the object in the form of hash
    def to_body
      to_hash
    end

    # Returns the object in the form of hash
    # @return [Hash] Returns the object in the form of hash
    def to_hash
      hash = {}
      self.class.attribute_map.each_pair do |attr, param|
        value = self.send(attr)
        if value.nil?
          is_nullable = self.class.openapi_nullable.include?(attr)
          next if !is_nullable || (is_nullable && !instance_variable_defined?(:"@#{attr}"))
        end
        
        hash[param] = _to_hash(value)
      end
      hash
    end

    # Outputs non-array value in the form of hash
    # For object, use to_hash. Otherwise, just return the value
    # @param [Object] value Any valid value
    # @return [Hash] Returns the value in the form of hash
    def _to_hash(value)
      if value.is_a?(Array)
        value.compact.map { |v| _to_hash(v) }
      elsif value.is_a?(Hash)
        {}.tap do |hash|
          value.each { |k, v| hash[k] = _to_hash(v) }
        end
      elsif value.respond_to? :to_hash
        value.to_hash
      else
        value
      end
    end
  end
end
