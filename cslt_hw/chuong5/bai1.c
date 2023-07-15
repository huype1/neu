#include <stdio.h>
int main (void)
{
    int n, count;
    int i = 0;
    do{
        printf("Nhap gia tri muon tinh sum vao: ");
        scanf("%d", &n);
    }
    while (n<0 || n > 1000000);
    for (count = 0; count <=n; count++)
    {
        i = i + count;
    }
    printf("%d", i);
}