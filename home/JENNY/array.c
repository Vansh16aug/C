#include<stdio.h>
int main(){
    int i,sum=0,a[10];
    int even=0,odd=0;
    for(i=0;i<10;i++){
        printf("Enter the a[%d] elemnet of array :",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]%2==0){
            even=even+1;
        }
        else if(a[i]%2!=0){
            odd=odd+1;
        }
    }
    if(even!=0 && odd!=0){
        printf("no of elements which are even :%d",even);
        printf("\nno of elements which are odd :%d",odd);
    }
    else{
        printf("no of elements which are even :%d",even);
        printf("\nno of elements which are odd :%d",odd);
    }
    return 0;
}