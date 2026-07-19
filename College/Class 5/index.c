#include <stdio.h>

int main()
{
    int *p;
    int arr[] = {10, 20, 30, 40};

    p = arr;

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *(p + i));
    }

    return 0;
}