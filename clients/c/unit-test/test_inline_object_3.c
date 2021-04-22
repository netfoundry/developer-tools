#ifndef inline_object_3_TEST
#define inline_object_3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_object_3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_object_3.h"
inline_object_3_t* instantiate_inline_object_3(int include_optional);

#include "test__core_v2_services__service_id__model.c"


inline_object_3_t* instantiate_inline_object_3(int include_optional) {
  inline_object_3_t* inline_object_3 = NULL;
  if (include_optional) {
    inline_object_3 = inline_object_3_create(
       // false, not to have infinite recursion
      instantiate__core_v2_services__service_id__model(0),
      "0",
      "0"
    );
  } else {
    inline_object_3 = inline_object_3_create(
      NULL,
      "0",
      "0"
    );
  }

  return inline_object_3;
}


#ifdef inline_object_3_MAIN

void test_inline_object_3(int include_optional) {
    inline_object_3_t* inline_object_3_1 = instantiate_inline_object_3(include_optional);

	cJSON* jsoninline_object_3_1 = inline_object_3_convertToJSON(inline_object_3_1);
	printf("inline_object_3 :\n%s\n", cJSON_Print(jsoninline_object_3_1));
	inline_object_3_t* inline_object_3_2 = inline_object_3_parseFromJSON(jsoninline_object_3_1);
	cJSON* jsoninline_object_3_2 = inline_object_3_convertToJSON(inline_object_3_2);
	printf("repeating inline_object_3:\n%s\n", cJSON_Print(jsoninline_object_3_2));
}

int main() {
  test_inline_object_3(1);
  test_inline_object_3(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_object_3_MAIN
#endif // inline_object_3_TEST
