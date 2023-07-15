#include <stdio.h>
int main (void)
{
    int n = 0, ptu = 0, num = 0;
    int a[100];
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
    do
    {
        printf("Nhap vi tri ban muon xoa: ");
        scanf("%d", &ptu);
        
    } while (ptu < 0 || ptu > n);
    for (int i = ptu - 1; i< n-1; i++)
    {
        a[i] = a[i+1];
    }
    for (int x = 0; x < n-1; x++)
    {
        printf("a[%d] = %d ", x, a[x]);
    }
}