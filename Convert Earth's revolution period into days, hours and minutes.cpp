#include <stdio.h>

int main()
{
    int seconds = 31558150;
    int days, hours, minutes;

    days = seconds / 86400;
    seconds = seconds % 86400;

    hours = seconds / 3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;

    printf("Days = %d\n", days);
    printf("Hours = %d\n", hours);
    printf("Minutes = %d", minutes);

    return 0;
}
