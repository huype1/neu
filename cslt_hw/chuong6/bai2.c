#include <stdio.h>
#include <math.h>
int songto(int x);
void inso(int n);
int main (void)
{
    int n, check;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n<= 1 || n > 10000);
    check = songto(n);
    if (check == n)
    {
        printf("Day la so nguyen to\n");
    }
    else{
        printf("Day khong phai la so nguyen to \n");
    }
    inso(1000);
}
int songto(int x)
{
    int i, count = 0;
    if(x == 2)
    {
        return x;
    }
    for(i = 2; i < x; i++)
    {
        if(x % i == 0)
        {
            count++;
        }
    }
    if(count == 0)
    {
        return x;
    }
    else
    {
        return 0;
    }
}
void inso(int n)
{
    int count = 0;
    for(int y = 2; y < n; y++)
    {
        if(songto(y) == y || y == 2)
        {
            printf("%3.d ", songto(y));
            count++;
            if(count % 10 == 0)
            {
                printf("\n");
            }
        }
        
    }
}