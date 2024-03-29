<?php
/**
 * InlineResponse20019
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
 * InlineResponse20019 Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class InlineResponse20019 implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'inline_response_200_19';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        '_7_3_4' => '\OpenAPI\Client\Model\InlineResponse20019734',
        '_7_3_11' => '\OpenAPI\Client\Model\InlineResponse20019734',
        '_7_3_16' => '\OpenAPI\Client\Model\InlineResponse200197316',
        '_7_1_0' => '\OpenAPI\Client\Model\InlineResponse20019710',
        '_7_3_22' => '\OpenAPI\Client\Model\InlineResponse200197316',
        '_7_3_23' => '\OpenAPI\Client\Model\InlineResponse200197316',
        '_7_3_8' => '\OpenAPI\Client\Model\InlineResponse20019734',
        '_7_3_12' => '\OpenAPI\Client\Model\InlineResponse20019734',
        '_7_2_1' => '\OpenAPI\Client\Model\InlineResponse20019710',
        '_7_3_13' => '\OpenAPI\Client\Model\InlineResponse20019734',
        '_7_0_0' => '\OpenAPI\Client\Model\InlineResponse20019710',
        '_7_3_17' => '\OpenAPI\Client\Model\InlineResponse200197316',
        '_7_3_5' => '\OpenAPI\Client\Model\InlineResponse20019734',
        '_7_3_20' => '\OpenAPI\Client\Model\InlineResponse200197316',
        '_7_3_2' => '\OpenAPI\Client\Model\InlineResponse20019710',
        '_7_3_9' => '\OpenAPI\Client\Model\InlineResponse20019734',
        '_7_3_24' => '\OpenAPI\Client\Model\InlineResponse200197316',
        '_7_2_0' => '\OpenAPI\Client\Model\InlineResponse20019710',
        '_7_3_0' => '\OpenAPI\Client\Model\InlineResponse20019710',
        '_7_3_14' => '\OpenAPI\Client\Model\InlineResponse200197316',
        '_7_3_6' => '\OpenAPI\Client\Model\InlineResponse20019734',
        '_7_3_1' => '\OpenAPI\Client\Model\InlineResponse20019710',
        '_7_3_19' => '\OpenAPI\Client\Model\InlineResponse200197316',
        '_7_3_15' => '\OpenAPI\Client\Model\InlineResponse200197316',
        '_7_3_10' => '\OpenAPI\Client\Model\InlineResponse20019734',
        '_7_3_7' => '\OpenAPI\Client\Model\InlineResponse20019734',
        '_7_3_21' => '\OpenAPI\Client\Model\InlineResponse200197316',
        '_7_3_3' => '\OpenAPI\Client\Model\InlineResponse20019710',
        '_7_3_18' => '\OpenAPI\Client\Model\InlineResponse200197316'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        '_7_3_4' => null,
        '_7_3_11' => null,
        '_7_3_16' => null,
        '_7_1_0' => null,
        '_7_3_22' => null,
        '_7_3_23' => null,
        '_7_3_8' => null,
        '_7_3_12' => null,
        '_7_2_1' => null,
        '_7_3_13' => null,
        '_7_0_0' => null,
        '_7_3_17' => null,
        '_7_3_5' => null,
        '_7_3_20' => null,
        '_7_3_2' => null,
        '_7_3_9' => null,
        '_7_3_24' => null,
        '_7_2_0' => null,
        '_7_3_0' => null,
        '_7_3_14' => null,
        '_7_3_6' => null,
        '_7_3_1' => null,
        '_7_3_19' => null,
        '_7_3_15' => null,
        '_7_3_10' => null,
        '_7_3_7' => null,
        '_7_3_21' => null,
        '_7_3_3' => null,
        '_7_3_18' => null
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
        '_7_3_4' => '7.3.4',
        '_7_3_11' => '7.3.11',
        '_7_3_16' => '7.3.16',
        '_7_1_0' => '7.1.0',
        '_7_3_22' => '7.3.22',
        '_7_3_23' => '7.3.23',
        '_7_3_8' => '7.3.8',
        '_7_3_12' => '7.3.12',
        '_7_2_1' => '7.2.1',
        '_7_3_13' => '7.3.13',
        '_7_0_0' => '7.0.0',
        '_7_3_17' => '7.3.17',
        '_7_3_5' => '7.3.5',
        '_7_3_20' => '7.3.20',
        '_7_3_2' => '7.3.2',
        '_7_3_9' => '7.3.9',
        '_7_3_24' => '7.3.24',
        '_7_2_0' => '7.2.0',
        '_7_3_0' => '7.3.0',
        '_7_3_14' => '7.3.14',
        '_7_3_6' => '7.3.6',
        '_7_3_1' => '7.3.1',
        '_7_3_19' => '7.3.19',
        '_7_3_15' => '7.3.15',
        '_7_3_10' => '7.3.10',
        '_7_3_7' => '7.3.7',
        '_7_3_21' => '7.3.21',
        '_7_3_3' => '7.3.3',
        '_7_3_18' => '7.3.18'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        '_7_3_4' => 'set734',
        '_7_3_11' => 'set7311',
        '_7_3_16' => 'set7316',
        '_7_1_0' => 'set710',
        '_7_3_22' => 'set7322',
        '_7_3_23' => 'set7323',
        '_7_3_8' => 'set738',
        '_7_3_12' => 'set7312',
        '_7_2_1' => 'set721',
        '_7_3_13' => 'set7313',
        '_7_0_0' => 'set700',
        '_7_3_17' => 'set7317',
        '_7_3_5' => 'set735',
        '_7_3_20' => 'set7320',
        '_7_3_2' => 'set732',
        '_7_3_9' => 'set739',
        '_7_3_24' => 'set7324',
        '_7_2_0' => 'set720',
        '_7_3_0' => 'set730',
        '_7_3_14' => 'set7314',
        '_7_3_6' => 'set736',
        '_7_3_1' => 'set731',
        '_7_3_19' => 'set7319',
        '_7_3_15' => 'set7315',
        '_7_3_10' => 'set7310',
        '_7_3_7' => 'set737',
        '_7_3_21' => 'set7321',
        '_7_3_3' => 'set733',
        '_7_3_18' => 'set7318'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        '_7_3_4' => 'get734',
        '_7_3_11' => 'get7311',
        '_7_3_16' => 'get7316',
        '_7_1_0' => 'get710',
        '_7_3_22' => 'get7322',
        '_7_3_23' => 'get7323',
        '_7_3_8' => 'get738',
        '_7_3_12' => 'get7312',
        '_7_2_1' => 'get721',
        '_7_3_13' => 'get7313',
        '_7_0_0' => 'get700',
        '_7_3_17' => 'get7317',
        '_7_3_5' => 'get735',
        '_7_3_20' => 'get7320',
        '_7_3_2' => 'get732',
        '_7_3_9' => 'get739',
        '_7_3_24' => 'get7324',
        '_7_2_0' => 'get720',
        '_7_3_0' => 'get730',
        '_7_3_14' => 'get7314',
        '_7_3_6' => 'get736',
        '_7_3_1' => 'get731',
        '_7_3_19' => 'get7319',
        '_7_3_15' => 'get7315',
        '_7_3_10' => 'get7310',
        '_7_3_7' => 'get737',
        '_7_3_21' => 'get7321',
        '_7_3_3' => 'get733',
        '_7_3_18' => 'get7318'
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
        $this->container['_7_3_4'] = isset($data['_7_3_4']) ? $data['_7_3_4'] : null;
        $this->container['_7_3_11'] = isset($data['_7_3_11']) ? $data['_7_3_11'] : null;
        $this->container['_7_3_16'] = isset($data['_7_3_16']) ? $data['_7_3_16'] : null;
        $this->container['_7_1_0'] = isset($data['_7_1_0']) ? $data['_7_1_0'] : null;
        $this->container['_7_3_22'] = isset($data['_7_3_22']) ? $data['_7_3_22'] : null;
        $this->container['_7_3_23'] = isset($data['_7_3_23']) ? $data['_7_3_23'] : null;
        $this->container['_7_3_8'] = isset($data['_7_3_8']) ? $data['_7_3_8'] : null;
        $this->container['_7_3_12'] = isset($data['_7_3_12']) ? $data['_7_3_12'] : null;
        $this->container['_7_2_1'] = isset($data['_7_2_1']) ? $data['_7_2_1'] : null;
        $this->container['_7_3_13'] = isset($data['_7_3_13']) ? $data['_7_3_13'] : null;
        $this->container['_7_0_0'] = isset($data['_7_0_0']) ? $data['_7_0_0'] : null;
        $this->container['_7_3_17'] = isset($data['_7_3_17']) ? $data['_7_3_17'] : null;
        $this->container['_7_3_5'] = isset($data['_7_3_5']) ? $data['_7_3_5'] : null;
        $this->container['_7_3_20'] = isset($data['_7_3_20']) ? $data['_7_3_20'] : null;
        $this->container['_7_3_2'] = isset($data['_7_3_2']) ? $data['_7_3_2'] : null;
        $this->container['_7_3_9'] = isset($data['_7_3_9']) ? $data['_7_3_9'] : null;
        $this->container['_7_3_24'] = isset($data['_7_3_24']) ? $data['_7_3_24'] : null;
        $this->container['_7_2_0'] = isset($data['_7_2_0']) ? $data['_7_2_0'] : null;
        $this->container['_7_3_0'] = isset($data['_7_3_0']) ? $data['_7_3_0'] : null;
        $this->container['_7_3_14'] = isset($data['_7_3_14']) ? $data['_7_3_14'] : null;
        $this->container['_7_3_6'] = isset($data['_7_3_6']) ? $data['_7_3_6'] : null;
        $this->container['_7_3_1'] = isset($data['_7_3_1']) ? $data['_7_3_1'] : null;
        $this->container['_7_3_19'] = isset($data['_7_3_19']) ? $data['_7_3_19'] : null;
        $this->container['_7_3_15'] = isset($data['_7_3_15']) ? $data['_7_3_15'] : null;
        $this->container['_7_3_10'] = isset($data['_7_3_10']) ? $data['_7_3_10'] : null;
        $this->container['_7_3_7'] = isset($data['_7_3_7']) ? $data['_7_3_7'] : null;
        $this->container['_7_3_21'] = isset($data['_7_3_21']) ? $data['_7_3_21'] : null;
        $this->container['_7_3_3'] = isset($data['_7_3_3']) ? $data['_7_3_3'] : null;
        $this->container['_7_3_18'] = isset($data['_7_3_18']) ? $data['_7_3_18'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['_7_3_4'] === null) {
            $invalidProperties[] = "'_7_3_4' can't be null";
        }
        if ($this->container['_7_3_11'] === null) {
            $invalidProperties[] = "'_7_3_11' can't be null";
        }
        if ($this->container['_7_3_16'] === null) {
            $invalidProperties[] = "'_7_3_16' can't be null";
        }
        if ($this->container['_7_1_0'] === null) {
            $invalidProperties[] = "'_7_1_0' can't be null";
        }
        if ($this->container['_7_3_22'] === null) {
            $invalidProperties[] = "'_7_3_22' can't be null";
        }
        if ($this->container['_7_3_23'] === null) {
            $invalidProperties[] = "'_7_3_23' can't be null";
        }
        if ($this->container['_7_3_8'] === null) {
            $invalidProperties[] = "'_7_3_8' can't be null";
        }
        if ($this->container['_7_3_12'] === null) {
            $invalidProperties[] = "'_7_3_12' can't be null";
        }
        if ($this->container['_7_2_1'] === null) {
            $invalidProperties[] = "'_7_2_1' can't be null";
        }
        if ($this->container['_7_3_13'] === null) {
            $invalidProperties[] = "'_7_3_13' can't be null";
        }
        if ($this->container['_7_0_0'] === null) {
            $invalidProperties[] = "'_7_0_0' can't be null";
        }
        if ($this->container['_7_3_17'] === null) {
            $invalidProperties[] = "'_7_3_17' can't be null";
        }
        if ($this->container['_7_3_5'] === null) {
            $invalidProperties[] = "'_7_3_5' can't be null";
        }
        if ($this->container['_7_3_20'] === null) {
            $invalidProperties[] = "'_7_3_20' can't be null";
        }
        if ($this->container['_7_3_2'] === null) {
            $invalidProperties[] = "'_7_3_2' can't be null";
        }
        if ($this->container['_7_3_9'] === null) {
            $invalidProperties[] = "'_7_3_9' can't be null";
        }
        if ($this->container['_7_3_24'] === null) {
            $invalidProperties[] = "'_7_3_24' can't be null";
        }
        if ($this->container['_7_2_0'] === null) {
            $invalidProperties[] = "'_7_2_0' can't be null";
        }
        if ($this->container['_7_3_0'] === null) {
            $invalidProperties[] = "'_7_3_0' can't be null";
        }
        if ($this->container['_7_3_14'] === null) {
            $invalidProperties[] = "'_7_3_14' can't be null";
        }
        if ($this->container['_7_3_6'] === null) {
            $invalidProperties[] = "'_7_3_6' can't be null";
        }
        if ($this->container['_7_3_1'] === null) {
            $invalidProperties[] = "'_7_3_1' can't be null";
        }
        if ($this->container['_7_3_19'] === null) {
            $invalidProperties[] = "'_7_3_19' can't be null";
        }
        if ($this->container['_7_3_15'] === null) {
            $invalidProperties[] = "'_7_3_15' can't be null";
        }
        if ($this->container['_7_3_10'] === null) {
            $invalidProperties[] = "'_7_3_10' can't be null";
        }
        if ($this->container['_7_3_7'] === null) {
            $invalidProperties[] = "'_7_3_7' can't be null";
        }
        if ($this->container['_7_3_21'] === null) {
            $invalidProperties[] = "'_7_3_21' can't be null";
        }
        if ($this->container['_7_3_3'] === null) {
            $invalidProperties[] = "'_7_3_3' can't be null";
        }
        if ($this->container['_7_3_18'] === null) {
            $invalidProperties[] = "'_7_3_18' can't be null";
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
     * Gets _7_3_4
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019734
     */
    public function get734()
    {
        return $this->container['_7_3_4'];
    }

    /**
     * Sets _7_3_4
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019734 $_7_3_4 _7_3_4
     *
     * @return $this
     */
    public function set734($_7_3_4)
    {
        $this->container['_7_3_4'] = $_7_3_4;

        return $this;
    }

    /**
     * Gets _7_3_11
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019734
     */
    public function get7311()
    {
        return $this->container['_7_3_11'];
    }

    /**
     * Sets _7_3_11
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019734 $_7_3_11 _7_3_11
     *
     * @return $this
     */
    public function set7311($_7_3_11)
    {
        $this->container['_7_3_11'] = $_7_3_11;

        return $this;
    }

    /**
     * Gets _7_3_16
     *
     * @return \OpenAPI\Client\Model\InlineResponse200197316
     */
    public function get7316()
    {
        return $this->container['_7_3_16'];
    }

    /**
     * Sets _7_3_16
     *
     * @param \OpenAPI\Client\Model\InlineResponse200197316 $_7_3_16 _7_3_16
     *
     * @return $this
     */
    public function set7316($_7_3_16)
    {
        $this->container['_7_3_16'] = $_7_3_16;

        return $this;
    }

    /**
     * Gets _7_1_0
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019710
     */
    public function get710()
    {
        return $this->container['_7_1_0'];
    }

    /**
     * Sets _7_1_0
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019710 $_7_1_0 _7_1_0
     *
     * @return $this
     */
    public function set710($_7_1_0)
    {
        $this->container['_7_1_0'] = $_7_1_0;

        return $this;
    }

    /**
     * Gets _7_3_22
     *
     * @return \OpenAPI\Client\Model\InlineResponse200197316
     */
    public function get7322()
    {
        return $this->container['_7_3_22'];
    }

    /**
     * Sets _7_3_22
     *
     * @param \OpenAPI\Client\Model\InlineResponse200197316 $_7_3_22 _7_3_22
     *
     * @return $this
     */
    public function set7322($_7_3_22)
    {
        $this->container['_7_3_22'] = $_7_3_22;

        return $this;
    }

    /**
     * Gets _7_3_23
     *
     * @return \OpenAPI\Client\Model\InlineResponse200197316
     */
    public function get7323()
    {
        return $this->container['_7_3_23'];
    }

    /**
     * Sets _7_3_23
     *
     * @param \OpenAPI\Client\Model\InlineResponse200197316 $_7_3_23 _7_3_23
     *
     * @return $this
     */
    public function set7323($_7_3_23)
    {
        $this->container['_7_3_23'] = $_7_3_23;

        return $this;
    }

    /**
     * Gets _7_3_8
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019734
     */
    public function get738()
    {
        return $this->container['_7_3_8'];
    }

    /**
     * Sets _7_3_8
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019734 $_7_3_8 _7_3_8
     *
     * @return $this
     */
    public function set738($_7_3_8)
    {
        $this->container['_7_3_8'] = $_7_3_8;

        return $this;
    }

    /**
     * Gets _7_3_12
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019734
     */
    public function get7312()
    {
        return $this->container['_7_3_12'];
    }

    /**
     * Sets _7_3_12
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019734 $_7_3_12 _7_3_12
     *
     * @return $this
     */
    public function set7312($_7_3_12)
    {
        $this->container['_7_3_12'] = $_7_3_12;

        return $this;
    }

    /**
     * Gets _7_2_1
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019710
     */
    public function get721()
    {
        return $this->container['_7_2_1'];
    }

    /**
     * Sets _7_2_1
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019710 $_7_2_1 _7_2_1
     *
     * @return $this
     */
    public function set721($_7_2_1)
    {
        $this->container['_7_2_1'] = $_7_2_1;

        return $this;
    }

    /**
     * Gets _7_3_13
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019734
     */
    public function get7313()
    {
        return $this->container['_7_3_13'];
    }

    /**
     * Sets _7_3_13
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019734 $_7_3_13 _7_3_13
     *
     * @return $this
     */
    public function set7313($_7_3_13)
    {
        $this->container['_7_3_13'] = $_7_3_13;

        return $this;
    }

    /**
     * Gets _7_0_0
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019710
     */
    public function get700()
    {
        return $this->container['_7_0_0'];
    }

    /**
     * Sets _7_0_0
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019710 $_7_0_0 _7_0_0
     *
     * @return $this
     */
    public function set700($_7_0_0)
    {
        $this->container['_7_0_0'] = $_7_0_0;

        return $this;
    }

    /**
     * Gets _7_3_17
     *
     * @return \OpenAPI\Client\Model\InlineResponse200197316
     */
    public function get7317()
    {
        return $this->container['_7_3_17'];
    }

    /**
     * Sets _7_3_17
     *
     * @param \OpenAPI\Client\Model\InlineResponse200197316 $_7_3_17 _7_3_17
     *
     * @return $this
     */
    public function set7317($_7_3_17)
    {
        $this->container['_7_3_17'] = $_7_3_17;

        return $this;
    }

    /**
     * Gets _7_3_5
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019734
     */
    public function get735()
    {
        return $this->container['_7_3_5'];
    }

    /**
     * Sets _7_3_5
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019734 $_7_3_5 _7_3_5
     *
     * @return $this
     */
    public function set735($_7_3_5)
    {
        $this->container['_7_3_5'] = $_7_3_5;

        return $this;
    }

    /**
     * Gets _7_3_20
     *
     * @return \OpenAPI\Client\Model\InlineResponse200197316
     */
    public function get7320()
    {
        return $this->container['_7_3_20'];
    }

    /**
     * Sets _7_3_20
     *
     * @param \OpenAPI\Client\Model\InlineResponse200197316 $_7_3_20 _7_3_20
     *
     * @return $this
     */
    public function set7320($_7_3_20)
    {
        $this->container['_7_3_20'] = $_7_3_20;

        return $this;
    }

    /**
     * Gets _7_3_2
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019710
     */
    public function get732()
    {
        return $this->container['_7_3_2'];
    }

    /**
     * Sets _7_3_2
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019710 $_7_3_2 _7_3_2
     *
     * @return $this
     */
    public function set732($_7_3_2)
    {
        $this->container['_7_3_2'] = $_7_3_2;

        return $this;
    }

    /**
     * Gets _7_3_9
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019734
     */
    public function get739()
    {
        return $this->container['_7_3_9'];
    }

    /**
     * Sets _7_3_9
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019734 $_7_3_9 _7_3_9
     *
     * @return $this
     */
    public function set739($_7_3_9)
    {
        $this->container['_7_3_9'] = $_7_3_9;

        return $this;
    }

    /**
     * Gets _7_3_24
     *
     * @return \OpenAPI\Client\Model\InlineResponse200197316
     */
    public function get7324()
    {
        return $this->container['_7_3_24'];
    }

    /**
     * Sets _7_3_24
     *
     * @param \OpenAPI\Client\Model\InlineResponse200197316 $_7_3_24 _7_3_24
     *
     * @return $this
     */
    public function set7324($_7_3_24)
    {
        $this->container['_7_3_24'] = $_7_3_24;

        return $this;
    }

    /**
     * Gets _7_2_0
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019710
     */
    public function get720()
    {
        return $this->container['_7_2_0'];
    }

    /**
     * Sets _7_2_0
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019710 $_7_2_0 _7_2_0
     *
     * @return $this
     */
    public function set720($_7_2_0)
    {
        $this->container['_7_2_0'] = $_7_2_0;

        return $this;
    }

    /**
     * Gets _7_3_0
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019710
     */
    public function get730()
    {
        return $this->container['_7_3_0'];
    }

    /**
     * Sets _7_3_0
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019710 $_7_3_0 _7_3_0
     *
     * @return $this
     */
    public function set730($_7_3_0)
    {
        $this->container['_7_3_0'] = $_7_3_0;

        return $this;
    }

    /**
     * Gets _7_3_14
     *
     * @return \OpenAPI\Client\Model\InlineResponse200197316
     */
    public function get7314()
    {
        return $this->container['_7_3_14'];
    }

    /**
     * Sets _7_3_14
     *
     * @param \OpenAPI\Client\Model\InlineResponse200197316 $_7_3_14 _7_3_14
     *
     * @return $this
     */
    public function set7314($_7_3_14)
    {
        $this->container['_7_3_14'] = $_7_3_14;

        return $this;
    }

    /**
     * Gets _7_3_6
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019734
     */
    public function get736()
    {
        return $this->container['_7_3_6'];
    }

    /**
     * Sets _7_3_6
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019734 $_7_3_6 _7_3_6
     *
     * @return $this
     */
    public function set736($_7_3_6)
    {
        $this->container['_7_3_6'] = $_7_3_6;

        return $this;
    }

    /**
     * Gets _7_3_1
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019710
     */
    public function get731()
    {
        return $this->container['_7_3_1'];
    }

    /**
     * Sets _7_3_1
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019710 $_7_3_1 _7_3_1
     *
     * @return $this
     */
    public function set731($_7_3_1)
    {
        $this->container['_7_3_1'] = $_7_3_1;

        return $this;
    }

    /**
     * Gets _7_3_19
     *
     * @return \OpenAPI\Client\Model\InlineResponse200197316
     */
    public function get7319()
    {
        return $this->container['_7_3_19'];
    }

    /**
     * Sets _7_3_19
     *
     * @param \OpenAPI\Client\Model\InlineResponse200197316 $_7_3_19 _7_3_19
     *
     * @return $this
     */
    public function set7319($_7_3_19)
    {
        $this->container['_7_3_19'] = $_7_3_19;

        return $this;
    }

    /**
     * Gets _7_3_15
     *
     * @return \OpenAPI\Client\Model\InlineResponse200197316
     */
    public function get7315()
    {
        return $this->container['_7_3_15'];
    }

    /**
     * Sets _7_3_15
     *
     * @param \OpenAPI\Client\Model\InlineResponse200197316 $_7_3_15 _7_3_15
     *
     * @return $this
     */
    public function set7315($_7_3_15)
    {
        $this->container['_7_3_15'] = $_7_3_15;

        return $this;
    }

    /**
     * Gets _7_3_10
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019734
     */
    public function get7310()
    {
        return $this->container['_7_3_10'];
    }

    /**
     * Sets _7_3_10
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019734 $_7_3_10 _7_3_10
     *
     * @return $this
     */
    public function set7310($_7_3_10)
    {
        $this->container['_7_3_10'] = $_7_3_10;

        return $this;
    }

    /**
     * Gets _7_3_7
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019734
     */
    public function get737()
    {
        return $this->container['_7_3_7'];
    }

    /**
     * Sets _7_3_7
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019734 $_7_3_7 _7_3_7
     *
     * @return $this
     */
    public function set737($_7_3_7)
    {
        $this->container['_7_3_7'] = $_7_3_7;

        return $this;
    }

    /**
     * Gets _7_3_21
     *
     * @return \OpenAPI\Client\Model\InlineResponse200197316
     */
    public function get7321()
    {
        return $this->container['_7_3_21'];
    }

    /**
     * Sets _7_3_21
     *
     * @param \OpenAPI\Client\Model\InlineResponse200197316 $_7_3_21 _7_3_21
     *
     * @return $this
     */
    public function set7321($_7_3_21)
    {
        $this->container['_7_3_21'] = $_7_3_21;

        return $this;
    }

    /**
     * Gets _7_3_3
     *
     * @return \OpenAPI\Client\Model\InlineResponse20019710
     */
    public function get733()
    {
        return $this->container['_7_3_3'];
    }

    /**
     * Sets _7_3_3
     *
     * @param \OpenAPI\Client\Model\InlineResponse20019710 $_7_3_3 _7_3_3
     *
     * @return $this
     */
    public function set733($_7_3_3)
    {
        $this->container['_7_3_3'] = $_7_3_3;

        return $this;
    }

    /**
     * Gets _7_3_18
     *
     * @return \OpenAPI\Client\Model\InlineResponse200197316
     */
    public function get7318()
    {
        return $this->container['_7_3_18'];
    }

    /**
     * Sets _7_3_18
     *
     * @param \OpenAPI\Client\Model\InlineResponse200197316 $_7_3_18 _7_3_18
     *
     * @return $this
     */
    public function set7318($_7_3_18)
    {
        $this->container['_7_3_18'] = $_7_3_18;

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


