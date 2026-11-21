#include <stdio.h>

int main()
{
    int n, i, a, max, second;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter number: ");
    scanf("%d", &a);

    max = a;
    second = -999999;

    for(i = 2; i <= n; i++)
    {
        scanf("%d", &a);

        if(a > max)
        {
            second = max;
            max = a;
        }
        else if(a > second && a < max)
        {
            second = a;
        }
    }

    printf("Maximum = %d\n", max);
    printf("Second Maximum = %d", second);

    return 0;
}
