#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100;

    printf("Total = %d\n", total);
    printf("Percentage = %.2f", percentage);

    return 0;
}
