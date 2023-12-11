
#include<stdio.h>
#include<string.h>
int main(){
    int count =0;
    int vow[]={'a','e','i','o','u','A','E','I','O','U'};
    printf("\nThe array to check vowels: ");
    char a[]={'a','b','c','v','s','t','\0'};
    for(int i=0;i<6;i++){
        printf("%c",a[i]);
    }
    //vowel count
    
    for(int i=0;i<6;i++){
        for(int j=0;j<10;j++){
            if(a[i]==vow[j]){
                count++;
            }
        }
    }
    printf("\nThe number of vowels are: %d",count);
}