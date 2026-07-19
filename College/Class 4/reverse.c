#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter Number of elements you want to input in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The elements of array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    for(i = 0; i < n/2; i++){
        int temp = arr[i];
        arr [i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    printf("Reversed Array is :\n");
    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}

