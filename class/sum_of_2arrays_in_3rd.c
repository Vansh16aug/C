#include <stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    for(i=0;i<5;i++){
        printf("The number of elements in Array A :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        printf("The number of elements in Array B :");
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++){
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }
    return 0;
}