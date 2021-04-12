<?php
/**
 * InlineResponse20015EmbeddedNetworkConfigMetadataList
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
 * InlineResponse20015EmbeddedNetworkConfigMetadataList Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class InlineResponse20015EmbeddedNetworkConfigMetadataList implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'inline_response_200_15__embedded_networkConfigMetadataList';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'network_controller_volume_size' => 'float',
        'gateway_volume_size' => 'float',
        'name' => 'string',
        'gcp_transfer_node_size' => 'string',
        'aws_network_controller_size' => 'string',
        'transfer_node_volume_size' => 'float',
        'aws_gateway_size' => 'string',
        'ocp_transfer_node_size' => 'string',
        'aws_transfer_node_size' => 'string',
        'id' => 'string',
        'azure_transfer_node_size' => 'string',
        'alicloud_transfer_node_size' => 'string',
        '_links' => '\OpenAPI\Client\Model\InlineResponse2002EmbeddedLinks'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'network_controller_volume_size' => null,
        'gateway_volume_size' => null,
        'name' => null,
        'gcp_transfer_node_size' => null,
        'aws_network_controller_size' => null,
        'transfer_node_volume_size' => null,
        'aws_gateway_size' => null,
        'ocp_transfer_node_size' => null,
        'aws_transfer_node_size' => null,
        'id' => null,
        'azure_transfer_node_size' => null,
        'alicloud_transfer_node_size' => null,
        '_links' => null
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
        'network_controller_volume_size' => 'networkControllerVolumeSize',
        'gateway_volume_size' => 'gatewayVolumeSize',
        'name' => 'name',
        'gcp_transfer_node_size' => 'gcpTransferNodeSize',
        'aws_network_controller_size' => 'awsNetworkControllerSize',
        'transfer_node_volume_size' => 'transferNodeVolumeSize',
        'aws_gateway_size' => 'awsGatewaySize',
        'ocp_transfer_node_size' => 'ocpTransferNodeSize',
        'aws_transfer_node_size' => 'awsTransferNodeSize',
        'id' => 'id',
        'azure_transfer_node_size' => 'azureTransferNodeSize',
        'alicloud_transfer_node_size' => 'alicloudTransferNodeSize',
        '_links' => '_links'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'network_controller_volume_size' => 'setNetworkControllerVolumeSize',
        'gateway_volume_size' => 'setGatewayVolumeSize',
        'name' => 'setName',
        'gcp_transfer_node_size' => 'setGcpTransferNodeSize',
        'aws_network_controller_size' => 'setAwsNetworkControllerSize',
        'transfer_node_volume_size' => 'setTransferNodeVolumeSize',
        'aws_gateway_size' => 'setAwsGatewaySize',
        'ocp_transfer_node_size' => 'setOcpTransferNodeSize',
        'aws_transfer_node_size' => 'setAwsTransferNodeSize',
        'id' => 'setId',
        'azure_transfer_node_size' => 'setAzureTransferNodeSize',
        'alicloud_transfer_node_size' => 'setAlicloudTransferNodeSize',
        '_links' => 'setLinks'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'network_controller_volume_size' => 'getNetworkControllerVolumeSize',
        'gateway_volume_size' => 'getGatewayVolumeSize',
        'name' => 'getName',
        'gcp_transfer_node_size' => 'getGcpTransferNodeSize',
        'aws_network_controller_size' => 'getAwsNetworkControllerSize',
        'transfer_node_volume_size' => 'getTransferNodeVolumeSize',
        'aws_gateway_size' => 'getAwsGatewaySize',
        'ocp_transfer_node_size' => 'getOcpTransferNodeSize',
        'aws_transfer_node_size' => 'getAwsTransferNodeSize',
        'id' => 'getId',
        'azure_transfer_node_size' => 'getAzureTransferNodeSize',
        'alicloud_transfer_node_size' => 'getAlicloudTransferNodeSize',
        '_links' => 'getLinks'
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
        $this->container['network_controller_volume_size'] = isset($data['network_controller_volume_size']) ? $data['network_controller_volume_size'] : null;
        $this->container['gateway_volume_size'] = isset($data['gateway_volume_size']) ? $data['gateway_volume_size'] : null;
        $this->container['name'] = isset($data['name']) ? $data['name'] : null;
        $this->container['gcp_transfer_node_size'] = isset($data['gcp_transfer_node_size']) ? $data['gcp_transfer_node_size'] : null;
        $this->container['aws_network_controller_size'] = isset($data['aws_network_controller_size']) ? $data['aws_network_controller_size'] : null;
        $this->container['transfer_node_volume_size'] = isset($data['transfer_node_volume_size']) ? $data['transfer_node_volume_size'] : null;
        $this->container['aws_gateway_size'] = isset($data['aws_gateway_size']) ? $data['aws_gateway_size'] : null;
        $this->container['ocp_transfer_node_size'] = isset($data['ocp_transfer_node_size']) ? $data['ocp_transfer_node_size'] : null;
        $this->container['aws_transfer_node_size'] = isset($data['aws_transfer_node_size']) ? $data['aws_transfer_node_size'] : null;
        $this->container['id'] = isset($data['id']) ? $data['id'] : null;
        $this->container['azure_transfer_node_size'] = isset($data['azure_transfer_node_size']) ? $data['azure_transfer_node_size'] : null;
        $this->container['alicloud_transfer_node_size'] = isset($data['alicloud_transfer_node_size']) ? $data['alicloud_transfer_node_size'] : null;
        $this->container['_links'] = isset($data['_links']) ? $data['_links'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['network_controller_volume_size'] === null) {
            $invalidProperties[] = "'network_controller_volume_size' can't be null";
        }
        if ($this->container['gateway_volume_size'] === null) {
            $invalidProperties[] = "'gateway_volume_size' can't be null";
        }
        if ($this->container['name'] === null) {
            $invalidProperties[] = "'name' can't be null";
        }
        if ($this->container['gcp_transfer_node_size'] === null) {
            $invalidProperties[] = "'gcp_transfer_node_size' can't be null";
        }
        if ($this->container['aws_network_controller_size'] === null) {
            $invalidProperties[] = "'aws_network_controller_size' can't be null";
        }
        if ($this->container['transfer_node_volume_size'] === null) {
            $invalidProperties[] = "'transfer_node_volume_size' can't be null";
        }
        if ($this->container['aws_gateway_size'] === null) {
            $invalidProperties[] = "'aws_gateway_size' can't be null";
        }
        if ($this->container['ocp_transfer_node_size'] === null) {
            $invalidProperties[] = "'ocp_transfer_node_size' can't be null";
        }
        if ($this->container['aws_transfer_node_size'] === null) {
            $invalidProperties[] = "'aws_transfer_node_size' can't be null";
        }
        if ($this->container['id'] === null) {
            $invalidProperties[] = "'id' can't be null";
        }
        if ($this->container['azure_transfer_node_size'] === null) {
            $invalidProperties[] = "'azure_transfer_node_size' can't be null";
        }
        if ($this->container['alicloud_transfer_node_size'] === null) {
            $invalidProperties[] = "'alicloud_transfer_node_size' can't be null";
        }
        if ($this->container['_links'] === null) {
            $invalidProperties[] = "'_links' can't be null";
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
     * Gets network_controller_volume_size
     *
     * @return float
     */
    public function getNetworkControllerVolumeSize()
    {
        return $this->container['network_controller_volume_size'];
    }

    /**
     * Sets network_controller_volume_size
     *
     * @param float $network_controller_volume_size network_controller_volume_size
     *
     * @return $this
     */
    public function setNetworkControllerVolumeSize($network_controller_volume_size)
    {
        $this->container['network_controller_volume_size'] = $network_controller_volume_size;

        return $this;
    }

    /**
     * Gets gateway_volume_size
     *
     * @return float
     */
    public function getGatewayVolumeSize()
    {
        return $this->container['gateway_volume_size'];
    }

    /**
     * Sets gateway_volume_size
     *
     * @param float $gateway_volume_size gateway_volume_size
     *
     * @return $this
     */
    public function setGatewayVolumeSize($gateway_volume_size)
    {
        $this->container['gateway_volume_size'] = $gateway_volume_size;

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
     * Gets gcp_transfer_node_size
     *
     * @return string
     */
    public function getGcpTransferNodeSize()
    {
        return $this->container['gcp_transfer_node_size'];
    }

    /**
     * Sets gcp_transfer_node_size
     *
     * @param string $gcp_transfer_node_size gcp_transfer_node_size
     *
     * @return $this
     */
    public function setGcpTransferNodeSize($gcp_transfer_node_size)
    {
        $this->container['gcp_transfer_node_size'] = $gcp_transfer_node_size;

        return $this;
    }

    /**
     * Gets aws_network_controller_size
     *
     * @return string
     */
    public function getAwsNetworkControllerSize()
    {
        return $this->container['aws_network_controller_size'];
    }

    /**
     * Sets aws_network_controller_size
     *
     * @param string $aws_network_controller_size aws_network_controller_size
     *
     * @return $this
     */
    public function setAwsNetworkControllerSize($aws_network_controller_size)
    {
        $this->container['aws_network_controller_size'] = $aws_network_controller_size;

        return $this;
    }

    /**
     * Gets transfer_node_volume_size
     *
     * @return float
     */
    public function getTransferNodeVolumeSize()
    {
        return $this->container['transfer_node_volume_size'];
    }

    /**
     * Sets transfer_node_volume_size
     *
     * @param float $transfer_node_volume_size transfer_node_volume_size
     *
     * @return $this
     */
    public function setTransferNodeVolumeSize($transfer_node_volume_size)
    {
        $this->container['transfer_node_volume_size'] = $transfer_node_volume_size;

        return $this;
    }

    /**
     * Gets aws_gateway_size
     *
     * @return string
     */
    public function getAwsGatewaySize()
    {
        return $this->container['aws_gateway_size'];
    }

    /**
     * Sets aws_gateway_size
     *
     * @param string $aws_gateway_size aws_gateway_size
     *
     * @return $this
     */
    public function setAwsGatewaySize($aws_gateway_size)
    {
        $this->container['aws_gateway_size'] = $aws_gateway_size;

        return $this;
    }

    /**
     * Gets ocp_transfer_node_size
     *
     * @return string
     */
    public function getOcpTransferNodeSize()
    {
        return $this->container['ocp_transfer_node_size'];
    }

    /**
     * Sets ocp_transfer_node_size
     *
     * @param string $ocp_transfer_node_size ocp_transfer_node_size
     *
     * @return $this
     */
    public function setOcpTransferNodeSize($ocp_transfer_node_size)
    {
        $this->container['ocp_transfer_node_size'] = $ocp_transfer_node_size;

        return $this;
    }

    /**
     * Gets aws_transfer_node_size
     *
     * @return string
     */
    public function getAwsTransferNodeSize()
    {
        return $this->container['aws_transfer_node_size'];
    }

    /**
     * Sets aws_transfer_node_size
     *
     * @param string $aws_transfer_node_size aws_transfer_node_size
     *
     * @return $this
     */
    public function setAwsTransferNodeSize($aws_transfer_node_size)
    {
        $this->container['aws_transfer_node_size'] = $aws_transfer_node_size;

        return $this;
    }

    /**
     * Gets id
     *
     * @return string
     */
    public function getId()
    {
        return $this->container['id'];
    }

    /**
     * Sets id
     *
     * @param string $id id
     *
     * @return $this
     */
    public function setId($id)
    {
        $this->container['id'] = $id;

        return $this;
    }

    /**
     * Gets azure_transfer_node_size
     *
     * @return string
     */
    public function getAzureTransferNodeSize()
    {
        return $this->container['azure_transfer_node_size'];
    }

    /**
     * Sets azure_transfer_node_size
     *
     * @param string $azure_transfer_node_size azure_transfer_node_size
     *
     * @return $this
     */
    public function setAzureTransferNodeSize($azure_transfer_node_size)
    {
        $this->container['azure_transfer_node_size'] = $azure_transfer_node_size;

        return $this;
    }

    /**
     * Gets alicloud_transfer_node_size
     *
     * @return string
     */
    public function getAlicloudTransferNodeSize()
    {
        return $this->container['alicloud_transfer_node_size'];
    }

    /**
     * Sets alicloud_transfer_node_size
     *
     * @param string $alicloud_transfer_node_size alicloud_transfer_node_size
     *
     * @return $this
     */
    public function setAlicloudTransferNodeSize($alicloud_transfer_node_size)
    {
        $this->container['alicloud_transfer_node_size'] = $alicloud_transfer_node_size;

        return $this;
    }

    /**
     * Gets _links
     *
     * @return \OpenAPI\Client\Model\InlineResponse2002EmbeddedLinks
     */
    public function getLinks()
    {
        return $this->container['_links'];
    }

    /**
     * Sets _links
     *
     * @param \OpenAPI\Client\Model\InlineResponse2002EmbeddedLinks $_links _links
     *
     * @return $this
     */
    public function setLinks($_links)
    {
        $this->container['_links'] = $_links;

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


