#include <stdio.h>
int main (void)
{
    int n = 0, chisomax = 0, chisomin = 0;
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
    int max = a[0];
    int min = a[0];
    for (int y = 0; y< n; y++)
    {
        if ( max <= a[y])
        {
            max = a[y];
            chisomax = y;
        }
    }
    printf("GTLN a[%d]: %d\n", chisomax, max);
    for (int x = 0; x< n; x++)
    {
        if ( a[x] <= min)
        {
            min = a[x];
            chisomin = x;
        }
    }
    printf("GTNN a[%d]: %d\n", chisomin, min);
}