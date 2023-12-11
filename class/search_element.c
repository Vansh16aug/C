#include <stdio.h>
int main()
{
    int a[5],n,i,K=-1;
    printf("Enter a value :");
    scanf("%d",&n);
    for(i=0;i<5;i++){
        printf("The number of elements in Array A :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
    if(a[i]==n){
        K=i;
        break;
    }
    }
    if(K==-1){
        printf("Element is not present");
    }
    else{
        printf("Element is  present");
    }
    
    return 0;
}