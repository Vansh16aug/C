
                                                                        // Auto storage class 👇 

// #include <stdio.h>
// int main()
// {
//     auto int i=1;{
//         auto int i=2;{
//             auto int i=3;{

//             }
//         printf("%d\n",i);
//         }
//     printf("%d\n",i);
//     }
//     printf("%d\n",i);
//     return 0;
// }


                                                                        // Static storage class 👇 

// #include <stdio.h>
// void staticFunc(){
    // static int i;{              //in static i=0 
        // static int i=1;{
            // printf("%d\n",i);        // i=1   
            // i++;                    //i=2            // static function catches later value of value which was 2 due to increment
        // }
    // }
    // printf("%d\n",i);    // i=1 
    // i++;                //i=2
// }
// int main()
// {
//     staticFunc();
//     staticFunc();
//     return 0;
// }



#include <stdio.h>
int main()
{
     int i=5;
    if(--i){
        printf("%d",i);

        main();
        printf("%d",i);
    }
        return 0;
}