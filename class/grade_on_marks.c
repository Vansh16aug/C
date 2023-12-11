#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks :");
    scanf("%d",&marks);
    if (marks>=100){
        printf("A+");
    }
    else if (marks>90){
        printf("A");
    }
    else if(marks>=80){
        printf("B");
    }
    else if(marks>=70){
        printf("C");
    }
    else if(marks>=60){
        printf("D");
    }
    else{
        printf("Fail , kha tha na teacher bdiya nhi h PYTHON KA");
    }
    return 0;
}