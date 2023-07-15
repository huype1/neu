#include <stdio.h>
int nhapphantu();
int nhapmang(int i);
void sapxepmang(int *a, int n);
void inmang(int *a, int n);
int main(void)
{
    int n = nhapphantu(), x;
    int a[n];
    for(int i = 0; i<n; i ++)
    {
        a[i] = nhapmang(i);
    }
    inmang(a, n);
    printf("\n");
    sapxepmang(a, n);
    inmang(a, n);
}
int nhapphantu()
{
    int n;
    do {
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    } while (n<2 || n>50);
    return n;
}
int nhapmang(int i)
{
    int a[1000];
    printf("a[%d]: ",i);
    scanf("%d", &a[i]);
    return a[i];
}
void inmang(int *a, int n)
{
   for(int i=0;i<n;i++)
   {
       printf("a[%d] = %d ",i,*(a+i));
   }
}
void sapxepmang(int *a, int n)
{
    int temp;
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < x+1;y++)
        {
            if (a[y]> a[x])
            {
                temp = a[y];
                a[y] = a[x];
                a[x] = temp;
            }
            
        }
    }
}

