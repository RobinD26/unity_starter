#include "unity/unity.h"
#include "../src/solution_c_bas_niveau.h"

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

void test_strcpy_should_return_same_string(void) {
    char str[10]={};
    TEST_ASSERT_EQUAL_STRING("hello",strcpy(str,"hello"));
    TEST_ASSERT_EQUAL_STRING("hello",str);
}

void test_strcpy_should_copy_string_in_buffer(void) {
    char str[10]={};
    strcpy(str,"allo");
    TEST_ASSERT_EQUAL_STRING("allo",str);
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_strcpy_should_return_same_string);
    RUN_TEST(test_strcpy_should_copy_string_in_buffer);
    return UNITY_END();
}