// #include<stdio.h>
// int main(){
//     for(int i = 10; i >= 1; i--){
//         for(int j = 1; j <= i; j++){
//             printf(" ");
//         }
//         printf("\n");
//     }
//     for(int i = 1; i <= 10; i++){
//         for(int j = 1; j <= i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s <= 5 - 1; s++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}
