#include <stdio.h>
int main()
{
    char str[20];
    // scanf("%s",str); 
    fgets(str, sizeof(str),stdin);             // due to scanf it will show only firstt word to avoid that use fgets
    printf("%s",str);
    return 0;
}