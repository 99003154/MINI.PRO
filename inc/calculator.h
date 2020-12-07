/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/

#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
//#include <math.h>

int area_circle(float a);
int area_square(int a1);
int area_triangle(int h, int b);
int area_rectangle(int a1, int b);
int perimeter_square(int a1);
int perimeter_triangle(int a1, int b, int c);
int perimeter_rectangle(int l, int w);
int perimeter_circle(float r);
int celsius_fahrenheit(float c1);
int celsius_kelvin(float c1);
int fahrenheit_celsius(float f);
int fahrenheit_kelvin(float f);
int kelvin_celsius(float k);
int kelvin_fahrenheit(float k);
/*float test_do_cm_m(float input1);
float test_do_km_m(float input1);
float test_do_miles_km(float input1);
float test_do_miles_m(float input1);
float test_do_km_miles(float input1);*/

int add(int operand1, int operand2);
int subtract(int operand1, int operand2);
int multiply(int operand1, int operand2);
int divide(int operand1, int operand2);
int modulus(int operand1, int operand2);
int square(int operand1);
int cube(int operand1);
//int squareroot(int operand1);
int greater(int operand1, int operand2);
int lesser(int operand1, int operand2);
//int equal(int operand1, int operand2);
int prime(int operand1);
int odd(int operand1);
int even(int operand1);
int reverse(int operand1);
//int si(int operand1, int operand2, int operand3);
//int ci(int operand1,int operand2, int operand3);
int profit(int operand1, int operand2);
int loss(int operand1, int operand2);

#endif  /* #define __CALCULATOR_H__ */
