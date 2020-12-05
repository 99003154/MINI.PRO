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
  CU_add_test(suite, "perimeter_square", test_perimeter_square);
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
                            
                            
 /* Write all the test functions */ 
void test_area_circle(void) 
{
  CU_ASSERT(314.15 == area_circle(10));
  
  /* Dummy fail*/
  CU_ASSERT(5000 == area_circle(15));
}                           
                            
void test_area_square(void) 
{
  CU_ASSERT(100 == area_square(10));
  
  /* Dummy fail*/
  CU_ASSERT(2000 == area_square(15));
}  
                            
 void test_area_triangle(void) 
{
  CU_ASSERT(100 == area_triangle(10 ,20));
  
  /* Dummy fail*/
  CU_ASSERT(4000 == area_triangle(15, 50));
}
                            
  void test_area_rectangle(void) 
{
  CU_ASSERT(1000 == area_rectangle(50 ,20));
  
  /* Dummy fail*/
  CU_ASSERT(1500 == area_rectangle(15, 50));
}                            
                            
   void test_perimeter_square(void) 
{
  CU_ASSERT(200 == perimeter_square(50));
  
  /* Dummy fail*/
  CU_ASSERT(450 == perimeter_square(9));
}                             
                            
   void test_perimeter_triangle(void) 
{
  CU_ASSERT(600 == perimeter_triangle(100, 200, 300));
  
  /* Dummy fail*/
  CU_ASSERT(1 == perimeter_triangle(15, 50, 20));
} 
                            
    void test_perimeter_rectangle(void) {
  CU_ASSERT(1000 == perimeter_rectangle(200, 300));
  
  /* Dummy fail*/
  CU_ASSERT(1 == perimeter_rectangle(15, 50));
}                            
                            
     void test_perimeter_circle(void) {
  CU_ASSERT(282.74 == perimeter_circle(45));
  
  /* Dummy fail*/
  CU_ASSERT(11 == perimeter_circle(15));
} 
                            
      void test_celsius_fahrenheit(void) {
  CU_ASSERT(96.8 == celsius_fahrenheit(36));
  
  /* Dummy fail*/
  CU_ASSERT(11 == celsius_fahrenheit(10));
}
                            
       void test_celsius_kelvin(void) {
  CU_ASSERT(309.15 == celsius_kelvin(36));
  
  /* Dummy fail*/
  CU_ASSERT(400.15 == celsius_kelvin(10));
}                           
                            
       void test_fahrenheit_celsius(void) {
  CU_ASSERT(37.7777 == fahrenheit_celsius(100));
  
  /* Dummy fail*/
  CU_ASSERT(40 == fahrenheit_celsius(97));
}                            
                            
        void test_fahrenheit_kelvin(void) {
  CU_ASSERT(310.9277 == fahrenheit_kelvin(100));
  
  /* Dummy fail*/
  CU_ASSERT(40 == fahrenheit_kelvin(97));
}                           
                            
         void test_kelvin_celsius(void) {
  CU_ASSERT(176.85 == kelvin_celsius(450));
  
  /* Dummy fail*/
  CU_ASSERT(40 == kelvin_celsius(500));
}                            
                            
          void test_kelvin_fahrenheit(void) {
  CU_ASSERT(26.85 == kelvin_fahrenheit(300));
  
  /* Dummy fail*/
  CU_ASSERT(40 == kelvin_fahrenheit(320));
}                            
                            
                            
