#include <stdio.h>
int main (void)
{
    int n = 0;
    int a[100];
    int ptu, num, newnum = 0;
    do
    {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n<0 || n > 100);
    
    // nhap du lieu cho phan tu
    for (int i = 0; i< n ; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    //them 1 phan tu
    do
    {
        printf("Nhap vi tri ban muon them: ");
        scanf("%d", &ptu);
        printf("Nhap phan tu b muon them: ");
        scanf("%d", &num);
    } while (ptu < 0 || ptu > n + 2);
    //them 1 ptu vao n
    a[n]++;
    
    for(int i = 0; i< n+1; i++)
    {
        
        if (ptu == i)
        {
            newnum = a[i];
            a[ptu] = num;
            a[i+1] = newnum;
        }
        a[ptu] = num;
        printf("a[%d]: %d ", i, a[i]);
    }

}