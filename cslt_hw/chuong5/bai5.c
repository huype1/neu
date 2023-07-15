#include <stdio.h>
int main (void)
{
    int n, m;
    int count = 0;
    int i = 0;
    do{
        printf("Nhap mot so nguyen duong [2, 1000]: ");
        scanf("%d", &n);
    }
    while (n<2 || n > 1000);
    for ( count = 1; count <= n; count++)
    {
        m = n % count;
        if (m == 0)
            i++;
        
    }
    
    if (i == 2)
    {
        printf("Day la mot so nguyen to ");
    }
    else
    {
        printf("day khong phai la mot so nguyen to");
    }
}