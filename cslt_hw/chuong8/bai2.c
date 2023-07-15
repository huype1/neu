#include <stdio.h>
#include <string.h>
int nhapn();
struct DOIBONG
{
    char tendoibong[30];
    int win;
    int lose;
    int draw;
    int score;
};
void main ()
{
    int n;
    do
    {
        printf("Nhap so doi bong trong giai: ");
        scanf("%d", &n);
    } while (n < 2 || n > 100);
    struct DOIBONG doi[n];
    for (int i = 0; i<n;i++)
    {
        printf("Nhap ten doi bong: ");
        fflush(stdin);
        gets(doi[i].tendoibong);
        printf("Nhap tran thang: ");
        scanf("%d", &doi[i].win);
        printf("Nhap tran hoa: ");
        scanf("%d", &doi[i].draw);
        printf("Nhap tran thua: ");
        scanf("%d", &doi[i].lose);
        doi[i].score = doi[i].win*3+doi[i].lose;
    }
    int max = doi[0].score;
    for (int i = 0; i<n;i++)
    {
        
        {
            if(doi[i].score > max)
            {
                max = doi[i].score;
            }
        }
    }
    for (int i = 0; i<n;i++)
    {
        for(int j = 0; j<n; j++)
        if(doi[i].score == max )
        {
            printf("Doi vo dich: %s\n", doi[i].tendoibong);
        }
    }

}

