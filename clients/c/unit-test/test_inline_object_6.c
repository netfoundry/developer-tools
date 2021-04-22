#ifndef inline_object_6_TEST
#define inline_object_6_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_object_6_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_object_6.h"
inline_object_6_t* instantiate_inline_object_6(int include_optional);



inline_object_6_t* instantiate_inline_object_6(int include_optional) {
  inline_object_6_t* inline_object_6 = NULL;
  if (include_optional) {
    inline_object_6 = inline_object_6_create(
      "0",
      "0",
      list_create(),
      1,
      "0"
    );
  } else {
    inline_object_6 = inline_object_6_create(
      "0",
      "0",
      list_create(),
      1,
      "0"
    );
  }

  return inline_object_6;
}


#ifdef inline_object_6_MAIN

void test_inline_object_6(int include_optional) {
    inline_object_6_t* inline_object_6_1 = instantiate_inline_object_6(include_optional);

	cJSON* jsoninline_object_6_1 = inline_object_6_convertToJSON(inline_object_6_1);
	printf("inline_object_6 :\n%s\n", cJSON_Print(jsoninline_object_6_1));
	inline_object_6_t* inline_object_6_2 = inline_object_6_parseFromJSON(jsoninline_object_6_1);
	cJSON* jsoninline_object_6_2 = inline_object_6_convertToJSON(inline_object_6_2);
	printf("repeating inline_object_6:\n%s\n", cJSON_Print(jsoninline_object_6_2));
}

int main() {
  test_inline_object_6(1);
  test_inline_object_6(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_object_6_MAIN
#endif // inline_object_6_TEST
