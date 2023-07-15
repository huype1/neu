#include <stdio.h>
int main(void)
{
    int x, y, ascii;
    char c;
    printf("Nhap x nhap toan tu ban muon su dung va nhap y ");
    scanf("%d", &x);
    scanf("%c", &c);
    scanf("%d", &y);
    
    ascii = (int) c;
    if (ascii == 43)
    {
        printf("x+y = %d", x + y);
    }
    else if (ascii == 45)
    {
        printf("x-y = %d", x - y);
    }
    else if (ascii == 42)
    {
        printf("x*y = %d", x * y);
    }
    else if (ascii == 47)
    {
        if (y == 0 )
        {
            printf("Khong the thuc hien phep tinh");
        }
        else
        {
            printf("x/y = %d", x / y);
        }
    }
}