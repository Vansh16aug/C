#include <stdio.h>
int main()
{
    int a[10],i,max,min;
    for(i=0;i<10;i++){
        printf("The numbers in array are :");
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[i];
    for(i=0;i<10;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("max=%d,min=%d",max,min);
    return 0;
}