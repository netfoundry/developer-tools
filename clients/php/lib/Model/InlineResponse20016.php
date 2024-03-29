<?php
/**
 * InlineResponse20016
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
 * InlineResponse20016 Class Doc Comment
 *
 * @category Class
 * @package  OpenAPI\Client
 * @author   OpenAPI Generator team
 * @link     https://openapi-generator.tech
 */
class InlineResponse20016 implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $openAPIModelName = 'inline_response_200_16';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPITypes = [
        'deleted_at' => 'AnyType',
        'name' => 'string',
        'updated_at' => 'AnyType',
        'email' => 'string',
        'description' => 'string',
        'aws_cognito_client_id' => 'string',
        'auth0_client_id' => 'AnyType',
        'id' => 'string',
        'contact_email' => 'string',
        'created_at' => '\OpenAPI\Client\Model\InlineResponse20014UpdatedAt',
        'organization_id' => 'string',
        'tenant_id' => 'string',
        'type' => 'string',
        'authentication_url' => 'string',
        'active' => 'bool'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $openAPIFormats = [
        'deleted_at' => null,
        'name' => null,
        'updated_at' => null,
        'email' => null,
        'description' => null,
        'aws_cognito_client_id' => null,
        'auth0_client_id' => null,
        'id' => null,
        'contact_email' => null,
        'created_at' => null,
        'organization_id' => null,
        'tenant_id' => null,
        'type' => null,
        'authentication_url' => null,
        'active' => null
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
        'deleted_at' => 'deletedAt',
        'name' => 'name',
        'updated_at' => 'updatedAt',
        'email' => 'email',
        'description' => 'description',
        'aws_cognito_client_id' => 'awsCognitoClientId',
        'auth0_client_id' => 'auth0ClientId',
        'id' => 'id',
        'contact_email' => 'contactEmail',
        'created_at' => 'createdAt',
        'organization_id' => 'organizationId',
        'tenant_id' => 'tenantId',
        'type' => 'type',
        'authentication_url' => 'authenticationUrl',
        'active' => 'active'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'deleted_at' => 'setDeletedAt',
        'name' => 'setName',
        'updated_at' => 'setUpdatedAt',
        'email' => 'setEmail',
        'description' => 'setDescription',
        'aws_cognito_client_id' => 'setAwsCognitoClientId',
        'auth0_client_id' => 'setAuth0ClientId',
        'id' => 'setId',
        'contact_email' => 'setContactEmail',
        'created_at' => 'setCreatedAt',
        'organization_id' => 'setOrganizationId',
        'tenant_id' => 'setTenantId',
        'type' => 'setType',
        'authentication_url' => 'setAuthenticationUrl',
        'active' => 'setActive'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'deleted_at' => 'getDeletedAt',
        'name' => 'getName',
        'updated_at' => 'getUpdatedAt',
        'email' => 'getEmail',
        'description' => 'getDescription',
        'aws_cognito_client_id' => 'getAwsCognitoClientId',
        'auth0_client_id' => 'getAuth0ClientId',
        'id' => 'getId',
        'contact_email' => 'getContactEmail',
        'created_at' => 'getCreatedAt',
        'organization_id' => 'getOrganizationId',
        'tenant_id' => 'getTenantId',
        'type' => 'getType',
        'authentication_url' => 'getAuthenticationUrl',
        'active' => 'getActive'
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
        $this->container['deleted_at'] = isset($data['deleted_at']) ? $data['deleted_at'] : null;
        $this->container['name'] = isset($data['name']) ? $data['name'] : null;
        $this->container['updated_at'] = isset($data['updated_at']) ? $data['updated_at'] : null;
        $this->container['email'] = isset($data['email']) ? $data['email'] : null;
        $this->container['description'] = isset($data['description']) ? $data['description'] : null;
        $this->container['aws_cognito_client_id'] = isset($data['aws_cognito_client_id']) ? $data['aws_cognito_client_id'] : null;
        $this->container['auth0_client_id'] = isset($data['auth0_client_id']) ? $data['auth0_client_id'] : null;
        $this->container['id'] = isset($data['id']) ? $data['id'] : null;
        $this->container['contact_email'] = isset($data['contact_email']) ? $data['contact_email'] : null;
        $this->container['created_at'] = isset($data['created_at']) ? $data['created_at'] : null;
        $this->container['organization_id'] = isset($data['organization_id']) ? $data['organization_id'] : null;
        $this->container['tenant_id'] = isset($data['tenant_id']) ? $data['tenant_id'] : null;
        $this->container['type'] = isset($data['type']) ? $data['type'] : null;
        $this->container['authentication_url'] = isset($data['authentication_url']) ? $data['authentication_url'] : null;
        $this->container['active'] = isset($data['active']) ? $data['active'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['deleted_at'] === null) {
            $invalidProperties[] = "'deleted_at' can't be null";
        }
        if ($this->container['name'] === null) {
            $invalidProperties[] = "'name' can't be null";
        }
        if ($this->container['updated_at'] === null) {
            $invalidProperties[] = "'updated_at' can't be null";
        }
        if ($this->container['email'] === null) {
            $invalidProperties[] = "'email' can't be null";
        }
        if ($this->container['description'] === null) {
            $invalidProperties[] = "'description' can't be null";
        }
        if ($this->container['aws_cognito_client_id'] === null) {
            $invalidProperties[] = "'aws_cognito_client_id' can't be null";
        }
        if ($this->container['auth0_client_id'] === null) {
            $invalidProperties[] = "'auth0_client_id' can't be null";
        }
        if ($this->container['id'] === null) {
            $invalidProperties[] = "'id' can't be null";
        }
        if ($this->container['contact_email'] === null) {
            $invalidProperties[] = "'contact_email' can't be null";
        }
        if ($this->container['created_at'] === null) {
            $invalidProperties[] = "'created_at' can't be null";
        }
        if ($this->container['organization_id'] === null) {
            $invalidProperties[] = "'organization_id' can't be null";
        }
        if ($this->container['tenant_id'] === null) {
            $invalidProperties[] = "'tenant_id' can't be null";
        }
        if ($this->container['type'] === null) {
            $invalidProperties[] = "'type' can't be null";
        }
        if ($this->container['authentication_url'] === null) {
            $invalidProperties[] = "'authentication_url' can't be null";
        }
        if ($this->container['active'] === null) {
            $invalidProperties[] = "'active' can't be null";
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
     * Gets deleted_at
     *
     * @return AnyType
     */
    public function getDeletedAt()
    {
        return $this->container['deleted_at'];
    }

    /**
     * Sets deleted_at
     *
     * @param AnyType $deleted_at deleted_at
     *
     * @return $this
     */
    public function setDeletedAt($deleted_at)
    {
        $this->container['deleted_at'] = $deleted_at;

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
     * Gets updated_at
     *
     * @return AnyType
     */
    public function getUpdatedAt()
    {
        return $this->container['updated_at'];
    }

    /**
     * Sets updated_at
     *
     * @param AnyType $updated_at updated_at
     *
     * @return $this
     */
    public function setUpdatedAt($updated_at)
    {
        $this->container['updated_at'] = $updated_at;

        return $this;
    }

    /**
     * Gets email
     *
     * @return string
     */
    public function getEmail()
    {
        return $this->container['email'];
    }

    /**
     * Sets email
     *
     * @param string $email email
     *
     * @return $this
     */
    public function setEmail($email)
    {
        $this->container['email'] = $email;

        return $this;
    }

    /**
     * Gets description
     *
     * @return string
     */
    public function getDescription()
    {
        return $this->container['description'];
    }

    /**
     * Sets description
     *
     * @param string $description description
     *
     * @return $this
     */
    public function setDescription($description)
    {
        $this->container['description'] = $description;

        return $this;
    }

    /**
     * Gets aws_cognito_client_id
     *
     * @return string
     */
    public function getAwsCognitoClientId()
    {
        return $this->container['aws_cognito_client_id'];
    }

    /**
     * Sets aws_cognito_client_id
     *
     * @param string $aws_cognito_client_id aws_cognito_client_id
     *
     * @return $this
     */
    public function setAwsCognitoClientId($aws_cognito_client_id)
    {
        $this->container['aws_cognito_client_id'] = $aws_cognito_client_id;

        return $this;
    }

    /**
     * Gets auth0_client_id
     *
     * @return AnyType
     */
    public function getAuth0ClientId()
    {
        return $this->container['auth0_client_id'];
    }

    /**
     * Sets auth0_client_id
     *
     * @param AnyType $auth0_client_id auth0_client_id
     *
     * @return $this
     */
    public function setAuth0ClientId($auth0_client_id)
    {
        $this->container['auth0_client_id'] = $auth0_client_id;

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
     * Gets contact_email
     *
     * @return string
     */
    public function getContactEmail()
    {
        return $this->container['contact_email'];
    }

    /**
     * Sets contact_email
     *
     * @param string $contact_email contact_email
     *
     * @return $this
     */
    public function setContactEmail($contact_email)
    {
        $this->container['contact_email'] = $contact_email;

        return $this;
    }

    /**
     * Gets created_at
     *
     * @return \OpenAPI\Client\Model\InlineResponse20014UpdatedAt
     */
    public function getCreatedAt()
    {
        return $this->container['created_at'];
    }

    /**
     * Sets created_at
     *
     * @param \OpenAPI\Client\Model\InlineResponse20014UpdatedAt $created_at created_at
     *
     * @return $this
     */
    public function setCreatedAt($created_at)
    {
        $this->container['created_at'] = $created_at;

        return $this;
    }

    /**
     * Gets organization_id
     *
     * @return string
     */
    public function getOrganizationId()
    {
        return $this->container['organization_id'];
    }

    /**
     * Sets organization_id
     *
     * @param string $organization_id organization_id
     *
     * @return $this
     */
    public function setOrganizationId($organization_id)
    {
        $this->container['organization_id'] = $organization_id;

        return $this;
    }

    /**
     * Gets tenant_id
     *
     * @return string
     */
    public function getTenantId()
    {
        return $this->container['tenant_id'];
    }

    /**
     * Sets tenant_id
     *
     * @param string $tenant_id tenant_id
     *
     * @return $this
     */
    public function setTenantId($tenant_id)
    {
        $this->container['tenant_id'] = $tenant_id;

        return $this;
    }

    /**
     * Gets type
     *
     * @return string
     */
    public function getType()
    {
        return $this->container['type'];
    }

    /**
     * Sets type
     *
     * @param string $type type
     *
     * @return $this
     */
    public function setType($type)
    {
        $this->container['type'] = $type;

        return $this;
    }

    /**
     * Gets authentication_url
     *
     * @return string
     */
    public function getAuthenticationUrl()
    {
        return $this->container['authentication_url'];
    }

    /**
     * Sets authentication_url
     *
     * @param string $authentication_url authentication_url
     *
     * @return $this
     */
    public function setAuthenticationUrl($authentication_url)
    {
        $this->container['authentication_url'] = $authentication_url;

        return $this;
    }

    /**
     * Gets active
     *
     * @return bool
     */
    public function getActive()
    {
        return $this->container['active'];
    }

    /**
     * Sets active
     *
     * @param bool $active active
     *
     * @return $this
     */
    public function setActive($active)
    {
        $this->container['active'] = $active;

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


