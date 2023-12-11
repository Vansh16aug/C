#include <stdio.h>
int main()
{
    int a[10],i,c=0;
    for(i=0;i<10;i++){
        printf("The numbers in array are :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]%5==0){
            printf("%d",a[i]);
            c++;
        }
        else{
            continue;
        }
    }
    printf("\nThe count of multiple of 5 are :%d",c);
    return 0;
}