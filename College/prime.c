#include <stdio.h>
int main()
{
    int num, isPrime;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if (num < 2)
    {
        isPrime = 0;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
    {
        printf("Number is prime");
    }
    else
        printf("Not prime");
}