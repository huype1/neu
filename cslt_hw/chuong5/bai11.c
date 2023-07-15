#include <stdio.h>
float T, L, H;
int main(void)
{
    float total = 0;
    do
    {   
        printf("Nhap diem mon Toan: ");
        scanf("%f", &T);
    }
    while(T < 0 || T > 10);
    do
    {   
        printf("Nhap diem mon Ly: ");
        scanf("%f", &L);
    }
    while(L < 0 || L > 10);
    do
    {   
        printf("Nhap diem mon Hoa: ");
        scanf("%f", &H);
    }
    while(H < 0 || H > 10);
    total = T + L + H;
    if (total >= 15 && T >= 4 && L >= 4 && H >= 4)
    {
        printf("DAT\n");
        if (T > 7 && L > 7 && H > 7)
        {
            printf("Hoc deu cac mon\n");
        }
        else 
        {
            printf("Khong hoc deu cac mon\n");
        }

    }
    else
    {
        printf("KHONG DAT\n");
    }
}