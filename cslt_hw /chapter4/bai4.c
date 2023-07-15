#include <stdio.h>
int main(void)
{
    int x;
    int y;
    int i = 0;
    int mang[10];
    int z = 0;
    int hex;
    printf("Enter a decimal: ");
    scanf("%d", &x);
    hex = x;
    while (x != 0) 
    {
        y = hex % 16;
        
    
        if (y < 10)
        {
            mang[i++] = 48 + y;
        }
        else 
        {
            mang[i++] = 55 + y;
        }
        hex = hex / 16;
    }
    
    for (z = i; z >= 0; z--){
        printf("%c", mang[z]);
        
        z++;
    }
}