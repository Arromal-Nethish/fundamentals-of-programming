
#include <stdio.h>

int length(char str[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char str[100];

    printf("Enter a line of text: ");
    scanf(" %[^\n]", str);

    printf("Length of string = %d", length(str));

    return 0;
}

