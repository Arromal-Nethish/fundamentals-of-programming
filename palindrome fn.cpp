
#include <stdio.h>

void palindrome(int n)
{
    int original, rev = 0, rem;

    original = n;

    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(original == rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    palindrome(n);

    return 0;
}

