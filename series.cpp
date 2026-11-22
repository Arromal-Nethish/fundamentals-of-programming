
#include <stdio.h>

int main()
{
    int i, j, n;
    double fact, sum = 0;

    printf("Enter N: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        fact = 1;

        for(j = 1; j <= i; j++)
        {
            fact = fact * j;
        }

        sum = sum + (i / fact);
    }

    printf("Sum = %.2lf", sum);

    return 0;
}

