#include <stdio.h>
int main()
{
    float pi = 3.14;
    float l,b,r;
    printf("Length is:");
    scanf("%f",&l);
    printf("Breadth is:");
    scanf("%f",&b);
    printf("Radius is:");
    scanf("%f",&r);
    float a = pi * r * r; 
    float c=0.5*l*b;
    printf("The Area of circle: %.1f\n",a);
    printf("The Area of triangle is: %.1f",c);
    return 0;
}