#include <stdio.h>

int main()
{
    int a, b, c, d, e, total;
    float per;

    printf("Enter five subject marks: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;
    per = total / 5.0;

    printf("Percentage = %.2f\n", per);

    if (per >= 60)
        printf("First Division");
    else if (per >= 50)
        printf("Second Division");
    else if (per >= 40)
        printf("Third Division");
    else
        printf("Fail");

    return 0;
}
