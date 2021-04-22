#ifndef inline_response_200_17__embedded_organizations_TEST
#define inline_response_200_17__embedded_organizations_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_17__embedded_organizations_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_17__embedded_organizations.h"
inline_response_200_17__embedded_organizations_t* instantiate_inline_response_200_17__embedded_organizations(int include_optional);

#include "test_inline_response_200_11__links.c"


inline_response_200_17__embedded_organizations_t* instantiate_inline_response_200_17__embedded_organizations(int include_optional) {
  inline_response_200_17__embedded_organizations_t* inline_response_200_17__embedded_organizations = NULL;
  if (include_optional) {
    inline_response_200_17__embedded_organizations = inline_response_200_17__embedded_organizations_create(
      "0",
      "0",
      "0",
      1,
      null,
      null,
      "0",
      "0",
      1,
      "0",
      1,
      1,
       // false, not to have infinite recursion
      instantiate_inline_response_200_11__links(0)
    );
  } else {
    inline_response_200_17__embedded_organizations = inline_response_200_17__embedded_organizations_create(
      "0",
      "0",
      "0",
      1,
      null,
      null,
      "0",
      "0",
      1,
      "0",
      1,
      1,
      NULL
    );
  }

  return inline_response_200_17__embedded_organizations;
}


#ifdef inline_response_200_17__embedded_organizations_MAIN

void test_inline_response_200_17__embedded_organizations(int include_optional) {
    inline_response_200_17__embedded_organizations_t* inline_response_200_17__embedded_organizations_1 = instantiate_inline_response_200_17__embedded_organizations(include_optional);

	cJSON* jsoninline_response_200_17__embedded_organizations_1 = inline_response_200_17__embedded_organizations_convertToJSON(inline_response_200_17__embedded_organizations_1);
	printf("inline_response_200_17__embedded_organizations :\n%s\n", cJSON_Print(jsoninline_response_200_17__embedded_organizations_1));
	inline_response_200_17__embedded_organizations_t* inline_response_200_17__embedded_organizations_2 = inline_response_200_17__embedded_organizations_parseFromJSON(jsoninline_response_200_17__embedded_organizations_1);
	cJSON* jsoninline_response_200_17__embedded_organizations_2 = inline_response_200_17__embedded_organizations_convertToJSON(inline_response_200_17__embedded_organizations_2);
	printf("repeating inline_response_200_17__embedded_organizations:\n%s\n", cJSON_Print(jsoninline_response_200_17__embedded_organizations_2));
}

int main() {
  test_inline_response_200_17__embedded_organizations(1);
  test_inline_response_200_17__embedded_organizations(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_17__embedded_organizations_MAIN
#endif // inline_response_200_17__embedded_organizations_TEST
