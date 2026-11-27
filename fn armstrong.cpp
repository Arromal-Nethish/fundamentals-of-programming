
#include <stdio.h>

void armstrong(int n)
{
    int original, rem, sum = 0;

    original = n;

    while(n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if(original == sum)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    armstrong(n);

    return 0;
}

