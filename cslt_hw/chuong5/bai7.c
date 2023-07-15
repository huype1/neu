#include <stdio.h>

int main (void)
{
    int ngay, thang, nam,i;
    int totalday = 0;
    int namnhuan[13] = {0 , 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int namkonhuan[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    do{
        printf("Nhap ngay thang nam: ");
        scanf("%d", &ngay);
        scanf("%d", &thang);
        scanf("%d", &nam);
    }
    while (ngay>31 || thang >12);
    if(nam % 4 ==0)
    {
        for (i = 0; i <= thang ; i++)
        {
        totalday = totalday + namnhuan[i-1];
        }
    }
    else
    {
        for (i = 0; i <= thang; i++)
        {
            totalday = totalday + namkonhuan[i-1];
        }
    }
    totalday = totalday + ngay;
    printf("Day la ngay thu %d trong nam \n", totalday);
}