#include<stdio.h>
#include<math.h>
int main ()
{ float a, b, c;
printf("Enter three numbers: \n");
scanf("%f %f %f", &a, &b, &c);
if(a>=c && a>=b)
{ printf("Greatest no. is %f",a);
}
else if (b>=c && b>=a)
{ printf(" Greatest no. is %f", b);
}
else
{ printf("Greatest no. is %f", c);
}
return 0;
}
