#include<stdio.h>
#include<math.h>
int main ()
{
    int r;
    float area, circumference;
    printf("enter the radius: \n");
    scanf("%d", &r);
    area = 3.14*r*r;
    circumference = 2*3.14*r;
    printf("area is %f \n", area);
    printf("circumference is %f", circumference);
    return 0;
}