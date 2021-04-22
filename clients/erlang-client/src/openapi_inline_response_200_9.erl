-module(openapi_inline_response_200_9).

-export([encode/1]).

-export_type([openapi_inline_response_200_9/0]).

-type openapi_inline_response_200_9() ::
    #{ 'expiresAt' := binary(),
       'registrationKey' := binary()
     }.

encode(#{ 'expiresAt' := ExpiresAt,
          'registrationKey' := RegistrationKey
        }) ->
    #{ 'expiresAt' => ExpiresAt,
       'registrationKey' => RegistrationKey
     }.
