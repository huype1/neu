#include <stdio.h>
#include <math.h>
int socp(int x)
{
    int True;
    if (x == 1 || x == 0)
        return x;
    for (int i = 1; i<= sqrt(x); i++)
    {
        if (i*i == x)
        {
            True = 1;
        }
        else True = 0;
    }
    if (True == 1)
        return x;
    else
        return 0;
    
}
void inso(int n)
{
    int count = 0;
    for(int y = 0; y<= n; y++)
    {
        if (y == socp(y))
        {
            printf("%d ", y);
            count++;
            if (count % 15 == 0)
                printf("\n");
        }
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
    check = socp(n);
    if(check == n)
    {
        printf("Day la mot so chinh phuong\n");
    }
    else if(check == 0)
    {
        printf("Day khong phai la mot so chinh phuong\n");
    }
    inso(1000);
}