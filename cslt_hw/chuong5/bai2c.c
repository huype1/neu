#include <stdio.h>
int main(void)
{
    int m = 0, n = 0;
    int a[100][100];
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
            printf("a[%d][%d]: ",i, j);
            scanf("%d", &a[i][j]);
        }
    }
    int min = a[0][0], max = a[0][0];
    printf("%d %d\n", min, max);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            int value = a[i][j];
            if(value < min)
            {
                min = value;
            }

            if(value > max)
            {
                max = value;
            }
        }
    }
    printf("GTLN: %d, GTNN: %d ",max, min);
}