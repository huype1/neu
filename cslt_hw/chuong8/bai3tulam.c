#include <stdio.h>
struct GIANGDAY
{
    char malop[6];
    char tengv[17];
    int sotietgiang;
    float heso;
    long int dongia;
    long int sotiengiang;
};
int nhapn();
long int tinhtiengiang(int sotiet, float heso, long int donggia);
void inmon(struct GIANGDAY monhoc[], int n);
void sapxepmon(struct GIANGDAY monhoc[], int n);
int main (void)
{
    int n = nhapn();
    struct GIANGDAY monhoc[n+1];
    for(int i = 1;i<=n;i++)
    {
        printf("Nhap ma lop \n");
        fflush(stdin);
        scanf("%s", &monhoc[i].malop);
        printf("Nhap ten giang vien \n");
        scanf("%s", &monhoc[i].tengv);
        printf("nhap so tiet giang \n");
        scanf("%d", &monhoc[i].sotietgiang);
        printf("nhap he so\n");
        scanf("%f", &monhoc[i].heso);
        printf("nhap don gia \n");
        scanf("%li", &monhoc[i].dongia);
        monhoc[i].sotiengiang = tinhtiengiang(monhoc[i].sotietgiang, monhoc[i].heso, monhoc[i].dongia);
    } 
    
    inmon(monhoc, n);
    sapxepmon(monhoc, n);
}
int nhapn()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n < 3 || n>100);
    return n;
}
long int tinhtiengiang(int sotiet, float heso, long int donggia)
{
    long int tiengiang = sotiet*heso*donggia;
    return tiengiang;
}
void inmon(struct GIANGDAY monhoc[], int n)
{
    printf("|---|-----|----------------|-------|-----|---------|----------|\n");
    printf("|STT|MALOP| TEN GIANG VIEN |SO TIET|HE SO| DON GIA | SO TIEN  |\n");
    printf("|---|-----|----------------|-------|-----|---------|----------|\n");
    for(int i = 1; i<=n; i++)
    {
        printf("|%3d|%5s| %15s|%7d| %4.2f| %8li| %9li|\n", i, monhoc[i].malop, monhoc[i].tengv, monhoc[i].sotietgiang, monhoc[i].heso, monhoc[i].dongia, monhoc[i].sotiengiang);
    }
    printf("|---|-----|----------------|-------|-----|---------|----------|\n");
}
void sapxepmon(struct GIANGDAY monhoc[], int n)
{

    for(int i = 1; i<=n; i++)
    {
        struct GIANGDAY temp;
        for(int j = i+1; j<=n; j++)
        {
            
            if (monhoc[j].sotiengiang<monhoc[i].sotiengiang)
            {
                temp = monhoc[i];
                monhoc[i] = monhoc[j];
                monhoc[j] = temp;
            }
        }
    }
    printf("Sau khi sap xep\n");
    inmon(monhoc, n);
}