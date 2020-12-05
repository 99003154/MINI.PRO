#include <calculator.h>

int area_circle(float a)
{
    float pi=3.147;
    return (pi*a*a);
}

int area_square(int a1)
{
    return a1*a1;
}


int area_triangle(int h, int b)
{
    return (h*b)/2;
}

int area_rectangle(int a1, int b)
{
    return a1*b;
}

int perimeter_square(int a1)
{
    return 4*a1;
}

int perimeter_triangle(int a1, int b, int c)
{
    return a1+b+c;
}

int perimeter_rectangle(int l, int w)
{
    return (2*(l+w));
}

int perimeter_circle(float r)
{
    float pi=3.147;
    return (2*pi*r);
}

int celsius_fahrenheit(float c1)
{
    return (((c*9)/5))+32;
}

int celsius_kelvin(float c1)
{
    return c1 + 273.15;
}

int fahrenheit_celsius(float f)
{
    return (((f-32)*5)/9);
}


int fahrenheit_kelvin(float f)
{
    return ((((f-32)*5)/9)+273.15);
}

int kelvin_celsius(float k)
{
    return (k-273.15);
}

int kelvin_fahrenheit(float k)
{
    return (k-273.15);
}
