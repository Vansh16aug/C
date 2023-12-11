#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter Dividend: ");
    scanf("%d",&a);
    printf("Enter Divisor: ");
    scanf("%d",&b);
    int r=a%b;
    printf("The remainder is: %d",r);
    return 0;
}