// #include <stdio.h>
// int main()
// {
//     int a,sum=0,i;
//     printf("Enter a number :");
//     scanf("%d",&a);
//     for(i=2; i<=a;i++){
//         for()
//         if(a%1==0 && a%a==0){
//             sum=sum+i;
//         }
//     }
//     printf("%d",i);
//     return 0;
// }






// #include <stdio.h>
// int main()
// {
//     int i,j,end,sum=0,pm;
//     printf("Enter the ending value :");
//     scanf("%d",&end);
//     for(i=2;i<=end;i++){
//         pm=1;
//         for(j=2; j<=(end/2);j++){
//             if(i%j==0){
//                 pm=0;
//                 break;
//             }
//             if(pm==1){
//                 sum=sum+i;
//             }
//         }
//     }
//     printf("the sum is :%d",sum);
//     return 0;
// }











// #include <stdio.h>

// int isPrime(int num) {
//     // check if num is a prime number
//     if (num <= 1) {
//         return 0;
//     }
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main() {
//     int n, sum = 0;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
    
//     for (int i = 2; i <= n; i++) {
//         if (isPrime(i)) {
//             sum += i;
//         }
//     }
    
//     printf("The sum of prime numbers till %d is %d.\n", n, sum);
    
//     return 0;
// }


#include <stdio.h>

int main() {
    int n, sum = 0,prime;
    printf("Enter a ending integer: ");
    scanf("%d", &n);
    
    for (int i = 2; i <= n; i++) {                              //     
         prime = 1;
        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime==1) {
            sum = sum+i;
        }
    }
    
    printf("The sum of prime numbers till %d is %d.\n", n, sum);
    
    return 0;
}
