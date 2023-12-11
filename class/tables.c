#include<stdio.h>
int main(){
    int a,i=0;
    printf("Enter a number : ");
    scanf("%d",&a);
    while(++i){
        printf("%d*%d=%d\n",a,i,a*i);
        if (i==10)
        break;
    }
    return 0;
}