#ifndef inline_response_200_5_TEST
#define inline_response_200_5_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_200_5_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_200_5.h"
inline_response_200_5_t* instantiate_inline_response_200_5(int include_optional);

#include "test_inline_response_200_3__embedded_model.c"
#include "test_inline_response_200_5_config_id_by_config_type_id.c"
#include "test_inline_response_200__links.c"


inline_response_200_5_t* instantiate_inline_response_200_5(int include_optional) {
  inline_response_200_5_t* inline_response_200_5 = NULL;
  if (include_optional) {
    inline_response_200_5 = inline_response_200_5_create(
      null,
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_inline_response_200_3__embedded_model(0),
      "0",
      "0",
      list_create(),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_inline_response_200_5_config_id_by_config_type_id(0),
      "0",
      "0",
      null,
      1,
      null,
       // false, not to have infinite recursion
      instantiate_inline_response_200__links(0)
    );
  } else {
    inline_response_200_5 = inline_response_200_5_create(
      null,
      "0",
      "0",
      "0",
      NULL,
      "0",
      "0",
      list_create(),
      "0",
      "0",
      NULL,
      "0",
      "0",
      null,
      1,
      null,
      NULL
    );
  }

  return inline_response_200_5;
}


#ifdef inline_response_200_5_MAIN

void test_inline_response_200_5(int include_optional) {
    inline_response_200_5_t* inline_response_200_5_1 = instantiate_inline_response_200_5(include_optional);

	cJSON* jsoninline_response_200_5_1 = inline_response_200_5_convertToJSON(inline_response_200_5_1);
	printf("inline_response_200_5 :\n%s\n", cJSON_Print(jsoninline_response_200_5_1));
	inline_response_200_5_t* inline_response_200_5_2 = inline_response_200_5_parseFromJSON(jsoninline_response_200_5_1);
	cJSON* jsoninline_response_200_5_2 = inline_response_200_5_convertToJSON(inline_response_200_5_2);
	printf("repeating inline_response_200_5:\n%s\n", cJSON_Print(jsoninline_response_200_5_2));
}

int main() {
  test_inline_response_200_5(1);
  test_inline_response_200_5(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_200_5_MAIN
#endif // inline_response_200_5_TEST
