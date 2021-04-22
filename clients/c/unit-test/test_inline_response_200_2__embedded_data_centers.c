#ifndef inline_response_200_2__embedded_data_centers_TEST
#define inline_response_200_2__embedded_data_centers_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_2__embedded_data_centers_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_2__embedded_data_centers.h"
inline_response_200_2__embedded_data_centers_t* instantiate_inline_response_200_2__embedded_data_centers(int include_optional);

#include "test_inline_response_200_2__embedded__links.c"


inline_response_200_2__embedded_data_centers_t* instantiate_inline_response_200_2__embedded_data_centers(int include_optional) {
  inline_response_200_2__embedded_data_centers_t* inline_response_200_2__embedded_data_centers = NULL;
  if (include_optional) {
    inline_response_200_2__embedded_data_centers = inline_response_200_2__embedded_data_centers_create(
      null,
      null,
      null,
      1.337,
      "0",
      null,
      null,
      null,
      "0",
      null,
      "0",
      null,
      null,
      "0",
      1.337,
       // false, not to have infinite recursion
      instantiate_inline_response_200_2__embedded__links(0)
    );
  } else {
    inline_response_200_2__embedded_data_centers = inline_response_200_2__embedded_data_centers_create(
      null,
      null,
      null,
      1.337,
      "0",
      null,
      null,
      null,
      "0",
      null,
      "0",
      null,
      null,
      "0",
      1.337,
      NULL
    );
  }

  return inline_response_200_2__embedded_data_centers;
}


#ifdef inline_response_200_2__embedded_data_centers_MAIN

void test_inline_response_200_2__embedded_data_centers(int include_optional) {
    inline_response_200_2__embedded_data_centers_t* inline_response_200_2__embedded_data_centers_1 = instantiate_inline_response_200_2__embedded_data_centers(include_optional);

	cJSON* jsoninline_response_200_2__embedded_data_centers_1 = inline_response_200_2__embedded_data_centers_convertToJSON(inline_response_200_2__embedded_data_centers_1);
	printf("inline_response_200_2__embedded_data_centers :\n%s\n", cJSON_Print(jsoninline_response_200_2__embedded_data_centers_1));
	inline_response_200_2__embedded_data_centers_t* inline_response_200_2__embedded_data_centers_2 = inline_response_200_2__embedded_data_centers_parseFromJSON(jsoninline_response_200_2__embedded_data_centers_1);
	cJSON* jsoninline_response_200_2__embedded_data_centers_2 = inline_response_200_2__embedded_data_centers_convertToJSON(inline_response_200_2__embedded_data_centers_2);
	printf("repeating inline_response_200_2__embedded_data_centers:\n%s\n", cJSON_Print(jsoninline_response_200_2__embedded_data_centers_2));
}

int main() {
  test_inline_response_200_2__embedded_data_centers(1);
  test_inline_response_200_2__embedded_data_centers(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_2__embedded_data_centers_MAIN
#endif // inline_response_200_2__embedded_data_centers_TEST
