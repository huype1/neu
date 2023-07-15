#include <stdio.h>
int main(void)
{
    int x;
    int y;
    int i = 0;
    int mang[10];
    int z = 0;
    printf("Enter a decimal: ");
    scanf("%d", &x);
    while (x > 0) 
    {
        y = x % 2;
        x /= 2;
        mang[i] = y;
        i++;
    }
    
    while (z < i )
    {
        printf("%i",mang[i-z-1]);
        z++;
    }
}