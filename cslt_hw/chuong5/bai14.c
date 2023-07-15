#include <stdio.h>
int main(void)
{
    int x, y, a, b, z;
    int r = 1;
    //printf("Nhap x va y: ");
    scanf("%d %d",&x, &y );
    //UCLN
    if( x > y)
    {
        a = x;
        b = y;
    }
    else
    {
        a = y;
        b = x;
    }
    while (r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    printf("%d ", a);
    z = x*y/a;
    printf("%d", z);
    

}