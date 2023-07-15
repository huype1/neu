#include <stdio.h>
#include <math.h>
int nhapn();
float Stotal(int x);
int main(void)
{
    int n = nhapn();
    printf("S(%d) = %f\n", n, sqrt(Stotal(n)));
}
int nhapn()
{
    int n;
    do
    {
        printf("n = ");
        scanf("%d", &n);
    } while (n<=0);
}
float Stotal(int x)
{   
    int sum = 0;
    if ( x == 1)
        return 1.0;
    else    
        return x*x + Stotal(x-1);
}