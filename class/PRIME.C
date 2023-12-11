#include <stdio.h>
int main()
{
    int n,i;
    isPrime=1;
    printf("Enter no. of array elements : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    for(i=0;i<n;i++)
    {
        for(int j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime==1)
        {
            printf("%d is a prime number",arr[i]);
        }
        else
        {
            printf("%d is not a prime number",arr[i]);
        }
    }
    return 0;
}