
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[200];

    printf("Enter first string: ");
    scanf(" %[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %[^\n]", str2);

    printf("\nLength = %d", (int)strlen(str1));

    strcpy(str3, str1);
    printf("\nCopied string = %s", str3);

    strcat(str1, str2);
    printf("\nConcatenated string = %s", str1);

    if(strcmp(str2, str3) == 0)
        printf("\nStrings are equal");
    else
        printf("\nStrings are not equal");

    printf("\nReverse string = ");

    {
        int i, j;
        char temp;

        j = strlen(str3) - 1;

        for(i = 0; i < j; i++, j--)
        {
            temp = str3[i];
            str3[i] = str3[j];
            str3[j] = temp;
        }
    }

    printf("%s", str3);

    return 0;
}

