#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int row1, col1, row2, col2;
    int i, j, k;

    // Input dimensions of first matrix
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &row1, &col1);

    // Input dimensions of second matrix
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &row2, &col2);

    // Check if multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    //result matrix
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix Multiplication
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            for (k = 0; k < col1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display Result
    printf("\nResultant Matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}