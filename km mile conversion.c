#include <stdio.h>
#include <math.h>
int main()
{
    int ch;
    float a, b, distkm, distmile;
    printf("eneter your choice -->");
    scanf("%d", &ch);
    if (ch == 1)
    {
        printf("enter the distance in kilometers:");
        scanf("%f", &a);
        distmile = a * 0.621;
        printf("the distance in miles is %f", distmile);
    }
    else if (ch == 0)
    {
        printf("enter the distance in miles:");
        scanf("%f", &b);
        distkm = b / 0.621;
        printf("the distance in miles is %f", distkm);
    }
    else
    {
        printf("the choice is wrong\n please input 1 for converting km to miles\n please input 0 for converting miles to km");
    }
    return 0;
}
