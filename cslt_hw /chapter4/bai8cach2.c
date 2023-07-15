#include <stdio.h>
int main (void)
{
    int sec, hour, minutes;
    do
    {
        printf("Nhap so giay vao: ");
        scanf("%d", &sec);
    }
    while (sec < 0 || sec >86399);
    hour = sec / 3600;
    sec = sec % 3600;
    minutes = sec / 60;
    sec = sec % 60;
    printf("Thoi gian sau khi duoc chuyen doi la: %i gio %i phut %i giay", hour, minutes, sec);
    

}