#include<stdio.h>
#include<math.h>
int main ()
{
    int R, P, T, N;
    float SI, CI;
    printf("enter the principle amount: \n");
    scanf("%d", &P);
    printf("enter the rate of interest: \n");
    scanf("%d", &R);
    printf("enter the time period: \n");
    scanf("%d", &T);
    printf("enter the no. of times that interest is compounding per year: \n");
    scanf("%d", &N);
    SI = (P*R*T)/100;
    CI = P*pow(1+r/(100*N), N*T) -P;
    printf( "the simple interest is %f \n", SI);
    scanf("the compound interest is %f \n", CI);
    return 0;
}