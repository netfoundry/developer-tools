#ifndef inline_response_200_2_TEST
#define inline_response_200_2_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_2_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_2.h"
inline_response_200_2_t* instantiate_inline_response_200_2(int include_optional);

#include "test_inline_response_200_2__embedded.c"
#include "test_inline_response_200_2__embedded__links.c"
#include "test_inline_response_200_1_page.c"


inline_response_200_2_t* instantiate_inline_response_200_2(int include_optional) {
  inline_response_200_2_t* inline_response_200_2 = NULL;
  if (include_optional) {
    inline_response_200_2 = inline_response_200_2_create(
       // false, not to have infinite recursion
      instantiate_inline_response_200_2__embedded(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_2__embedded__links(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_1_page(0)
    );
  } else {
    inline_response_200_2 = inline_response_200_2_create(
      NULL,
      NULL,
      NULL
    );
  }

  return inline_response_200_2;
}


#ifdef inline_response_200_2_MAIN

void test_inline_response_200_2(int include_optional) {
    inline_response_200_2_t* inline_response_200_2_1 = instantiate_inline_response_200_2(include_optional);

	cJSON* jsoninline_response_200_2_1 = inline_response_200_2_convertToJSON(inline_response_200_2_1);
	printf("inline_response_200_2 :\n%s\n", cJSON_Print(jsoninline_response_200_2_1));
	inline_response_200_2_t* inline_response_200_2_2 = inline_response_200_2_parseFromJSON(jsoninline_response_200_2_1);
	cJSON* jsoninline_response_200_2_2 = inline_response_200_2_convertToJSON(inline_response_200_2_2);
	printf("repeating inline_response_200_2:\n%s\n", cJSON_Print(jsoninline_response_200_2_2));
}

int main() {
  test_inline_response_200_2(1);
  test_inline_response_200_2(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_2_MAIN
#endif // inline_response_200_2_TEST
