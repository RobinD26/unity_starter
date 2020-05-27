#include "unity/unity.h"
#include "../src/solution_c_bas_niveau.h"


void setUp(void) {

    // set stuff up here

}

void tearDown(void) {

    // clean stuff up here

}

void test_longtodec(void) {
    char str2[20] = {0};
    TEST_ASSERT_EQUAL_STRING ("12345", longtodec(12345,str2));
    TEST_ASSERT_EQUAL_STRING ("0", longtodec(0,str2));
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_longtodec);
    //RUN_TEST(test_function_should_doAlsoDoBlah);
    return UNITY_END();
}