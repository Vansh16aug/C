#include <stdio.h>
void add();
int sub();
int mul();
int divi();
int main()
{
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ADDITION~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    //addition 
    add();
    
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~SUBTRACTION~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    // substraction
    printf("Substraction of 2 numbers is :%d\n",sub());

    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~MULTIPLICATION~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    //Multiplication
    int a,b,m;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    m=mul(a,b);

    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~DIVISION~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    //division
    int x,y,z;
    printf("Enter the first number :");
    scanf("%d",&x);
    printf("Enter the second number :");
    scanf("%d",&y);
    z=divi(x,y);
    printf("%d",z);
    return 0;
}
// without arguement without return type
void add(){
    int a,b;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    printf("Addition of 2 numbers is :%d\n",a+b);
}
// without arguement with return type

int sub(){
    int a,b,d;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    d=a-b;
    return d;
}
// with arguement without return type
int mul(int a, int b){
    int m;
    m=a*b;
    printf("Multiplication of 2 numbers is :%d\n",m);
}
// with arguement with return type
int divi(int a,int b){
    int c;
    c=a/b;
    return c;
}