#ifndef inline_response_202_1_config_id_by_config_type_id_TEST
#define inline_response_202_1_config_id_by_config_type_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define inline_response_202_1_config_id_by_config_type_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/inline_response_202_1_config_id_by_config_type_id.h"
inline_response_202_1_config_id_by_config_type_id_t* instantiate_inline_response_202_1_config_id_by_config_type_id(int include_optional);



inline_response_202_1_config_id_by_config_type_id_t* instantiate_inline_response_202_1_config_id_by_config_type_id(int include_optional) {
  inline_response_202_1_config_id_by_config_type_id_t* inline_response_202_1_config_id_by_config_type_id = NULL;
  if (include_optional) {
    inline_response_202_1_config_id_by_config_type_id = inline_response_202_1_config_id_by_config_type_id_create(
      "0",
      "0"
    );
  } else {
    inline_response_202_1_config_id_by_config_type_id = inline_response_202_1_config_id_by_config_type_id_create(
      "0",
      "0"
    );
  }

  return inline_response_202_1_config_id_by_config_type_id;
}


#ifdef inline_response_202_1_config_id_by_config_type_id_MAIN

void test_inline_response_202_1_config_id_by_config_type_id(int include_optional) {
    inline_response_202_1_config_id_by_config_type_id_t* inline_response_202_1_config_id_by_config_type_id_1 = instantiate_inline_response_202_1_config_id_by_config_type_id(include_optional);

	cJSON* jsoninline_response_202_1_config_id_by_config_type_id_1 = inline_response_202_1_config_id_by_config_type_id_convertToJSON(inline_response_202_1_config_id_by_config_type_id_1);
	printf("inline_response_202_1_config_id_by_config_type_id :\n%s\n", cJSON_Print(jsoninline_response_202_1_config_id_by_config_type_id_1));
	inline_response_202_1_config_id_by_config_type_id_t* inline_response_202_1_config_id_by_config_type_id_2 = inline_response_202_1_config_id_by_config_type_id_parseFromJSON(jsoninline_response_202_1_config_id_by_config_type_id_1);
	cJSON* jsoninline_response_202_1_config_id_by_config_type_id_2 = inline_response_202_1_config_id_by_config_type_id_convertToJSON(inline_response_202_1_config_id_by_config_type_id_2);
	printf("repeating inline_response_202_1_config_id_by_config_type_id:\n%s\n", cJSON_Print(jsoninline_response_202_1_config_id_by_config_type_id_2));
}

int main() {
  test_inline_response_202_1_config_id_by_config_type_id(1);
  test_inline_response_202_1_config_id_by_config_type_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // inline_response_202_1_config_id_by_config_type_id_MAIN
#endif // inline_response_202_1_config_id_by_config_type_id_TEST
