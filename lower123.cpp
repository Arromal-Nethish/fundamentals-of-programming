
#include <stdio.h>

int main()
{
    char str[100];
    int i, j, flag = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    i = 0;
    j = 0;

    while(str[j] != '\0')
        j++;

    j--;

    while(i < j)
    {
        if(str[i] != str[j])
        {
            flag = 1;
            break;
        }

        i++;
        j--;
    }

    if(flag == 0)
        printf("Palindrome string");
    else
        printf("Not a palindrome string");

    return 0;
}

