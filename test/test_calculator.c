#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "Calculator"

void test_area_circle(void);
void test_area_square(void);
void test_area_triangle((void);
void test_area_rectangle(void);
void test_perimeter_square(void);
void test_perimeter_triangle((void);
void test_perimeter_rectangle(void);
void test_perimeter_circle(void);
void test_celsius_fahrenheit((void);
void test_celsius_kelvin(void);
void test_fahrenheit_celsius(void);
void test_fahrenheit_kelvin((void);
void test_kelvin_celsius(void);
void test_kelvin_fahrenheit(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
    /* Add your test functions in this format for testing*/
  CU_add_test(suite, "area_circle", test_area_circle);
  CU_add_test(suite, "area_squaret", test_area_square);
  CU_add_test(suite, "area_triangle", test_area_triangle);
  CU_add_test(suite, "area_rectangle", test_area_rectangle);
  CU_add_test(suite, "perimeter_square", perimeter_square);
  CU_add_test(suite, "perimeter_triangle", test_perimeter_triangle);
  CU_add_test(suite, "perimeter_rectangle", test_perimeter_rectangle);
  CU_add_test(suite, "perimeter_circle", test_perimeter_circle);
  CU_add_test(suite, "celsius_fahrenheit", test_celsius_fahrenheit);
  CU_add_test(suite, "celsius_kelvin", test_celsius_kelvin);
  CU_add_test(suite, "fahrenheit_celsius", test_fahrenheit_celsius);
  CU_add_test(suite, "fahrenheit_kelvin", test_fahrenheit_kelvin);
  CU_add_test(suite, "kelvin_celsius", test_kelvin_celsius);
  CU_add_test(suite, "kelvin_fahrenheit", test_kelvin_fahrenheit);
  
  
  
  /* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

