#include <stdio.h>
int gt(int *n);
int nhapn()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n<1);
    return n;
}
int main() {
    int x = nhapn();
    int *p = &x;
    if(*p == 0 || *p == 1)
    {
        printf("Ket qua la 1 ");
    }
    else
    {
        int result = 1;
        for(int i = 1; i<=*p;i++)
        {
            result = result * i;
        }
        printf("Ket qua la %d ", result);
    }
    return 0;
}
