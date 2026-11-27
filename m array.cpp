
#include <stdio.h>

int maximum(int a[], int n)
{
    int i, max;

    max = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
    }

    return max;
}

int main()
{
    int a[100], n, i, max;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max = maximum(a, n);

    printf("Maximum element = %d", max);

    return 0;
}

