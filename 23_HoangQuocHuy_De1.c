#include <stdio.h>
#include <string.h>
struct SANPHAM
{
    char masp[6];
    char tensp[17];
    long giamua;
    long giaban;
    int soluong;
    long lai;
};
int nhapn();
void nhapsp(struct SANPHAM sp[], int n);
long Lai(long mua, long ban, int soluong);
void print(struct SANPHAM sp[], int n);
void sapxeplai(struct SANPHAM sp[], int n);
void print10(struct SANPHAM sp[], int n);
int main(void)
{
    int n = nhapn();
    struct SANPHAM sp[n+1];
    nhapsp(sp, n);
    //tinh tong lai
    long sum = 0;
    for (int i = 1; i<=n;i++)
    {
        sum += sp[i].lai;
    }
    printf("Tong lai: %li\n", sum);
    print(sp , n);
    sapxeplai(sp, n);
    printf("Sau khi sap xep\n");
    print(sp, n);
    printf("\n");
    print10(sp, n);
}
int nhapn()
{
    int n;
    do
    {
        printf("Nhap so luong san pham: ");
        scanf("%d", &n);
    } while (n<3 || n>50);
    return n;    
}
void nhapsp(struct SANPHAM sp[], int n)
{
    printf("Khong duoc viet dau cho ten sp\n");
    for(int i = 1;i<=n;i++)
    {
        printf("Nhap ma san pham ");
        fflush(stdin);
        fscanf(stdin, " ");
        fgets(&sp[i].masp, 5, stdin);
        sp[i].masp[strlen(sp[i].masp)-1]='\0';
        printf("Nhap ten san pham ");
        fflush(stdin);
        fscanf(stdin, " ");
        fgets(&sp[i].tensp, 17, stdin);
        sp[i].tensp[strlen(sp[i].tensp)-1]='\0';
        printf("nhap gia mua vao ");
        scanf("%li", &sp[i].giamua);
        printf("nhap gia ban ra ");     
        scanf("%li", &sp[i].giaban);
        printf("Nhap so luong san pham ");
        scanf("%d", &sp[i].soluong);
        sp[i].lai = Lai(sp[i].giamua, sp[i].giaban, n);
    } 
}
long Lai(long mua, long ban, int soluong)
{
    long r = (ban-mua)*soluong;
    return r;
}
void print(struct SANPHAM sp[], int n)
{
    printf("|---|-----|----------------|--------|--------|--------|----------|\n");
    printf("|STT|MA SP|  TEN SAN PHAM  |GIA MUA |GIA BAN |SO LUONG|    LAI   |\n");
    printf("|---|-----|----------------|--------|--------|--------|----------|\n");
    for (int i = 1; i<=n;i++)
    {
        printf("|%-2d |%-5s|%-16s|%-8li|%-8li|  %-4d  | %-9li|\n", i, sp[i].masp, sp[i].tensp, sp[i].giamua, sp[i].giaban, sp[i].soluong, sp[i].lai);
    }
    printf("|---|-----|----------------|--------|--------|--------|----------|\n");
}
void sapxeplai(struct SANPHAM sp[], int n)
{

    for(int i = 1; i<=n; i++)
    {
        struct SANPHAM temp;
        for(int j = i+1; j<=n; j++)
        {
            
            if (sp[i].lai<sp[j].lai)
            {
                temp = sp[i];
                sp[i] = sp[j];
                sp[j] = temp;
            }
        }
    }
    
}
void print10(struct SANPHAM sp[], int n)
{
    printf("|---|-----|----------------|--------|--------|--------|----------|\n");
    printf("|STT|MA SP|  TEN SAN PHAM  |GIA MUA |GIA BAN |SO LUONG|    LAI   |\n");
    printf("|---|-----|----------------|--------|--------|--------|----------|\n");
    for (int i = 1; i<=n;i++)
    {
        if(sp[i].soluong>10)
            printf("|%-2d |%-5s|%-16s|%-8li|%-8li|  %-4d  | %-9li|\n", i, sp[i].masp, sp[i].tensp, sp[i].giamua, sp[i].giaban, sp[i].soluong, sp[i].lai);
    }
    printf("|---|-----|----------------|--------|--------|--------|----------|\n");
}