#include <stdio.h>
int main(void)
{
    int sec;
    int hour, minutes, remainder;
    do 
    {
        printf("Nhap so giay tu 0 den 86399: ");
        scanf("%d", &sec);
    }
    while (sec<0 || sec > 86399);
    hour = sec / 3600;
    remainder = sec - hour*3600;
    minutes = remainder /60;
    remainder = remainder - minutes* 60;
    printf("So giay khi chuyen doi se la: %02d gio %02d phut %02d giay", hour, minutes, remainder);
}