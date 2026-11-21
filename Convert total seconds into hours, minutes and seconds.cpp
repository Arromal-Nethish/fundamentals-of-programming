#include <stdio.h>

int main()
{
    int total, h, m, s;

    printf("Enter total seconds: ");
    scanf("%d", &total);

    h = total / 3600;
    total = total % 3600;

    m = total / 60;
    s = total % 60;

    printf("Hours = %d\n", h);
    printf("Minutes = %d\n", m);
    printf("Seconds = %d", s);

    return 0;
}
