#include <stdio.h>
int main (void)
{
    char c;
    int i;
    
    
    while (1)
    {
        fflush(stdin);
        printf("Nhap mot ky tu: ");
        scanf("%c", &c);
        i = (int) c;
        printf("Ma ASCII cua no la: %d\n", i);
        if (i == 48)
            break;
    }
    
}