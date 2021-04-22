-module(openapi_inline_response_202_4_network_controller).

-export([encode/1]).

-export_type([openapi_inline_response_202_4_network_controller/0]).

-type openapi_inline_response_202_4_network_controller() ::
    #{ 'deletedAt' := openapi_any_type:openapi_any_type(),
       'networkId' := binary(),
       'name' := binary(),
       'updatedAt' := binary(),
       'provider' := binary(),
       'userData' := openapi_any_type:openapi_any_type(),
       'ownerIdentityId' := openapi_any_type:openapi_any_type(),
       'domainName' := binary(),
       'providerId' := binary(),
       'id' := binary(),
       'port' := integer(),
       'ipAddress' := binary(),
       'status' := binary(),
       'hostId' := binary(),
       'createdAt' := binary(),
       'deletedBy' := openapi_any_type:openapi_any_type(),
       'locationMetadataId' := binary(),
       'dataCenterId' := binary()
     }.

encode(#{ 'deletedAt' := DeletedAt,
          'networkId' := NetworkId,
          'name' := Name,
          'updatedAt' := UpdatedAt,
          'provider' := Provider,
          'userData' := UserData,
          'ownerIdentityId' := OwnerIdentityId,
          'domainName' := DomainName,
          'providerId' := ProviderId,
          'id' := Id,
          'port' := Port,
          'ipAddress' := IpAddress,
          'status' := Status,
          'hostId' := HostId,
          'createdAt' := CreatedAt,
          'deletedBy' := DeletedBy,
          'locationMetadataId' := LocationMetadataId,
          'dataCenterId' := DataCenterId
        }) ->
    #{ 'deletedAt' => DeletedAt,
       'networkId' => NetworkId,
       'name' => Name,
       'updatedAt' => UpdatedAt,
       'provider' => Provider,
       'userData' => UserData,
       'ownerIdentityId' => OwnerIdentityId,
       'domainName' => DomainName,
       'providerId' => ProviderId,
       'id' => Id,
       'port' => Port,
       'ipAddress' => IpAddress,
       'status' => Status,
       'hostId' => HostId,
       'createdAt' => CreatedAt,
       'deletedBy' => DeletedBy,
       'locationMetadataId' => LocationMetadataId,
       'dataCenterId' => DataCenterId
     }.
