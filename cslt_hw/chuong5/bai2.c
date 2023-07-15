#include <stdio.h>
int main (void)
{
    int n, div;
    do
    {
        printf("Nhap mot so nguyen tu 10 den 100: ");
        scanf("%d", &n);
    }
    while (n<10 || n > 100);
    for (int i = 1; i < n; i++)
    {
        div = n % i;
        if (div == 0)
        {
            printf("uoc la: %d\n", i);
        }
    }
}