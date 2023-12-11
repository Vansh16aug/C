// even number till 10

#include <stdio.h>
int main()
{
    int a;
    a=1;
    while (a<11)
    {
        if (a%2==0)
        {
            printf("%d\n",a);
        }
        a=a+1;
    }
    
    return 0;
}