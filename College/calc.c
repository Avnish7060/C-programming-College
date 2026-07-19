#include <stdio.h>

int main()
{
    int ch;
    float a, b;

    printf("Your choices are:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter your choice: ");
    scanf("%d", &ch);

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    switch (ch)
    {
    case 1:
        printf("Addition = %.2f\n", a + b);
        break;

    case 2:
        printf("Subtraction = %.2f\n", a - b);
        break;

    case 3:
        printf("Multiplication = %.2f\n", a * b);
        break;

    case 4:
        if (b != 0)
            printf("Division = %.2f\n", a / b);
        else
            printf("Division by zero is not allowed.\n");
        break;

    default:
        printf("Invalid choice.\n");
    }

    return 0;
}