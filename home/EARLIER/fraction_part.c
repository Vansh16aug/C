#include <stdio.h>
int main()
{
    float x;                          
    printf("Enter a Number: ");
    scanf("%f",&x);                                  // enter 5.7
    int y;
    y=x;                                            // here 5.7 becomes 5
    float z=x-y;                                    // here 5.7 - 5 = 0.7
    printf("The Fractionl Part is: %f",z);
    return 0;
}