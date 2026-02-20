#include <stdio.h>
#include <math.h>
int main ()
{
    float C, F;
    printf("enter the temperature in centigrade: \n");
    scanf("%f", &C);
    F = ((9/5)*C + 32);
    printf("temperature in fahrenheit is %f" , F);
    return 0;
}