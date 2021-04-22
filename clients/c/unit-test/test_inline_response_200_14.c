#ifndef inline_response_200_14_TEST
#define inline_response_200_14_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_14_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_14.h"
inline_response_200_14_t* instantiate_inline_response_200_14(int include_optional);

#include "test_inline_response_200_14_updated_at.c"
#include "test_inline_response_200_14_updated_at.c"


inline_response_200_14_t* instantiate_inline_response_200_14(int include_optional) {
  inline_response_200_14_t* inline_response_200_14 = NULL;
  if (include_optional) {
    inline_response_200_14 = inline_response_200_14_create(
      null,
      "0",
       // false, not to have infinite recursion
      instantiate_inline_response_200_14_updated_at(0),
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_inline_response_200_14_updated_at(0),
      list_create(),
      1,
      1
    );
  } else {
    inline_response_200_14 = inline_response_200_14_create(
      null,
      "0",
      NULL,
      "0",
      "0",
      "0",
      NULL,
      list_create(),
      1,
      1
    );
  }

  return inline_response_200_14;
}


#ifdef inline_response_200_14_MAIN

void test_inline_response_200_14(int include_optional) {
    inline_response_200_14_t* inline_response_200_14_1 = instantiate_inline_response_200_14(include_optional);

	cJSON* jsoninline_response_200_14_1 = inline_response_200_14_convertToJSON(inline_response_200_14_1);
	printf("inline_response_200_14 :\n%s\n", cJSON_Print(jsoninline_response_200_14_1));
	inline_response_200_14_t* inline_response_200_14_2 = inline_response_200_14_parseFromJSON(jsoninline_response_200_14_1);
	cJSON* jsoninline_response_200_14_2 = inline_response_200_14_convertToJSON(inline_response_200_14_2);
	printf("repeating inline_response_200_14:\n%s\n", cJSON_Print(jsoninline_response_200_14_2));
}

int main() {
  test_inline_response_200_14(1);
  test_inline_response_200_14(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_14_MAIN
#endif // inline_response_200_14_TEST
