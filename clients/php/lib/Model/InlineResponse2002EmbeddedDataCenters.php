<?php
/**
 * InlineResponse2002EmbeddedDataCenters
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
 * InlineResponse2002EmbeddedDataCenters Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class InlineResponse2002EmbeddedDataCenters implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'inline_response_200_2__embedded_dataCenters';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'city' => 'AnyType',
        'continent_code' => 'AnyType',
        'state_code' => 'AnyType',
        'lng' => 'float',
        'provider' => 'string',
        'state_name' => 'AnyType',
        'continent_name' => 'AnyType',
        'isp' => 'AnyType',
        'location_code' => 'string',
        'country_name' => 'AnyType',
        'id' => 'string',
        'country_code' => 'AnyType',
        'address' => 'AnyType',
        'location_name' => 'string',
        'lat' => 'float',
        '_links' => '\OpenAPI\Client\Model\InlineResponse2002EmbeddedLinks'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'city' => null,
        'continent_code' => null,
        'state_code' => null,
        'lng' => null,
        'provider' => null,
        'state_name' => null,
        'continent_name' => null,
        'isp' => null,
        'location_code' => null,
        'country_name' => null,
        'id' => null,
        'country_code' => null,
        'address' => null,
        'location_name' => null,
        'lat' => null,
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
        'city' => 'city',
        'continent_code' => 'continentCode',
        'state_code' => 'stateCode',
        'lng' => 'lng',
        'provider' => 'provider',
        'state_name' => 'stateName',
        'continent_name' => 'continentName',
        'isp' => 'isp',
        'location_code' => 'locationCode',
        'country_name' => 'countryName',
        'id' => 'id',
        'country_code' => 'countryCode',
        'address' => 'address',
        'location_name' => 'locationName',
        'lat' => 'lat',
        '_links' => '_links'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'city' => 'setCity',
        'continent_code' => 'setContinentCode',
        'state_code' => 'setStateCode',
        'lng' => 'setLng',
        'provider' => 'setProvider',
        'state_name' => 'setStateName',
        'continent_name' => 'setContinentName',
        'isp' => 'setIsp',
        'location_code' => 'setLocationCode',
        'country_name' => 'setCountryName',
        'id' => 'setId',
        'country_code' => 'setCountryCode',
        'address' => 'setAddress',
        'location_name' => 'setLocationName',
        'lat' => 'setLat',
        '_links' => 'setLinks'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'city' => 'getCity',
        'continent_code' => 'getContinentCode',
        'state_code' => 'getStateCode',
        'lng' => 'getLng',
        'provider' => 'getProvider',
        'state_name' => 'getStateName',
        'continent_name' => 'getContinentName',
        'isp' => 'getIsp',
        'location_code' => 'getLocationCode',
        'country_name' => 'getCountryName',
        'id' => 'getId',
        'country_code' => 'getCountryCode',
        'address' => 'getAddress',
        'location_name' => 'getLocationName',
        'lat' => 'getLat',
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
        $this->container['city'] = isset($data['city']) ? $data['city'] : null;
        $this->container['continent_code'] = isset($data['continent_code']) ? $data['continent_code'] : null;
        $this->container['state_code'] = isset($data['state_code']) ? $data['state_code'] : null;
        $this->container['lng'] = isset($data['lng']) ? $data['lng'] : null;
        $this->container['provider'] = isset($data['provider']) ? $data['provider'] : null;
        $this->container['state_name'] = isset($data['state_name']) ? $data['state_name'] : null;
        $this->container['continent_name'] = isset($data['continent_name']) ? $data['continent_name'] : null;
        $this->container['isp'] = isset($data['isp']) ? $data['isp'] : null;
        $this->container['location_code'] = isset($data['location_code']) ? $data['location_code'] : null;
        $this->container['country_name'] = isset($data['country_name']) ? $data['country_name'] : null;
        $this->container['id'] = isset($data['id']) ? $data['id'] : null;
        $this->container['country_code'] = isset($data['country_code']) ? $data['country_code'] : null;
        $this->container['address'] = isset($data['address']) ? $data['address'] : null;
        $this->container['location_name'] = isset($data['location_name']) ? $data['location_name'] : null;
        $this->container['lat'] = isset($data['lat']) ? $data['lat'] : null;
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

        if ($this->container['city'] === null) {
            $invalidProperties[] = "'city' can't be null";
        }
        if ($this->container['continent_code'] === null) {
            $invalidProperties[] = "'continent_code' can't be null";
        }
        if ($this->container['state_code'] === null) {
            $invalidProperties[] = "'state_code' can't be null";
        }
        if ($this->container['lng'] === null) {
            $invalidProperties[] = "'lng' can't be null";
        }
        if ($this->container['provider'] === null) {
            $invalidProperties[] = "'provider' can't be null";
        }
        if ($this->container['state_name'] === null) {
            $invalidProperties[] = "'state_name' can't be null";
        }
        if ($this->container['continent_name'] === null) {
            $invalidProperties[] = "'continent_name' can't be null";
        }
        if ($this->container['isp'] === null) {
            $invalidProperties[] = "'isp' can't be null";
        }
        if ($this->container['location_code'] === null) {
            $invalidProperties[] = "'location_code' can't be null";
        }
        if ($this->container['country_name'] === null) {
            $invalidProperties[] = "'country_name' can't be null";
        }
        if ($this->container['id'] === null) {
            $invalidProperties[] = "'id' can't be null";
        }
        if ($this->container['country_code'] === null) {
            $invalidProperties[] = "'country_code' can't be null";
        }
        if ($this->container['address'] === null) {
            $invalidProperties[] = "'address' can't be null";
        }
        if ($this->container['location_name'] === null) {
            $invalidProperties[] = "'location_name' can't be null";
        }
        if ($this->container['lat'] === null) {
            $invalidProperties[] = "'lat' can't be null";
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
     * Gets city
     *
     * @return AnyType
     */
    public function getCity()
    {
        return $this->container['city'];
    }

    /**
     * Sets city
     *
     * @param AnyType $city city
     *
     * @return $this
     */
    public function setCity($city)
    {
        $this->container['city'] = $city;

        return $this;
    }

    /**
     * Gets continent_code
     *
     * @return AnyType
     */
    public function getContinentCode()
    {
        return $this->container['continent_code'];
    }

    /**
     * Sets continent_code
     *
     * @param AnyType $continent_code continent_code
     *
     * @return $this
     */
    public function setContinentCode($continent_code)
    {
        $this->container['continent_code'] = $continent_code;

        return $this;
    }

    /**
     * Gets state_code
     *
     * @return AnyType
     */
    public function getStateCode()
    {
        return $this->container['state_code'];
    }

    /**
     * Sets state_code
     *
     * @param AnyType $state_code state_code
     *
     * @return $this
     */
    public function setStateCode($state_code)
    {
        $this->container['state_code'] = $state_code;

        return $this;
    }

    /**
     * Gets lng
     *
     * @return float
     */
    public function getLng()
    {
        return $this->container['lng'];
    }

    /**
     * Sets lng
     *
     * @param float $lng lng
     *
     * @return $this
     */
    public function setLng($lng)
    {
        $this->container['lng'] = $lng;

        return $this;
    }

    /**
     * Gets provider
     *
     * @return string
     */
    public function getProvider()
    {
        return $this->container['provider'];
    }

    /**
     * Sets provider
     *
     * @param string $provider provider
     *
     * @return $this
     */
    public function setProvider($provider)
    {
        $this->container['provider'] = $provider;

        return $this;
    }

    /**
     * Gets state_name
     *
     * @return AnyType
     */
    public function getStateName()
    {
        return $this->container['state_name'];
    }

    /**
     * Sets state_name
     *
     * @param AnyType $state_name state_name
     *
     * @return $this
     */
    public function setStateName($state_name)
    {
        $this->container['state_name'] = $state_name;

        return $this;
    }

    /**
     * Gets continent_name
     *
     * @return AnyType
     */
    public function getContinentName()
    {
        return $this->container['continent_name'];
    }

    /**
     * Sets continent_name
     *
     * @param AnyType $continent_name continent_name
     *
     * @return $this
     */
    public function setContinentName($continent_name)
    {
        $this->container['continent_name'] = $continent_name;

        return $this;
    }

    /**
     * Gets isp
     *
     * @return AnyType
     */
    public function getIsp()
    {
        return $this->container['isp'];
    }

    /**
     * Sets isp
     *
     * @param AnyType $isp isp
     *
     * @return $this
     */
    public function setIsp($isp)
    {
        $this->container['isp'] = $isp;

        return $this;
    }

    /**
     * Gets location_code
     *
     * @return string
     */
    public function getLocationCode()
    {
        return $this->container['location_code'];
    }

    /**
     * Sets location_code
     *
     * @param string $location_code location_code
     *
     * @return $this
     */
    public function setLocationCode($location_code)
    {
        $this->container['location_code'] = $location_code;

        return $this;
    }

    /**
     * Gets country_name
     *
     * @return AnyType
     */
    public function getCountryName()
    {
        return $this->container['country_name'];
    }

    /**
     * Sets country_name
     *
     * @param AnyType $country_name country_name
     *
     * @return $this
     */
    public function setCountryName($country_name)
    {
        $this->container['country_name'] = $country_name;

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
     * Gets country_code
     *
     * @return AnyType
     */
    public function getCountryCode()
    {
        return $this->container['country_code'];
    }

    /**
     * Sets country_code
     *
     * @param AnyType $country_code country_code
     *
     * @return $this
     */
    public function setCountryCode($country_code)
    {
        $this->container['country_code'] = $country_code;

        return $this;
    }

    /**
     * Gets address
     *
     * @return AnyType
     */
    public function getAddress()
    {
        return $this->container['address'];
    }

    /**
     * Sets address
     *
     * @param AnyType $address address
     *
     * @return $this
     */
    public function setAddress($address)
    {
        $this->container['address'] = $address;

        return $this;
    }

    /**
     * Gets location_name
     *
     * @return string
     */
    public function getLocationName()
    {
        return $this->container['location_name'];
    }

    /**
     * Sets location_name
     *
     * @param string $location_name location_name
     *
     * @return $this
     */
    public function setLocationName($location_name)
    {
        $this->container['location_name'] = $location_name;

        return $this;
    }

    /**
     * Gets lat
     *
     * @return float
     */
    public function getLat()
    {
        return $this->container['lat'];
    }

    /**
     * Sets lat
     *
     * @param float $lat lat
     *
     * @return $this
     */
    public function setLat($lat)
    {
        $this->container['lat'] = $lat;

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


