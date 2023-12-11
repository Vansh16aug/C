#include <stdio.h>
int main()
{
    int a,b,x;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter 1 for addition\nEnter 2 for multiplication\nEnter 3 for subtraction\nEnter 4 for division\n");
    printf("Enter your choice :");
    scanf("%d",&x);
    switch (x)
    {
    case 1: 
        printf("%d",a+b);
        break;
    case 2:
        printf("%d",a*b);
        break;
    case 3:
        printf("%d",a-b);
        break;
    case 4:
        printf("%f",a/b);
        break;
    default:
    printf("Wrong Input");
        break;
    }
    return 0;
}