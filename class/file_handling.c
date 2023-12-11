#include <stdio.h>
int main()
{
    FILE*fp;
    char c;
    fp=fopen("abc.txt","r");
    while(1){
        c=fgetc(fp);
        if(c==EOF)
            break;
        printf("%c",c);
    }
    fclose(fp);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     FILE*fp;
//     fp=fopen("abc.txt","w");
//     fprintf(fp,"Hello world");
//     fclose(fp);
//     return 0;
// }