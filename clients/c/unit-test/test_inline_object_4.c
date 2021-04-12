#ifndef inline_object_4_TEST
#define inline_object_4_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_object_4_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_object_4.h"
inline_object_4_t* instantiate_inline_object_4(int include_optional);



inline_object_4_t* instantiate_inline_object_4(int include_optional) {
  inline_object_4_t* inline_object_4 = NULL;
  if (include_optional) {
    inline_object_4 = inline_object_4_create(
      list_create(),
      "0",
      "0",
      list_create(),
      list_create()
    );
  } else {
    inline_object_4 = inline_object_4_create(
      list_create(),
      "0",
      "0",
      list_create(),
      list_create()
    );
  }

  return inline_object_4;
}


#ifdef inline_object_4_MAIN

void test_inline_object_4(int include_optional) {
    inline_object_4_t* inline_object_4_1 = instantiate_inline_object_4(include_optional);

	cJSON* jsoninline_object_4_1 = inline_object_4_convertToJSON(inline_object_4_1);
	printf("inline_object_4 :\n%s\n", cJSON_Print(jsoninline_object_4_1));
	inline_object_4_t* inline_object_4_2 = inline_object_4_parseFromJSON(jsoninline_object_4_1);
	cJSON* jsoninline_object_4_2 = inline_object_4_convertToJSON(inline_object_4_2);
	printf("repeating inline_object_4:\n%s\n", cJSON_Print(jsoninline_object_4_2));
}

int main() {
  test_inline_object_4(1);
  test_inline_object_4(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_object_4_MAIN
#endif // inline_object_4_TEST
