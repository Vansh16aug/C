#include <stdio.h>
int main()
{
    int a,pal,rem,rev=0;
    printf("Enter a number :");
    scanf("%d",&a);
    pal=a;
    while (pal!=0)
    {
        rem=pal%10;
        rev=rev*10+rem;
        pal=pal/10;
    }

    if(rev==a){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}