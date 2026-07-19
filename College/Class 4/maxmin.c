#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number of elements you want to input in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements of array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }

    int min = arr[0], max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];

            
            
        if (arr[i] < min)
            min = arr[i];
    }
    printf("The Maximum Element in array is: %d\n", max);
    printf("The Minimum Element in array is: %d", min);
}