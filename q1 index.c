#include <stdio.h>

int main()
{
    int m1, m2, m3, m4, m5;
    int sum;
    float percentage;
    printf("enetr marks of 5 subjects \n ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    sum = m1 + m2 + m3 + m3 + m4 + m5;
    printf("sum of all the subjects %d \n", sum);
    percentage = sum / 5;
    printf("percentage= %f", percentage);
    return 0;
}
