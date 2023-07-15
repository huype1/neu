#include <stdio.h>
int main(void)
{
    int a, b, sum, sub, mul, div;
    printf("Enter an integer: ");
    scanf("%d", &a);
    printf("Enter another integer: ");
    scanf("%d", &b);
    sum = a+b;
    sub = a-b;
    mul = a*b; 
    div = a/b;
    printf("%d, %d, %d, %d", sum, sub, mul, div);
    
}