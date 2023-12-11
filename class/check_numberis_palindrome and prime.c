// check whether the number is palindrome or prime .

#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int isPalindrome(int n) {
    int reversedNumber = 0, originalNumber = n;
    while (n != 0) {
        int remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }

    return originalNumber == reversedNumber;
}

int main() {
    int n;
    scanf("%d", &n);

    if (isPrime(n) && isPalindrome(n)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
