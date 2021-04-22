#ifndef inline_response_200_8_TEST
#define inline_response_200_8_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_8_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_8.h"
inline_response_200_8_t* instantiate_inline_response_200_8(int include_optional);

#include "test_inline_response_200__links.c"


inline_response_200_8_t* instantiate_inline_response_200_8(int include_optional) {
  inline_response_200_8_t* inline_response_200_8 = NULL;
  if (include_optional) {
    inline_response_200_8 = inline_response_200_8_create(
      1,
      null,
      "0",
      "0",
      "0",
      null,
      null,
      null,
      null,
      "0",
      null,
      null,
      null,
      "0",
      1,
      list_create(),
      1,
      null,
      null,
      "0",
      "0",
      1,
      "0",
      "0",
      null,
      "0",
      null,
      null,
      null,
      null,
       // false, not to have infinite recursion
      instantiate_inline_response_200__links(0)
    );
  } else {
    inline_response_200_8 = inline_response_200_8_create(
      1,
      null,
      "0",
      "0",
      "0",
      null,
      null,
      null,
      null,
      "0",
      null,
      null,
      null,
      "0",
      1,
      list_create(),
      1,
      null,
      null,
      "0",
      "0",
      1,
      "0",
      "0",
      null,
      "0",
      null,
      null,
      null,
      null,
      NULL
    );
  }

  return inline_response_200_8;
}


#ifdef inline_response_200_8_MAIN

void test_inline_response_200_8(int include_optional) {
    inline_response_200_8_t* inline_response_200_8_1 = instantiate_inline_response_200_8(include_optional);

	cJSON* jsoninline_response_200_8_1 = inline_response_200_8_convertToJSON(inline_response_200_8_1);
	printf("inline_response_200_8 :\n%s\n", cJSON_Print(jsoninline_response_200_8_1));
	inline_response_200_8_t* inline_response_200_8_2 = inline_response_200_8_parseFromJSON(jsoninline_response_200_8_1);
	cJSON* jsoninline_response_200_8_2 = inline_response_200_8_convertToJSON(inline_response_200_8_2);
	printf("repeating inline_response_200_8:\n%s\n", cJSON_Print(jsoninline_response_200_8_2));
}

int main() {
  test_inline_response_200_8(1);
  test_inline_response_200_8(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_8_MAIN
#endif // inline_response_200_8_TEST
