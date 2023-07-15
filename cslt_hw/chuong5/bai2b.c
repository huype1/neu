#include <stdio.h>
int main(void)
{
    int m = 0, n = 0;
    float a[100][100], total = 0;
    do
    {
    printf("nhap so hang: ");
    scanf("%d", &n);
    
    }
    while(n<1 || n > 100 );

    do
    {
    printf("Nhap so cot: ");
    scanf("%d", &m);
    
    }
    while(m<1 || m > 100 );

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        { 
            printf("a[%d][%d]: ", i, j);
            scanf("%f", &a[i][j]);
        }
    }   
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        { 
            total = total + a[i][j];
        }
    }
    printf("TOTAL IS: %f ", total);
}