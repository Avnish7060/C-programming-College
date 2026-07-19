#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("%d is largest number", a);
    }
    else if (a == b)
    {
        printf("%d & %d both are same number", a, b);
    }
    else
        printf("%d is largest number", b);
}