#include<stdio.h>
int main(){
    int n,m,sum=0;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf("Enter the number of columns : ");
    scanf("%d",&m);
    int marks[n][m];
    printf("Enter the marks : \n");
    for(int i = 0 ; i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++)
        scanf("%d",&marks[i][j]);
    }
    printf("The marks are : \n");
    for(int i=0;i<n;i++){
        printf("\n");
        for(int j=0;j<m;j++){
            printf("%d\t",marks[i][j]);
            sum=sum+marks[i][j];
        }
    }
    printf("\n\nThe sum of the marks is : %d",sum);
    return 0;
}