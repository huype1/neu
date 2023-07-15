#include <stdio.h>
int main(void)
{
    int m = 0, n = 0;
    int a[100][100];
    int temp;
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for(int y = 0; y<j+1; y++)
            {
                if (a[y][i]>a[j][i])
                {
                    temp = a[y][i];
                    a[y][i] = a[j][i];
                    a[j][i] = temp;
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        { 
            printf("a[%d][%d]: %d ",i, j, a[i][j]);
        }
        printf("\n");
    }   
}