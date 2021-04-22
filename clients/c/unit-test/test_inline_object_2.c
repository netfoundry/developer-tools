#ifndef inline_object_2_TEST
#define inline_object_2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_object_2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_object_2.h"
inline_object_2_t* instantiate_inline_object_2(int include_optional);



inline_object_2_t* instantiate_inline_object_2(int include_optional) {
  inline_object_2_t* inline_object_2 = NULL;
  if (include_optional) {
    inline_object_2 = inline_object_2_create(
      list_create(),
      list_create(),
      "0",
      "0"
    );
  } else {
    inline_object_2 = inline_object_2_create(
      list_create(),
      list_create(),
      "0",
      "0"
    );
  }

  return inline_object_2;
}


#ifdef inline_object_2_MAIN

void test_inline_object_2(int include_optional) {
    inline_object_2_t* inline_object_2_1 = instantiate_inline_object_2(include_optional);

	cJSON* jsoninline_object_2_1 = inline_object_2_convertToJSON(inline_object_2_1);
	printf("inline_object_2 :\n%s\n", cJSON_Print(jsoninline_object_2_1));
	inline_object_2_t* inline_object_2_2 = inline_object_2_parseFromJSON(jsoninline_object_2_1);
	cJSON* jsoninline_object_2_2 = inline_object_2_convertToJSON(inline_object_2_2);
	printf("repeating inline_object_2:\n%s\n", cJSON_Print(jsoninline_object_2_2));
}

int main() {
  test_inline_object_2(1);
  test_inline_object_2(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_object_2_MAIN
#endif // inline_object_2_TEST
