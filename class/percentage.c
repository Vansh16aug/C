#include <stdio.h>
int main()
{
    float m1,m2,m3,m4,m5;
    printf("First subject marks :");
    scanf("%f",&m1);
    printf("Second subject marks :");
    scanf("%f",&m2);
    printf("Third subject marks :");
    scanf("%f",&m3);
    printf("Fourth subject marks :");
    scanf("%f",&m4);
    printf("Fifth subject marks :");
    scanf("%f",&m5);
    float t=m1+m2+m3+m4+m5/5;
    printf("The Percentage is : %f",t);
    return 0;
}