#include <stdio.h>
int main()
{
    int a[]={1,2,3,4};
    int *p;
    p=a;
    for(int i=0; i<4; i++){
        printf("%p ",(p+i));
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a[]={1,2,3,4};
//     int b[]={5,6,7,8};
//     int *p;
//     p=a;
//     for(int i=0; i<4; i++){
//         *(p+i)=b[i];
//         printf("%d",*(p+i));
//     }
//     return 0;
// }