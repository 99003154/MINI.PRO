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
    return (((c1*9)/5))+32;
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
float do_cm_m(float input1)
{
    float result = input1/100;
    return result;
}

float do_km_m(float input1)
{
    float result = input1*1000;
    return result;
}
float do_miles_km(float input1)
{
    float result = input1*1.6;
    return result;
}
float do_miles_m(float input1)
{
    float result = (input1*1609344)/1000;
    return result;
}
float do_km_miles(float input1)
{
    float result = (input1)/1.6;
    return result;
}

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int modulus(int operand1, int operand2)
{
    return operand1 % operand2;
}
int square(int operand1)
{
    return operand1 * operand1;
}
int cube(int operand1)
{
    return operand1 * operand1 * operand1;
}
/*int squareroot(int operand1)
{
    int number;
    int srt = number / 2;
    int temp = 0;
    while(srt != temp){
        
        temp = srt;
        srt = ( number/temp + temp) / 2;
    return srt;
}*/
int greater(int operand1, int operand2)
{
    if(operand1>operand2)
        return operand1;
    else
        return operand2;
}
int lesser(int operand1, int operand2)
{
    if(operand1<operand2)
        return operand1;
    else
        return operand2;
}
/*int equal(int operand1, int operand2)
{
    if(operand1=operand2)
        return operand1;
    else
        return operand2;
}*/
int prime(int operand1)
{
    int i,a=0,flag=0;

    a=operand1/2;
    for(i=2;i<=a;i++)
    {
    if(operand1%i==0)
    {
    return 0;
    flag=1;
    break;
    }
    }
    if(flag==0)
    return 1;
}
int odd(int operand1)
{
    if(operand1%2!=0)
        return 1;
    else
        return 0;
}
int even(int operand1)
{
    if(operand1%2==0)
        return 1;
    else
        return 0;
}
int reverse(int operand1)
{
    int rev=0,remainder;
    while(operand1!=0){
        remainder = operand1%10;
        rev = rev*10+remainder;
        operand1 /= 10;
    }
    return rev;
}
/*int si(int operand1, int operand2, int operand3)
{
    si = ( operand1* operand2 * operand3) / 100;
    return si;
}
int ci(int operand1, int operand2, int operand3)
{
    ci=operand1*pow((1+operand2/100),operand3);
    return ci;
}*/
int profit(int operand1, int operand2)
{
    return operand1 - operand2;
}
int loss(int operand1, int operand2)
{
    return operand1 - operand2;
}

