#ifndef inline_response_202_3_TEST
#define inline_response_202_3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_202_3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_202_3.h"
inline_response_202_3_t* instantiate_inline_response_202_3(int include_optional);

#include "test_inline_response_202_3_model.c"
#include "test_inline_response_202_3_config_id_by_config_type_id.c"
#include "test_inline_response_202_1__links.c"


inline_response_202_3_t* instantiate_inline_response_202_3(int include_optional) {
  inline_response_202_3_t* inline_response_202_3 = NULL;
  if (include_optional) {
    inline_response_202_3 = inline_response_202_3_create(
      null,
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_inline_response_202_3_model(0),
      "0",
      "0",
      list_create(),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_inline_response_202_3_config_id_by_config_type_id(0),
      "0",
      "0",
      null,
      1,
      null,
       // false, not to have infinite recursion
      instantiate_inline_response_202_1__links(0)
    );
  } else {
    inline_response_202_3 = inline_response_202_3_create(
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

  return inline_response_202_3;
}


#ifdef inline_response_202_3_MAIN

void test_inline_response_202_3(int include_optional) {
    inline_response_202_3_t* inline_response_202_3_1 = instantiate_inline_response_202_3(include_optional);

	cJSON* jsoninline_response_202_3_1 = inline_response_202_3_convertToJSON(inline_response_202_3_1);
	printf("inline_response_202_3 :\n%s\n", cJSON_Print(jsoninline_response_202_3_1));
	inline_response_202_3_t* inline_response_202_3_2 = inline_response_202_3_parseFromJSON(jsoninline_response_202_3_1);
	cJSON* jsoninline_response_202_3_2 = inline_response_202_3_convertToJSON(inline_response_202_3_2);
	printf("repeating inline_response_202_3:\n%s\n", cJSON_Print(jsoninline_response_202_3_2));
}

int main() {
  test_inline_response_202_3(1);
  test_inline_response_202_3(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_202_3_MAIN
#endif // inline_response_202_3_TEST
