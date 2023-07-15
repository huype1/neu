#include <stdio.h>
int main (void)
{
    int n = 0, y = 0, chan = 0, le = 0;
    int a[100], achan[100], ale[100] ;
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
    //sap xep tu be -> lon
    int tg = 0;
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < y + 1; x++)
        {
            if (a[x]> a[y])
            {
                tg = a[y];
                a[y] = a[x];
                a[x] = tg;

            }
        }
    }   
    
    for (int x = 0; x < n; x++)
    {
        
            if (a[x]% 2 == 0)
            {
                achan[chan] = a[x];
                chan++;
                
            }
            else
            {
                ale[le] = a[x];
                le++;
            }
    }
    for (int i = 0; i < chan; i++)
    {
        printf("chan[%d]: %d ", i, achan[i]);
    }
    printf("\n");
    for (int y = 0; y< le; y++)
    {
        printf("le[%d]: %d ", y, ale[y]);
    }
    
}