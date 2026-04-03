#include<stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter two operands: ");
    scanf("%d %c %d", &a, &op, &b);
    switch (op)
    {
    case '+':
    printf("addition = %d", a+b);
    break;
    case'-':
    printf("subtraction = %d", a-b);
    break;
    case'*':
    printf("multiplicatiopn = %d", a*b);
    break;
    case'/':
    printf("division = %d", a/b);
    break;
    default:
    printf("Error! operator is not correct");
}
return 0;
}
