#ifndef inline_response_200_19_TEST
#define inline_response_200_19_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_19_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_19.h"
inline_response_200_19_t* instantiate_inline_response_200_19(int include_optional);

#include "test_inline_response_200_19_7_3_4.c"
#include "test_inline_response_200_19_7_3_4.c"
#include "test_inline_response_200_19_7_3_16.c"
#include "test_inline_response_200_19_7_1_0.c"
#include "test_inline_response_200_19_7_3_16.c"
#include "test_inline_response_200_19_7_3_16.c"
#include "test_inline_response_200_19_7_3_4.c"
#include "test_inline_response_200_19_7_3_4.c"
#include "test_inline_response_200_19_7_1_0.c"
#include "test_inline_response_200_19_7_3_4.c"
#include "test_inline_response_200_19_7_1_0.c"
#include "test_inline_response_200_19_7_3_16.c"
#include "test_inline_response_200_19_7_3_4.c"
#include "test_inline_response_200_19_7_3_16.c"
#include "test_inline_response_200_19_7_1_0.c"
#include "test_inline_response_200_19_7_3_4.c"
#include "test_inline_response_200_19_7_3_16.c"
#include "test_inline_response_200_19_7_1_0.c"
#include "test_inline_response_200_19_7_1_0.c"
#include "test_inline_response_200_19_7_3_16.c"
#include "test_inline_response_200_19_7_3_4.c"
#include "test_inline_response_200_19_7_1_0.c"
#include "test_inline_response_200_19_7_3_16.c"
#include "test_inline_response_200_19_7_3_16.c"
#include "test_inline_response_200_19_7_3_4.c"
#include "test_inline_response_200_19_7_3_4.c"
#include "test_inline_response_200_19_7_3_16.c"
#include "test_inline_response_200_19_7_1_0.c"
#include "test_inline_response_200_19_7_3_16.c"


inline_response_200_19_t* instantiate_inline_response_200_19(int include_optional) {
  inline_response_200_19_t* inline_response_200_19 = NULL;
  if (include_optional) {
    inline_response_200_19 = inline_response_200_19_create(
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_4(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_4(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_16(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_1_0(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_16(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_16(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_4(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_4(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_1_0(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_4(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_1_0(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_16(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_4(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_16(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_1_0(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_4(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_16(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_1_0(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_1_0(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_16(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_4(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_1_0(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_16(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_16(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_4(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_4(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_16(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_1_0(0),
       // false, not to have infinite recursion
      instantiate_inline_response_200_19_7_3_16(0)
    );
  } else {
    inline_response_200_19 = inline_response_200_19_create(
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return inline_response_200_19;
}


#ifdef inline_response_200_19_MAIN

void test_inline_response_200_19(int include_optional) {
    inline_response_200_19_t* inline_response_200_19_1 = instantiate_inline_response_200_19(include_optional);

	cJSON* jsoninline_response_200_19_1 = inline_response_200_19_convertToJSON(inline_response_200_19_1);
	printf("inline_response_200_19 :\n%s\n", cJSON_Print(jsoninline_response_200_19_1));
	inline_response_200_19_t* inline_response_200_19_2 = inline_response_200_19_parseFromJSON(jsoninline_response_200_19_1);
	cJSON* jsoninline_response_200_19_2 = inline_response_200_19_convertToJSON(inline_response_200_19_2);
	printf("repeating inline_response_200_19:\n%s\n", cJSON_Print(jsoninline_response_200_19_2));
}

int main() {
  test_inline_response_200_19(1);
  test_inline_response_200_19(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_19_MAIN
#endif // inline_response_200_19_TEST
