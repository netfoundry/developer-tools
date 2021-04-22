#ifndef inline_response_200_1__links_TEST
#define inline_response_200_1__links_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_1__links_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_1__links.h"
inline_response_200_1__links_t* instantiate_inline_response_200_1__links(int include_optional);

#include "test_inline_response_200_1__links_self.c"


inline_response_200_1__links_t* instantiate_inline_response_200_1__links(int include_optional) {
  inline_response_200_1__links_t* inline_response_200_1__links = NULL;
  if (include_optional) {
    inline_response_200_1__links = inline_response_200_1__links_create(
       // false, not to have infinite recursion
      instantiate_inline_response_200_1__links_self(0)
    );
  } else {
    inline_response_200_1__links = inline_response_200_1__links_create(
      NULL
    );
  }

  return inline_response_200_1__links;
}


#ifdef inline_response_200_1__links_MAIN

void test_inline_response_200_1__links(int include_optional) {
    inline_response_200_1__links_t* inline_response_200_1__links_1 = instantiate_inline_response_200_1__links(include_optional);

	cJSON* jsoninline_response_200_1__links_1 = inline_response_200_1__links_convertToJSON(inline_response_200_1__links_1);
	printf("inline_response_200_1__links :\n%s\n", cJSON_Print(jsoninline_response_200_1__links_1));
	inline_response_200_1__links_t* inline_response_200_1__links_2 = inline_response_200_1__links_parseFromJSON(jsoninline_response_200_1__links_1);
	cJSON* jsoninline_response_200_1__links_2 = inline_response_200_1__links_convertToJSON(inline_response_200_1__links_2);
	printf("repeating inline_response_200_1__links:\n%s\n", cJSON_Print(jsoninline_response_200_1__links_2));
}

int main() {
  test_inline_response_200_1__links(1);
  test_inline_response_200_1__links(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_1__links_MAIN
#endif // inline_response_200_1__links_TEST
