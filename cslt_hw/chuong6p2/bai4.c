#include <stdio.h>
int nhapn();
float Stotal(int x)
{   
    int sum = 0;
    if ( x == 1)
        return 1.0;
    else    
        return x + Stotal(x-1);
}
int main(void)
{
    int n = nhapn();
    printf("S(%d) = %f\n", n, Stotal(n)/n);
}
int nhapn()
{
    int n;
    do
    {
        printf("n = ");
        scanf("%d", &n);
    } while (n < 0);
}