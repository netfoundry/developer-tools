<?php
/**
 * InlineObject4
 *
 * PHP version 5
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */

/**
 * untitled API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 5170
 * 
 * Generated by: https://openapi-generator.tech
 * OpenAPI Generator version: 4.3.1
 */

/**
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

namespace OpenAPI\Client\Model;

use \ArrayAccess;
use \OpenAPI\Client\ObjectSerializer;

/**
 * InlineObject4 Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class InlineObject4 implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'inline_object_4';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'service_attributes' => 'string[]',
        'network_id' => 'string',
        'name' => 'string',
        'posture_check_attributes' => 'AnyType[]',
        'endpoint_attributes' => 'string[]'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'service_attributes' => null,
        'network_id' => null,
        'name' => null,
        'posture_check_attributes' => null,
        'endpoint_attributes' => null
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPITypes()
    {
        return self::$openAPITypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function openAPIFormats()
    {
        return self::$openAPIFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'service_attributes' => 'serviceAttributes',
        'network_id' => 'networkId',
        'name' => 'name',
        'posture_check_attributes' => 'postureCheckAttributes',
        'endpoint_attributes' => 'endpointAttributes'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'service_attributes' => 'setServiceAttributes',
        'network_id' => 'setNetworkId',
        'name' => 'setName',
        'posture_check_attributes' => 'setPostureCheckAttributes',
        'endpoint_attributes' => 'setEndpointAttributes'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'service_attributes' => 'getServiceAttributes',
        'network_id' => 'getNetworkId',
        'name' => 'getName',
        'posture_check_attributes' => 'getPostureCheckAttributes',
        'endpoint_attributes' => 'getEndpointAttributes'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$openAPIModelName;
    }

    

    

    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['service_attributes'] = isset($data['service_attributes']) ? $data['service_attributes'] : null;
        $this->container['network_id'] = isset($data['network_id']) ? $data['network_id'] : null;
        $this->container['name'] = isset($data['name']) ? $data['name'] : null;
        $this->container['posture_check_attributes'] = isset($data['posture_check_attributes']) ? $data['posture_check_attributes'] : null;
        $this->container['endpoint_attributes'] = isset($data['endpoint_attributes']) ? $data['endpoint_attributes'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['service_attributes'] === null) {
            $invalidProperties[] = "'service_attributes' can't be null";
        }
        if ($this->container['network_id'] === null) {
            $invalidProperties[] = "'network_id' can't be null";
        }
        if ($this->container['name'] === null) {
            $invalidProperties[] = "'name' can't be null";
        }
        if ($this->container['posture_check_attributes'] === null) {
            $invalidProperties[] = "'posture_check_attributes' can't be null";
        }
        if ($this->container['endpoint_attributes'] === null) {
            $invalidProperties[] = "'endpoint_attributes' can't be null";
        }
        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets service_attributes
     *
     * @return string[]
     */
    public function getServiceAttributes()
    {
        return $this->container['service_attributes'];
    }

    /**
     * Sets service_attributes
     *
     * @param string[] $service_attributes service_attributes
     *
     * @return $this
     */
    public function setServiceAttributes($service_attributes)
    {
        $this->container['service_attributes'] = $service_attributes;

        return $this;
    }

    /**
     * Gets network_id
     *
     * @return string
     */
    public function getNetworkId()
    {
        return $this->container['network_id'];
    }

    /**
     * Sets network_id
     *
     * @param string $network_id network_id
     *
     * @return $this
     */
    public function setNetworkId($network_id)
    {
        $this->container['network_id'] = $network_id;

        return $this;
    }

    /**
     * Gets name
     *
     * @return string
     */
    public function getName()
    {
        return $this->container['name'];
    }

    /**
     * Sets name
     *
     * @param string $name name
     *
     * @return $this
     */
    public function setName($name)
    {
        $this->container['name'] = $name;

        return $this;
    }

    /**
     * Gets posture_check_attributes
     *
     * @return AnyType[]
     */
    public function getPostureCheckAttributes()
    {
        return $this->container['posture_check_attributes'];
    }

    /**
     * Sets posture_check_attributes
     *
     * @param AnyType[] $posture_check_attributes posture_check_attributes
     *
     * @return $this
     */
    public function setPostureCheckAttributes($posture_check_attributes)
    {
        $this->container['posture_check_attributes'] = $posture_check_attributes;

        return $this;
    }

    /**
     * Gets endpoint_attributes
     *
     * @return string[]
     */
    public function getEndpointAttributes()
    {
        return $this->container['endpoint_attributes'];
    }

    /**
     * Sets endpoint_attributes
     *
     * @param string[] $endpoint_attributes endpoint_attributes
     *
     * @return $this
     */
    public function setEndpointAttributes($endpoint_attributes)
    {
        $this->container['endpoint_attributes'] = $endpoint_attributes;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     *
     * @param integer $offset Offset
     * @param mixed   $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        return json_encode(
            ObjectSerializer::sanitizeForSerialization($this),
            JSON_PRETTY_PRINT
        );
    }

    /**
     * Gets a header-safe presentation of the object
     *
     * @return string
     */
    public function toHeaderValue()
    {
        return json_encode(ObjectSerializer::sanitizeForSerialization($this));
    }
}


