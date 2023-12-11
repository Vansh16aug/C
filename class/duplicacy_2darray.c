#include <stdio.h>
int main()
{
    int a[3][3],i,j,k,sa[10];
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("\nEnter the value of a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
            sa[k]=a[i][j];
            k++;
        }
    }
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            if(i==j){
                printf("%d ",a[i][j]);
            }
        }
    }
    for(i=0;i<9;i++){
        for(j=i+1;j<9;j++){
            if(sa[i]==sa[j]){
                printf("\nDuplicate element is: %d",sa[j]);
            }
        }
    }
    return 0;
}