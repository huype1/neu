#include <stdio.h>
int main (void)
{
    int n = 0;
    int a[100];
    int total = 0;
    do
    {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n<0 || n > 100);
    
    // nhap du lieu cho phan tu
    for (int i = 0; i< n ; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i< n; i++)
    {
        total = total + a[i];
    }
    printf("Tong cac phan tu la: %d\n", total);
}