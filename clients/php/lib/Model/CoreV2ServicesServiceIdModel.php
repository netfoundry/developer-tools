<?php
/**
 * CoreV2ServicesServiceIdModel
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
 * The version of the OpenAPI document: 5227
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
 * CoreV2ServicesServiceIdModel Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class CoreV2ServicesServiceIdModel implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = '_core_v2_services__serviceId__model';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'bind_endpoint_attributes' => 'string[]',
        'client_ingress' => '\OpenAPI\Client\Model\CoreV2ServicesServiceIdModelClientIngress',
        'edge_router_attributes' => 'string[]',
        'server_egress' => '\OpenAPI\Client\Model\CoreV2ServicesServiceIdModelServerEgress'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'bind_endpoint_attributes' => null,
        'client_ingress' => null,
        'edge_router_attributes' => null,
        'server_egress' => null
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
        'bind_endpoint_attributes' => 'bindEndpointAttributes',
        'client_ingress' => 'clientIngress',
        'edge_router_attributes' => 'edgeRouterAttributes',
        'server_egress' => 'serverEgress'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'bind_endpoint_attributes' => 'setBindEndpointAttributes',
        'client_ingress' => 'setClientIngress',
        'edge_router_attributes' => 'setEdgeRouterAttributes',
        'server_egress' => 'setServerEgress'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'bind_endpoint_attributes' => 'getBindEndpointAttributes',
        'client_ingress' => 'getClientIngress',
        'edge_router_attributes' => 'getEdgeRouterAttributes',
        'server_egress' => 'getServerEgress'
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
        $this->container['bind_endpoint_attributes'] = isset($data['bind_endpoint_attributes']) ? $data['bind_endpoint_attributes'] : null;
        $this->container['client_ingress'] = isset($data['client_ingress']) ? $data['client_ingress'] : null;
        $this->container['edge_router_attributes'] = isset($data['edge_router_attributes']) ? $data['edge_router_attributes'] : null;
        $this->container['server_egress'] = isset($data['server_egress']) ? $data['server_egress'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['bind_endpoint_attributes'] === null) {
            $invalidProperties[] = "'bind_endpoint_attributes' can't be null";
        }
        if ($this->container['client_ingress'] === null) {
            $invalidProperties[] = "'client_ingress' can't be null";
        }
        if ($this->container['edge_router_attributes'] === null) {
            $invalidProperties[] = "'edge_router_attributes' can't be null";
        }
        if ($this->container['server_egress'] === null) {
            $invalidProperties[] = "'server_egress' can't be null";
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
     * Gets bind_endpoint_attributes
     *
     * @return string[]
     */
    public function getBindEndpointAttributes()
    {
        return $this->container['bind_endpoint_attributes'];
    }

    /**
     * Sets bind_endpoint_attributes
     *
     * @param string[] $bind_endpoint_attributes bind_endpoint_attributes
     *
     * @return $this
     */
    public function setBindEndpointAttributes($bind_endpoint_attributes)
    {
        $this->container['bind_endpoint_attributes'] = $bind_endpoint_attributes;

        return $this;
    }

    /**
     * Gets client_ingress
     *
     * @return \OpenAPI\Client\Model\CoreV2ServicesServiceIdModelClientIngress
     */
    public function getClientIngress()
    {
        return $this->container['client_ingress'];
    }

    /**
     * Sets client_ingress
     *
     * @param \OpenAPI\Client\Model\CoreV2ServicesServiceIdModelClientIngress $client_ingress client_ingress
     *
     * @return $this
     */
    public function setClientIngress($client_ingress)
    {
        $this->container['client_ingress'] = $client_ingress;

        return $this;
    }

    /**
     * Gets edge_router_attributes
     *
     * @return string[]
     */
    public function getEdgeRouterAttributes()
    {
        return $this->container['edge_router_attributes'];
    }

    /**
     * Sets edge_router_attributes
     *
     * @param string[] $edge_router_attributes edge_router_attributes
     *
     * @return $this
     */
    public function setEdgeRouterAttributes($edge_router_attributes)
    {
        $this->container['edge_router_attributes'] = $edge_router_attributes;

        return $this;
    }

    /**
     * Gets server_egress
     *
     * @return \OpenAPI\Client\Model\CoreV2ServicesServiceIdModelServerEgress
     */
    public function getServerEgress()
    {
        return $this->container['server_egress'];
    }

    /**
     * Sets server_egress
     *
     * @param \OpenAPI\Client\Model\CoreV2ServicesServiceIdModelServerEgress $server_egress server_egress
     *
     * @return $this
     */
    public function setServerEgress($server_egress)
    {
        $this->container['server_egress'] = $server_egress;

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


