#include <stdio.h>
int main (void)
{
    int hour, lamthem = 0;
    float salary;
    do 
    {
        printf("Nhap so gio da lam: ");
        scanf("%d", &hour);
    } while (hour <= 0);
    do
    {
        printf("Nhap luong theo gio: ");
        scanf("%f", &salary);
    } while (salary <= 0);
    
    
    if (hour <= 40)
    {
        printf("Luong cua ban se la: %f", salary * hour);
    }
    else
    {
        while (hour > 40)
        {
            hour--;
            lamthem++;
        }
        printf("Luong cua ban se la %f", 40*salary + 1.5*salary*lamthem);
    }
}