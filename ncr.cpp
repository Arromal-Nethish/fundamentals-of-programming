
#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;

    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, r, ncr;

    printf("Enter n and r: ");
    scanf("%d%d", &n, &r);

    if(n < 0 || r < 0 || r > n)
    {
        printf("Invalid input");
    }
    else
    {
        ncr = factorial(n) /
              (factorial(r) * factorial(n-r));

        printf("NCR = %d", ncr);
    }

    return 0;
}

