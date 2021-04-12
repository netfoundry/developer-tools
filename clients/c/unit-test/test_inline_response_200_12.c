#ifndef inline_response_200_12_TEST
#define inline_response_200_12_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_12_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_12.h"
inline_response_200_12_t* instantiate_inline_response_200_12(int include_optional);

#include "test_inline_response_200__links.c"


inline_response_200_12_t* instantiate_inline_response_200_12(int include_optional) {
  inline_response_200_12_t* inline_response_200_12 = NULL;
  if (include_optional) {
    inline_response_200_12 = inline_response_200_12_create(
      null,
      "0",
      "0",
      "0",
      null,
      1,
      "0",
      null,
      "0",
      list_create(),
      null,
      null,
      "0",
      null,
      "0",
      null,
      "0",
      "0",
      null,
      null,
      1,
      null,
      1,
       // false, not to have infinite recursion
      instantiate_inline_response_200__links(0)
    );
  } else {
    inline_response_200_12 = inline_response_200_12_create(
      null,
      "0",
      "0",
      "0",
      null,
      1,
      "0",
      null,
      "0",
      list_create(),
      null,
      null,
      "0",
      null,
      "0",
      null,
      "0",
      "0",
      null,
      null,
      1,
      null,
      1,
      NULL
    );
  }

  return inline_response_200_12;
}


#ifdef inline_response_200_12_MAIN

void test_inline_response_200_12(int include_optional) {
    inline_response_200_12_t* inline_response_200_12_1 = instantiate_inline_response_200_12(include_optional);

	cJSON* jsoninline_response_200_12_1 = inline_response_200_12_convertToJSON(inline_response_200_12_1);
	printf("inline_response_200_12 :\n%s\n", cJSON_Print(jsoninline_response_200_12_1));
	inline_response_200_12_t* inline_response_200_12_2 = inline_response_200_12_parseFromJSON(jsoninline_response_200_12_1);
	cJSON* jsoninline_response_200_12_2 = inline_response_200_12_convertToJSON(inline_response_200_12_2);
	printf("repeating inline_response_200_12:\n%s\n", cJSON_Print(jsoninline_response_200_12_2));
}

int main() {
  test_inline_response_200_12(1);
  test_inline_response_200_12(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_12_MAIN
#endif // inline_response_200_12_TEST
