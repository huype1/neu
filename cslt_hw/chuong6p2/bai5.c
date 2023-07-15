#include <stdio.h>
#include <math.h>
int nhapn();
float Stotal(int n);
int main(void)
{
    int n = nhapn();
    printf("S = %f\n", Stotal(n));

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
float Stotal(int n)
{
    if(n == 1)
        return sqrt(3);
    else   
        return sqrt(Stotal(n-1)+3);
}