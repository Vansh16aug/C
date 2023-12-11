//check from 1 to 9 and print the corresponding number in english

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 9) {
        // create an array of string literals for numbers 1 to 9
        char* words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

        // print the corresponding word for the number
        printf("%s", words[n-1]);
    } else {
        // print "Greater than 9" for n greater than 9
        printf("Greater than 9");
    }

    return 0;
}
