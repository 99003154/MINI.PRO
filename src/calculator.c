#include <calculator.h>

int area_circle(float a)
{
    float pi=3.147;
    return (pi*a*a);
}

int area_square(int a)
{
    return a*a;
}


int area_triangle(int h, int b)
{
    return (h*b)/2;
}

int area_rectangle(int a, int b)
{
    return a*b;
}

int perimeter_square(int a)
{
    return 4*a;
}

int perimeter_triangle(int a)
{
    return 4*a;
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

int celsius_fahrenheit(float c)
{
    return (((c*9)/5))+32;
}

int celsius_kelvin(float c)
{
    return c + 273.15;
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
