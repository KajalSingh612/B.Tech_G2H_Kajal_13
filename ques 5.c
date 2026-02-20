#include<stdio.h>
int main ()
{
    int a, b, c;
    printf("enter two numbers \n");
    printf("a = first no. , b = second no.");
    scanf("%d %d" ,&a, &b);
    c=a;
    a=b;
    b=c;
    printf("value of a is %d \n" ,a);
    printf("value of b is %d" ,b);
    return 0;
}