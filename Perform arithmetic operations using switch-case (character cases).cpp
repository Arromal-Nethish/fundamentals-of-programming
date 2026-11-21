#include <stdio.h>

int main()
{
    int a, b;
    char ch;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Enter operation (A,S,M,D): ");
    scanf(" %c", &ch);

    switch (ch)
    {
        case 'A':
            printf("Addition = %d", a + b);
            break;

        case 'S':
            printf("Subtraction = %d", a - b);
            break;

        case 'M':
            printf("Multiplication = %d", a * b);
            break;

        case 'D':
            if (b != 0)
                printf("Division = %d", a / b);
            else
                printf("Cannot divide by zero");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
