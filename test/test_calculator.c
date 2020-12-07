#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <calculator.h>
#define PROJECT_NAME    "Calculator"
/*void test_do_km_miles(void input1);
void test_do_km_m(void input1);
void test_do_miles_km(void input1);
void test_do_cm_m(void input1);
void test_do_miles_m(void input1);*/
void test_area_circle(void);
void test_area_square(void);
void test_area_triangle(void);
void test_area_rectangle(void);
void test_perimeter_square(void);
void test_perimeter_triangle(void);
void test_perimeter_rectangle(void);
void test_perimeter_circle(void);
void test_celsius_fahrenheit(void);
void test_celsius_kelvin(void);
void test_fahrenheit_celsius(void);
void test_fahrenheit_kelvin(void);
void test_kelvin_celsius(void);
void test_kelvin_fahrenheit(void);
void test_add(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);
void test_modulus(void);
void test_square(void);
void test_cube(void);
//void test_squareroot(void);
void test_greater(void);
void test_lesser(void);
//void test_equal(void);
void test_prime(void);
void test_odd(void);
void test_even(void);
void test_reverse(void);
//void test_si(void);
//void test_ci(void);
void test_profit(void);
void test_loss(void);



/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
    /* Add your test functions in this format for testing*/
  /*CU_add_test(suite, "do_km_miles", test_do_km_miles);
  CU_add_test(suite, "do_miles_km", test_do_miles_km);
  CU_add_test(suite, "do_cm_m", test_do_cm_m);
  CU_add_test(suite, "do_miles_m", test_do_miles_m);
  CU_add_test(suite, "do_km_m", test_do_km_m);*/
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
  CU_add_test(suite, "add", test_add);
  CU_add_test(suite, "subtract", test_subtract);
  CU_add_test(suite, "multiply", test_multiply);
  CU_add_test(suite, "divide", test_divide);
  CU_add_test(suite, "modulus", test_modulus);
  CU_add_test(suite, "square", test_square);
  CU_add_test(suite, "cube", test_cube);
  //CU_add_test(suite, "squareroot", test_squareroot);
  CU_add_test(suite, "greater", test_greater);
  CU_add_test(suite, "lesser", test_lesser);
  //CU_add_test(suite, "equal", test_equal);
  CU_add_test(suite, "prime", test_prime);
  CU_add_test(suite, "odd", test_odd);
  CU_add_test(suite, "even", test_even);
  CU_add_test(suite, "reverse", test_reverse);
  //CU_add_test(suite, "si", test_cube);
  //CU_add_test(suite, "ci", test_cube);
  CU_add_test(suite, "profit", test_cube);
  CU_add_test(suite, "loss", test_cube);
  
  
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
/*void test_do_km_miles(void) {
  CU_ASSERT_DOUBLE_EQUAL(10 == do_km_miles(6));
  
  /* Dummy fail*/
 // CU_ASSERT_DOUBLE_EQUAL(4 == do_km_miles(320));
//}
//void test_do_cm_m(void) {
 // CU_ASSERT_DOUBLE_EQUAL(100 == do_cm_m(1));
  
  /* Dummy fail*/
  //CU_ASSERT_DOUBLE_EQUAL(4 == do_cm_m(320));
//}  
//void test_do_miles_km(void) {
 // CU_ASSERT_DOUBLE_EQUAL(10 == do_mile_km(16));
  
  /* Dummy fail*/
  //CU_ASSERT_DOUBLE_EQUAL(4 == do_mile_km(320));
//}
/*void test_do_miles_m(void) {
  CU_ASSERT_DOUBLE_EQUAL(10 == do_miles_m(16));
  
  /* Dummy fail*/
  /*CU_ASSERT_DOUBLE_EQUAL(4 == do_miles_m(320));
}*/
  /*void test_do_km_m(void) {
  CU_ASSERT_DOUBLE_EQUAL(10 == do_km_m(10));
  
  /* Dummy fail*/
  /*CU_ASSERT_DOUBLE_EQUAL(4 == do_km_m(320));
 }*/

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
                            
void test_add(void) {
  CU_ASSERT(12 == add(10, 2));

  /* Dummy fail*/
  CU_ASSERT(56 == add(10, 2));
}
void test_subtract(void) {
  CU_ASSERT(8 == subtract(10, 2));

  /* Dummy fail*/
  CU_ASSERT(56 == subtract(10, 2));
}
void test_multiply(void) {
  CU_ASSERT(20 == multiply(10, 2));

  /* Dummy fail*/
  CU_ASSERT(56 == multiply(10, 2));
}
void test_divide(void) {
  CU_ASSERT(5 == divide(10, 2));

  /* Dummy fail*/
  CU_ASSERT(56 == divide(10, 2));
}
void test_modulus(void) {
  CU_ASSERT(0 == modulus(10, 2));

  /* Dummy fail*/
  CU_ASSERT(56 == modulus(10, 2));
}
void test_square(void) {
  CU_ASSERT(4 == square(2));

  /* Dummy fail*/
  CU_ASSERT(56 == square(2));
}
void test_cube(void) {
  CU_ASSERT(8 == cube(2));

  /* Dummy fail*/
  CU_ASSERT(56 == cube(2));
}
//void test_squareroot(void) {
  //CU_ASSERT(2 == squareroot(4));

  /* Dummy fail*/
  //CU_ASSERT(56 == squareroot(4));
//}
void test_greater(void) {
  CU_ASSERT(1 == greater(10,2));

  /* Dummy fail*/
  CU_ASSERT(0 == greater(10,2));
}
void test_lesser(void) {
  CU_ASSERT(1 == lesser(2,10));

  /* Dummy fail*/
  CU_ASSERT(0 == lesser(2,10));
}
//void equal(void) {
  //CU_ASSERT(1 == equal(2,2));

  /* Dummy fail*/
  //CU_ASSERT(0 == equal(2,2));
//}
void test_prime(void) {
  CU_ASSERT(1 == prime(2));

  /* Dummy fail*/
  CU_ASSERT(0 == prime(2));
}
void test_odd(void) {
  CU_ASSERT(1 == odd(3));

  /* Dummy fail*/
  CU_ASSERT(0 == odd(3));
}
void test_even(void) {
  CU_ASSERT(1 == even(2));

  /* Dummy fail*/
  CU_ASSERT(0 == even(2));
}
void test_reverse(void) {
  CU_ASSERT(12 == reverse(21));

  /* Dummy fail*/
  CU_ASSERT(44 == reverse(21));
}
/*void si(void) {
  CU_ASSERT(6500 == si(5000,6,5));
  /* Dummy fail*/
  /*CU_ASSERT(0 == si(5000,6,5));
}
void ci(void) {
  CU_ASSERT(6,744.25 == ci(5000,6,5));
  /* Dummy fail*/
  //CU_ASSERT(0 == ci(5000,6,5));
//} 
void test_profit(void) {
  CU_ASSERT(1500 == profit(6500,5000));

  /* Dummy fail*/
  CU_ASSERT(33 == profit(6500,5000));
}
void test_loss(void) {
  CU_ASSERT(1000 == loss(5000,4000));

  /* Dummy fail*/
  CU_ASSERT(33 == loss(5000,4000));
}
                            
