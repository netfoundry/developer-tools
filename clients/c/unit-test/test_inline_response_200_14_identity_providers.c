#ifndef inline_response_200_14_identity_providers_TEST
#define inline_response_200_14_identity_providers_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_14_identity_providers_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_14_identity_providers.h"
inline_response_200_14_identity_providers_t* instantiate_inline_response_200_14_identity_providers(int include_optional);

#include "test_inline_response_200_14_updated_at.c"


inline_response_200_14_identity_providers_t* instantiate_inline_response_200_14_identity_providers(int include_optional) {
  inline_response_200_14_identity_providers_t* inline_response_200_14_identity_providers = NULL;
  if (include_optional) {
    inline_response_200_14_identity_providers = inline_response_200_14_identity_providers_create(
      null,
      "0",
      null,
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_inline_response_200_14_updated_at(0),
      "0",
      1
    );
  } else {
    inline_response_200_14_identity_providers = inline_response_200_14_identity_providers_create(
      null,
      "0",
      null,
      "0",
      "0",
      "0",
      NULL,
      "0",
      1
    );
  }

  return inline_response_200_14_identity_providers;
}


#ifdef inline_response_200_14_identity_providers_MAIN

void test_inline_response_200_14_identity_providers(int include_optional) {
    inline_response_200_14_identity_providers_t* inline_response_200_14_identity_providers_1 = instantiate_inline_response_200_14_identity_providers(include_optional);

	cJSON* jsoninline_response_200_14_identity_providers_1 = inline_response_200_14_identity_providers_convertToJSON(inline_response_200_14_identity_providers_1);
	printf("inline_response_200_14_identity_providers :\n%s\n", cJSON_Print(jsoninline_response_200_14_identity_providers_1));
	inline_response_200_14_identity_providers_t* inline_response_200_14_identity_providers_2 = inline_response_200_14_identity_providers_parseFromJSON(jsoninline_response_200_14_identity_providers_1);
	cJSON* jsoninline_response_200_14_identity_providers_2 = inline_response_200_14_identity_providers_convertToJSON(inline_response_200_14_identity_providers_2);
	printf("repeating inline_response_200_14_identity_providers:\n%s\n", cJSON_Print(jsoninline_response_200_14_identity_providers_2));
}

int main() {
  test_inline_response_200_14_identity_providers(1);
  test_inline_response_200_14_identity_providers(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_14_identity_providers_MAIN
#endif // inline_response_200_14_identity_providers_TEST
