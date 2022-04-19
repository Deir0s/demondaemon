#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() 
{
    
    const float a=1.5e-3;
    const float b=0.314159265e-5;
    
    float x, y, z;
    
    printf("\nЛабораторная работа №1");
    printf("\nВариант №3");
    printf("\nПИ.1-21-1");
    printf("\nБрянский Никита");
    
    printf("\nx=");
    scanf("%f", &x);
    
    y = exp(log(a*tan(0.25e-3 + fabs(b*sin(x))))/3.0);
    z = (pow(a, 2*cos(x)) + pow(b, -a)*cos(sin(x) + pow(a, -b)))/pow(x, y);
    
    printf("\ny=%5.3f", y);
    printf("\nz=%5.3f",z);
    printf("\n");
    system("pause");
    

    return 0;
}