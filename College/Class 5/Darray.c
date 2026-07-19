#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the elements in array:\n");
    scanf("%d", &n);
    // Dynamically allocate memory
    int *arr = (int *)malloc(n * sizeof(int));

    // Check wheather memory allocation was successfully
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n",n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }

    // Release dynamically allocated memory
    free(arr);
    return 0;
}