#include <stdio.h>
int nhapn();
void nhapmang(float a[], int n);
void inmang(float *a, int n);
void sapxepmang(float a[], int n);
int timgtri(float a[], float x, int n);
int main (void)
{   
    int n = nhapn();
    float a[n];
    nhapmang(&a, n);
    inmang(&a, n);
    printf("\n");
    sapxepmang(&a, n);
    inmang(&a, n);
    float x;
    printf("Nhap so thuc ngau nhien: ");
    scanf("%f", &x);
    int true = timgtri(&a, x, n);
    if(true == 1)
        printf("True");
    else
        printf("False");
}
int nhapn()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n<1 || n>20);
    return n;
}
void nhapmang(float a[], int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%f", a+i);
    }
}
void inmang(float *a, int n)
{   
    for(int i = 0; i <n; i++)
    {
        printf("%.3f ", *(a+i));
    }
}
void sapxepmang(float a[], int n)
{   
    float *p = a;
    for(int i = 0; i<n;i++)
    {   
        for(int j =i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                *(p+i) = *(p+i)+*(p+j);
                *(p+j) = *(p+i)-*(p+j);
                *(p+i) = *(p+i)-*(p+j);
            }
        }
    }
}
int timgtri(float a[], float x, int n)
{
    float *p = &a;
    for(int i = 0; i < n; i++)
    {
        if(x == *(p+i))
            return 1;
    }
}