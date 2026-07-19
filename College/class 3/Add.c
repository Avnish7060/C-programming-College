#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y;
    printf("Enter Two Number: ");
    scanf("%d%d", &x, &y);
    printf("The addition of numbers is %d", add(x, y));
}
