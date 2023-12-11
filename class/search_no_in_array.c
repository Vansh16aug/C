// searching a number in array

#include <stdio.h>
int main()
{
    int a[10],i,n,flag=0;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d",&n);
    for(i=0;i<10;i++){
        if(a[i]==n){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Number found at %d position",i+1);
    }
    else{
        printf("Number not found");
    }
    
    return 0;
}