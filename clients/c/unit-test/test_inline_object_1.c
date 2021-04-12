#ifndef inline_object_1_TEST
#define inline_object_1_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_object_1_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_object_1.h"
inline_object_1_t* instantiate_inline_object_1(int include_optional);

#include "test__core_v2_services_model.c"


inline_object_1_t* instantiate_inline_object_1(int include_optional) {
  inline_object_1_t* inline_object_1 = NULL;
  if (include_optional) {
    inline_object_1 = inline_object_1_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate__core_v2_services_model(0),
      list_create(),
      "0",
      1
    );
  } else {
    inline_object_1 = inline_object_1_create(
      "0",
      "0",
      NULL,
      list_create(),
      "0",
      1
    );
  }

  return inline_object_1;
}


#ifdef inline_object_1_MAIN

void test_inline_object_1(int include_optional) {
    inline_object_1_t* inline_object_1_1 = instantiate_inline_object_1(include_optional);

	cJSON* jsoninline_object_1_1 = inline_object_1_convertToJSON(inline_object_1_1);
	printf("inline_object_1 :\n%s\n", cJSON_Print(jsoninline_object_1_1));
	inline_object_1_t* inline_object_1_2 = inline_object_1_parseFromJSON(jsoninline_object_1_1);
	cJSON* jsoninline_object_1_2 = inline_object_1_convertToJSON(inline_object_1_2);
	printf("repeating inline_object_1:\n%s\n", cJSON_Print(jsoninline_object_1_2));
}

int main() {
  test_inline_object_1(1);
  test_inline_object_1(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_object_1_MAIN
#endif // inline_object_1_TEST
