#include<stdio.h>
int main(){
    int a=10; int b=20; int c;
    printf("a=%d and b=%d",a,b);
    c=a;
    a=b;
    b=c;
    printf("a=%d and b=%d",a,b);
}