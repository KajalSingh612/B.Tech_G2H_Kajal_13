#include <stdio.h>

int main()
{
    int totalDays, years, months, days;

    // Input total number of days
    printf("Enter total number of days: ");
    scanf("%d", &totalDays);

    // Calculate years
    years = totalDays / 365;
    totalDays = totalDays % 365;

    // Calculate months
    months = totalDays / 30;
    days = totalDays % 30;

    // Output result
    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Remaining Days: %d\n", days);

    return 0;
}
