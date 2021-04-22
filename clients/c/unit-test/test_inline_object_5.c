#ifndef inline_object_5_TEST
#define inline_object_5_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_object_5_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_object_5.h"
inline_object_5_t* instantiate_inline_object_5(int include_optional);

#include "test__core_v2_endpoints_enrollment_method.c"


inline_object_5_t* instantiate_inline_object_5(int include_optional) {
  inline_object_5_t* inline_object_5 = NULL;
  if (include_optional) {
    inline_object_5 = inline_object_5_create(
      list_create(),
       // false, not to have infinite recursion
      instantiate__core_v2_endpoints_enrollment_method(0),
      "0",
      "0"
    );
  } else {
    inline_object_5 = inline_object_5_create(
      list_create(),
      NULL,
      "0",
      "0"
    );
  }

  return inline_object_5;
}


#ifdef inline_object_5_MAIN

void test_inline_object_5(int include_optional) {
    inline_object_5_t* inline_object_5_1 = instantiate_inline_object_5(include_optional);

	cJSON* jsoninline_object_5_1 = inline_object_5_convertToJSON(inline_object_5_1);
	printf("inline_object_5 :\n%s\n", cJSON_Print(jsoninline_object_5_1));
	inline_object_5_t* inline_object_5_2 = inline_object_5_parseFromJSON(jsoninline_object_5_1);
	cJSON* jsoninline_object_5_2 = inline_object_5_convertToJSON(inline_object_5_2);
	printf("repeating inline_object_5:\n%s\n", cJSON_Print(jsoninline_object_5_2));
}

int main() {
  test_inline_object_5(1);
  test_inline_object_5(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_object_5_MAIN
#endif // inline_object_5_TEST
