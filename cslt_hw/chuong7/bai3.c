#include <stdio.h>
int nhapn();
void nhapmang(float a[], int n);
void inmang(float *a, int n);
int main (void)
{
    int n = nhapn();
    float a[n];
    nhapmang(&a, n);
    inmang(&a, n);
    printf("\n");
}
int nhapn()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n<1);
    return n;
}
void nhapmang(float a[], int n)
{
    float *p = a;
    for(int i = 0;i<n;i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%f", p+i);
    }
}
void inmang(float *a, int n)
{   
    for(int i = n-1; i>=0; i--)
    {
        printf("%.3f ", *(a+i));
    }
}