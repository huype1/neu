#include <stdio.h>
int main (void)
{
    int n = 0, tg, ptu, max, z;
    int a[100];
    int newa[100];
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
        newa[i] = a[i];
    }
    for (int y = 0; y< n; y++)
    {
        for (int x = 0; x < y + 1; x++)
        {
            if (newa[x]> newa[y])
            {
                tg = newa[y];
                newa[y] = newa[x];
                newa[x] = tg;

            }
        }
        
    }
    for(z = 0; z<n; z++)
    {
        if(newa[n-2] == a[z])
        {
            max = z;
        }
    }

    printf("Phan tu lon thu hai a[%d]: %d\n", max, newa[n-2]);
}