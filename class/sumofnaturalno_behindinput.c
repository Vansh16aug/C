#include <stdio.h>
int add(int x);
int main()
{
    int n,result;
    printf("Enter a number :");
    scanf("%d",&n);
    result=add(n);
    printf("%d",result);
    return 0;
}
int add(int x){
    if (x==0) return 0;
    else return (x+add(x-1));
}