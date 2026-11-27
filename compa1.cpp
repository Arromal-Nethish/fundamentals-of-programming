
#include <stdio.h>

int main()
{
    char str[100], temp;
    int i, j, len = 0;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    while(str[len] != '\0')
    {
        len++;
    }

    i = 0;
    j = len - 1;

    while(i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reverse string = %s", str);

    return 0;
}

