#include<stdio.h>
#include<math.h>
int main()
{ int a;
printf("Enter year to check \n");
scanf("%d", &a);
if((a%400==0)||(a%100!=0 &a%4==0))
{ printf("given year is leap year");
}
else 
{ printf("given year is not a leap year");
}
return 0;
}
