#include <stdio.h>
int fact(int);
int main()
{
    int n ,result;
    printf("enter a number to find factorial :");
    scanf("%d",&n);
    result=fact(n);
    printf("%d",result);
    return 0;
}

int fact(int x){
    if(x==0){
        return 1;
    }
    else{
        return(x*fact(x-1));
    }
}