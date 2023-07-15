#include <stdio.h>
#include <string.h>
struct DANHBA
{
    char ten[30];
    char diachi[30];
    char sdt[11];
};
int nhapn()
{  
    int n;
    
    do
    {
        printf("Nhap so nguoi muon them vao danh ba: ");
        scanf("%d", &n);
    } while (n < 2 || n > 100);
    
    
    return n;
}
void main ()
{
    int n = nhapn();
    int sdttrue = 0, dctrue = 0;
    char sdt[11];
    char quan[20];
    struct DANHBA ttin[n];
    for (int i = 0; i<n;i++)
    {
        printf("Nhap ten: ");
        gets(ttin[i].ten);
        printf("Nhap dia chi: ");
        gets(ttin[i].diachi);
        printf("Nhap so dien thoai: ");
        gets(ttin[i].sdt);
    }
    printf("Nhap SDT muon tim: ");
    scanf("%s", sdt);
    for(int i = 0; i<n; i++)
    {
        if(strcmp(sdt, ttin[i].sdt) == 0)
        {
            printf("Ten: %s\n", ttin[i].ten);
            printf("Dia chi: %s\n", ttin[i].diachi);
            sdttrue = 1;
        }
    }
    if(sdttrue == 0){
        printf("Khong tim thay sdt trong danh ba\n");
    }
    printf("Nhap ten Quan: ");
    scanf("%s", quan);
    for(int i = 0; i<n; i++)
    {
        if(strstr( ttin[i].diachi, quan) != NULL)
        {
            printf("Ten: %s\n", ttin[i].ten);
            printf("Dia chi: %s\n", ttin[i].diachi);
            dctrue = 1;
        };
    }
    if(dctrue == 0)
        printf("Khong tim thay trong danh ba\n");
}