
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int max, second;

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Enter numbers:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = second = -2147483647 - 1;

    for(i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            second = max;
            max = a[i];
        }
        else if(a[i] > second && a[i] < max)
        {
            second = a[i];
        }
    }

    if(second == -2147483647 - 1)
        printf("Second maximum does not exist");
    else
    {
        printf("Maximum = %d\n", max);
        printf("Second Maximum = %d", second);
    }

    return 0;
}

