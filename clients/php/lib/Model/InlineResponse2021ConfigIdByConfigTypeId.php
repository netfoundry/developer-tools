<?php
/**
 * InlineResponse2021ConfigIdByConfigTypeId
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
 * The version of the OpenAPI document: 5229
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
 * InlineResponse2021ConfigIdByConfigTypeId Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class InlineResponse2021ConfigIdByConfigTypeId implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'inline_response_202_1_configIdByConfigTypeId';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        '_6fa5c2bc_b7f7_47f8_9229_e927722adb27' => 'string',
        '_7491e52d_97e8_4759_8a63_c8ea8a75f822' => 'string',
        'b1582680_ab7b_45d0_ac36_b00f82df8e79' => 'string',
        'e7f6ef8d_da57_444c_b677_f03974f5d8be' => 'string'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        '_6fa5c2bc_b7f7_47f8_9229_e927722adb27' => null,
        '_7491e52d_97e8_4759_8a63_c8ea8a75f822' => null,
        'b1582680_ab7b_45d0_ac36_b00f82df8e79' => null,
        'e7f6ef8d_da57_444c_b677_f03974f5d8be' => null
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
        '_6fa5c2bc_b7f7_47f8_9229_e927722adb27' => '6fa5c2bc-b7f7-47f8-9229-e927722adb27',
        '_7491e52d_97e8_4759_8a63_c8ea8a75f822' => '7491e52d-97e8-4759-8a63-c8ea8a75f822',
        'b1582680_ab7b_45d0_ac36_b00f82df8e79' => 'b1582680-ab7b-45d0-ac36-b00f82df8e79',
        'e7f6ef8d_da57_444c_b677_f03974f5d8be' => 'e7f6ef8d-da57-444c-b677-f03974f5d8be'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        '_6fa5c2bc_b7f7_47f8_9229_e927722adb27' => 'set6fa5c2bcB7f747f89229E927722adb27',
        '_7491e52d_97e8_4759_8a63_c8ea8a75f822' => 'set7491e52d97e847598a63C8ea8a75f822',
        'b1582680_ab7b_45d0_ac36_b00f82df8e79' => 'setB1582680Ab7b45d0Ac36B00f82df8e79',
        'e7f6ef8d_da57_444c_b677_f03974f5d8be' => 'setE7f6ef8dDa57444cB677F03974f5d8be'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        '_6fa5c2bc_b7f7_47f8_9229_e927722adb27' => 'get6fa5c2bcB7f747f89229E927722adb27',
        '_7491e52d_97e8_4759_8a63_c8ea8a75f822' => 'get7491e52d97e847598a63C8ea8a75f822',
        'b1582680_ab7b_45d0_ac36_b00f82df8e79' => 'getB1582680Ab7b45d0Ac36B00f82df8e79',
        'e7f6ef8d_da57_444c_b677_f03974f5d8be' => 'getE7f6ef8dDa57444cB677F03974f5d8be'
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
        $this->container['_6fa5c2bc_b7f7_47f8_9229_e927722adb27'] = isset($data['_6fa5c2bc_b7f7_47f8_9229_e927722adb27']) ? $data['_6fa5c2bc_b7f7_47f8_9229_e927722adb27'] : null;
        $this->container['_7491e52d_97e8_4759_8a63_c8ea8a75f822'] = isset($data['_7491e52d_97e8_4759_8a63_c8ea8a75f822']) ? $data['_7491e52d_97e8_4759_8a63_c8ea8a75f822'] : null;
        $this->container['b1582680_ab7b_45d0_ac36_b00f82df8e79'] = isset($data['b1582680_ab7b_45d0_ac36_b00f82df8e79']) ? $data['b1582680_ab7b_45d0_ac36_b00f82df8e79'] : null;
        $this->container['e7f6ef8d_da57_444c_b677_f03974f5d8be'] = isset($data['e7f6ef8d_da57_444c_b677_f03974f5d8be']) ? $data['e7f6ef8d_da57_444c_b677_f03974f5d8be'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['e7f6ef8d_da57_444c_b677_f03974f5d8be'] === null) {
            $invalidProperties[] = "'e7f6ef8d_da57_444c_b677_f03974f5d8be' can't be null";
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
     * Gets _6fa5c2bc_b7f7_47f8_9229_e927722adb27
     *
     * @return string|null
     */
    public function get6fa5c2bcB7f747f89229E927722adb27()
    {
        return $this->container['_6fa5c2bc_b7f7_47f8_9229_e927722adb27'];
    }

    /**
     * Sets _6fa5c2bc_b7f7_47f8_9229_e927722adb27
     *
     * @param string|null $_6fa5c2bc_b7f7_47f8_9229_e927722adb27 _6fa5c2bc_b7f7_47f8_9229_e927722adb27
     *
     * @return $this
     */
    public function set6fa5c2bcB7f747f89229E927722adb27($_6fa5c2bc_b7f7_47f8_9229_e927722adb27)
    {
        $this->container['_6fa5c2bc_b7f7_47f8_9229_e927722adb27'] = $_6fa5c2bc_b7f7_47f8_9229_e927722adb27;

        return $this;
    }

    /**
     * Gets _7491e52d_97e8_4759_8a63_c8ea8a75f822
     *
     * @return string|null
     */
    public function get7491e52d97e847598a63C8ea8a75f822()
    {
        return $this->container['_7491e52d_97e8_4759_8a63_c8ea8a75f822'];
    }

    /**
     * Sets _7491e52d_97e8_4759_8a63_c8ea8a75f822
     *
     * @param string|null $_7491e52d_97e8_4759_8a63_c8ea8a75f822 _7491e52d_97e8_4759_8a63_c8ea8a75f822
     *
     * @return $this
     */
    public function set7491e52d97e847598a63C8ea8a75f822($_7491e52d_97e8_4759_8a63_c8ea8a75f822)
    {
        $this->container['_7491e52d_97e8_4759_8a63_c8ea8a75f822'] = $_7491e52d_97e8_4759_8a63_c8ea8a75f822;

        return $this;
    }

    /**
     * Gets b1582680_ab7b_45d0_ac36_b00f82df8e79
     *
     * @return string|null
     */
    public function getB1582680Ab7b45d0Ac36B00f82df8e79()
    {
        return $this->container['b1582680_ab7b_45d0_ac36_b00f82df8e79'];
    }

    /**
     * Sets b1582680_ab7b_45d0_ac36_b00f82df8e79
     *
     * @param string|null $b1582680_ab7b_45d0_ac36_b00f82df8e79 b1582680_ab7b_45d0_ac36_b00f82df8e79
     *
     * @return $this
     */
    public function setB1582680Ab7b45d0Ac36B00f82df8e79($b1582680_ab7b_45d0_ac36_b00f82df8e79)
    {
        $this->container['b1582680_ab7b_45d0_ac36_b00f82df8e79'] = $b1582680_ab7b_45d0_ac36_b00f82df8e79;

        return $this;
    }

    /**
     * Gets e7f6ef8d_da57_444c_b677_f03974f5d8be
     *
     * @return string
     */
    public function getE7f6ef8dDa57444cB677F03974f5d8be()
    {
        return $this->container['e7f6ef8d_da57_444c_b677_f03974f5d8be'];
    }

    /**
     * Sets e7f6ef8d_da57_444c_b677_f03974f5d8be
     *
     * @param string $e7f6ef8d_da57_444c_b677_f03974f5d8be e7f6ef8d_da57_444c_b677_f03974f5d8be
     *
     * @return $this
     */
    public function setE7f6ef8dDa57444cB677F03974f5d8be($e7f6ef8d_da57_444c_b677_f03974f5d8be)
    {
        $this->container['e7f6ef8d_da57_444c_b677_f03974f5d8be'] = $e7f6ef8d_da57_444c_b677_f03974f5d8be;

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


