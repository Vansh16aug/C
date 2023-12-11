#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,*ptr,i;
    ptr=(int*)malloc(10000*sizeof(int));
    for(i=0;i<10000;i++)
    {
        *(ptr+i)=i;
    }
        
    printf("The elements divisible by 7 and 19 are: ");
    for(i=0;i<10000;i++)
    {
        if(*(ptr+i)%7==0 && *(ptr+i)%19==0)
        {
            printf("%d ",*(ptr+i));
        }
    }
return 0;
}