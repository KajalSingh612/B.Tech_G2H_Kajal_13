#include<stdio.h>
int main()
{ int i,n, factorial=1;
printf("Enter the no. to find factorial: \n");
scanf("%d", &n);
for(i=1; i<=n; i=i+1)
{
    factorial=factorial*i;
}
printf("factorial of given no. is: %d", factorial);
return 0;
}
