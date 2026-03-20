#include<stdio.h>
int main ()
{ int i, num, oddSum=0, evenSum=0;
printf("Enter the number:");
scanf("%d", &num);

for (int i=0; i<=num; i++){
    if (i%2==0){
        evenSum= evenSum+i;
    }
else {
    oddSum= oddSum +i;
}
}
printf("Sum of evem numbers is : %d \n", evenSum);
printf("Sum of odd numbers is: %d", oddSum);
return 0;
}
