#include <stdio.h>
int main (void)
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n<1 || n>20);
    float a[n], *p;
    p = a;
    for(int i = 0;i<n;i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%f", p+i);
    }
    for(int i = 0; i <n; i++)
    {
        printf("%f ", *(p+i));
    }
    printf("\n");
    for(int i = 0; i<n;i++)
    {   
        for(int j =i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
                *(p+i) = *(p+i)+*(p+j);
                *(p+j) = *(p+i)-*(p+j);
                *(p+i) = *(p+i)-*(p+j);
            }
        }
    }
    for(int i = 0; i <n; i++)
    {
        printf(" %f ", *(p+i));
    }
    float x;
    printf("Nhap so thuc bat ki:  ");
    scanf("%f", &x);
    int true = 0;
    for(int i = 0; i <n; i++)
    {
        if(x == *(p+i))
            true = 1;
    }
    if(true == 1)
        printf("True");
    else
        printf("False");
    
        
    
    
}