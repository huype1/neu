#include <stdio.h>
int sohoanchinh(int x)
{
    int uoc, tong = 0;
    for (int i = 1; i < x-1; i++)
    {
        if (x % i == 0)
        {
            uoc = i;
            tong = tong + i;
        }

    }
    if(tong == x)
        return tong;
}
void inso(int n)
{
    for(int i = 6; i <= n; i++)
    {  
        if (i == sohoanchinh(i))
            printf("%d ", sohoanchinh(i));
    }
    
}
int main(void)
{
    int n, check;
    do
    {
        printf("Nhap so n: ");
        scanf("%d", &n);
    }while (n<0 || n > 10000);
    check = sohoanchinh(n);
    if (check == n)
        printf("Day la mot so hoan chinh\n");
    else
        printf("Day khong phai la so hoan chinh\n");
    inso(1000);       
}
