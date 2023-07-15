#include <stdio.h>
int nhapn();
float Stotal(int x);
int main(void)
{
    int n = nhapn();
    printf("%d\n", n);
    printf("S = %f\n", Stotal(n));
}
int nhapn()
{
    int n;
    do
    {
        printf("n = ");
        scanf("%d", &n);
    } while (n < 0);
    return n;
}
float Stotal(int n)
{   

     if(n!= 1)
    {
        return  Stotal(n-1) + 1.0/(n*n+n); 
    }
    else if (n == 1)
        return 0.5;
        
        
}
