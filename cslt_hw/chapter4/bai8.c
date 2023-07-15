#include <stdio.h>
int sec;
int hour = 0;
int minutes = 0;
int hours()
{
    while(sec > 3600)
    {
        sec = sec - 3600;
        hour = hour + 1;
    }
    return hour;
}
int min()
{
    while (sec > 60)
    {
        sec = sec - 60;
        minutes = minutes + 1;
    }
    return minutes;
}
int main(void)
{
    do
    {
        printf("Nhap so giay: ");
        scanf("%d", &sec);
    }
    while (sec < 0 || sec > 86399);
    int x = hours(sec);
    int y = min(sec);
    printf("%d hour/%d minutes /%d second",x , y, sec);

}