#include "unity/unity.h"
#include "../src/solution_c_bas_niveau.h"


void setUp(void) {

    // set stuff up here

}

void tearDown(void) {

    // clean stuff up here

}

void strlen_should_return_length_of_string(){
    TEST_ASSERT(strlen("") == 0);
    TEST_ASSERT(strlen("asdf") == 4);
}

void hexstr_should_return_unsigned_number_as_string() {
    char strTest[100] = {0};
    hexstr(0x12345678, strTest, 32);
    TEST_ASSERT_EQUAL_STRING("12345678", strTest);
    hexstr(0x12345678, strTest, 16);
    TEST_ASSERT_EQUAL_STRING("5678", strTest);
    hexstr(0x12345678, strTest, 8);
    TEST_ASSERT_EQUAL_STRING("78", strTest);

    hexstr(0xAAFFEECC, strTest, 32);
    TEST_ASSERT_EQUAL_STRING("AAFFEECC", strTest);
    hexstr(0x0, strTest, 16);
    TEST_ASSERT_EQUAL_STRING("0000", strTest);
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

void test_longtodec(void) {
    char str2[20] = {0};
    TEST_ASSERT_EQUAL_STRING ("12345", longtodec(12345,str2));
    TEST_ASSERT_EQUAL_STRING ("0", longtodec(0,str2));
}

// not needed when using generate_test_runner.rb
int main(void) {
    UNITY_BEGIN();

    RUN_TEST(strlen_should_return_length_of_string);
    RUN_TEST(hexstr_should_return_unsigned_number_as_string);

    RUN_TEST(test_strcpy_should_return_same_string);
    RUN_TEST(test_strcpy_should_copy_string_in_buffer);


    RUN_TEST(test_longtodec);
    //RUN_TEST(test_function_should_doAlsoDoBlah);

    return UNITY_END();
}