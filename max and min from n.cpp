#include <stdio.h>

int main()
{
    int n, i, a, max, min;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter number: ");
    scanf("%d", &a);

    max = a;
    min = a;

    for(i = 2; i <= n; i++)
    {
        scanf("%d", &a);

        if(a > max)
            max = a;

        if(a < min)
            min = a;
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}
