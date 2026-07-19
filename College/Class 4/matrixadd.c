#include <stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int i, j, rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition of matrices
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Output Matrix A
    printf("\nMatrix A:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Output Matrix B
    printf("\nMatrix B:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Output Matrix C
    printf("\nMatrix C (A + B):\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}