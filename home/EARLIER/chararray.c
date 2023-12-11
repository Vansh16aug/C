#include<stdio.h>
#include<string.h>
int main(){
    char a[]={'a','b','c','d','e','f','g','h','i','j','\0'};
    for(int i=0;i<10;i++){
        printf("%c",a[i]);
    }
}