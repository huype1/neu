#include <stdio.h>
int main(void)
{
    int days, months, years, year;
    do
    {
        
        printf("nhap ngay thang nam: ");
        scanf("%d", &days);
        scanf("%d", &months);
        scanf("%d", &years);
    }
    while (days > 31 && months > 12);
        years = years % 100;
    
    if (years != 0)
    {
        printf("%d/%d/%d", days, months, years);
    }
    else if (years < 10)
    {
        printf("%d/%d/0%d", days, months, years);
    }
    else
    {
        printf("%d/%d/00", days, months);
    }
}
