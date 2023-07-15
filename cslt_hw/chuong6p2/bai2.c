#include <stdio.h>
int nhapptu();
int fib(int n);
int tong(int n);
void main() 
{
    int n = nhapptu();
    printf("F(%d) = %d\n", n, fib(n));
    printf("S = %d\n", tong(n));

}
int nhapptu()
{
    int n;
    do {
    printf("n = ");
    scanf("%d", &n);
    } while (n<0);
    return n;
}
int fib(int n)
{
    if(n == 1 || n == 2)
        return 1;
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int tong(int n)
{
    int sum;
    for(int i = 1; i<=n; i++)
    {
        if(n%2==0 && i%2==0)
        {
            sum = sum + fib(i);
        }
        else if (n%2!=0 && i%2!=0)
        {
            sum = sum + fib(i);
        }
    }
    return sum;
}