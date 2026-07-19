// #include<stdio.h>
// int main(){
//     int num, fact = 1;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     for(int i = num; i >= 1; i--){
//         fact = fact*i;
//     }
//     printf("Factorial is: %d",fact);
// }

// factorial using recursion
#include <stdio.h>
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int x = factorial(num);
    printf("The factorial is: %d\n", x);
}