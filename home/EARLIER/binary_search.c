#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the value :");
    scanf("%d",&n);
    printf("Entered a sorted array :");
    int arr[n];   
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is :\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    int beg=0;
    int end=n-1;
    int mid=(0+n)/2;
    int sa;
    int count=0;
    printf("Enter the number which you want to find :");
    scanf("%d",&sa);
    if(arr[mid]==sa){
        // printf("%d",mid);
        count++;
    }
    for(int i=0;i<n;i++){
        if(arr[mid]>sa){
            end=mid-1;
            mid=(beg+end)/2;
            if(arr[mid]==sa){
                // printf("The %d index for the value is :%d ",sa,mid);
                count++;
            }
        }
        else if(arr[mid]<sa){
            beg=mid+1;
            mid=(beg+end)/2;
            if(arr[mid]==sa){
                // printf("The index for the value is :%d ",mid);
                count++;
            }
        }
    }
    if(count>0){
        printf("The value is present in the array");
    }
    else{
        printf("The value is not present in the array");
    }

    return 0;
}
