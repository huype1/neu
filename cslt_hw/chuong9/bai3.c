#include <stdio.h>
#include <string.h>
struct THISINH
{
    char sbd[10];
    char hovaten[30];
    float diem;
};

int main (void)
{
    
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n < 0 || n>100);
    struct THISINH ts[n+1];
    FILE *f2;
    f2 =  fopen("C:\\Users\\dell\\Desktop\\C\\chuong9\\thisinh_sx.txt" , "w");
    if (f2 == NULL)
    {
        printf("Loi file");
        return 1;
    }
    int o = fprintf(f2,"%d\n", n);
    for(int i = 1;i<=n;i++)
    {
        printf("Nhap sbd \n");
        fflush(stdin);
        fscanf(stdin, " ");
        fgets(ts[i].sbd, sizeof(ts[i].sbd), stdin);
        ts[i].sbd[strlen(ts[i].sbd)-1]='\0';
        printf("Nhap ho va ten \n");
        fflush(stdin);
        fscanf(stdin, " ");
        fgets(ts[i].hovaten, sizeof(ts[i].hovaten), stdin);
        ts[i].hovaten[strlen(ts[i].hovaten)-1]='\0';
        printf("nhap diem\n");
        scanf("%f", &ts[i].diem);
    } 
    for (int i = 1; i <= n; i++)
    {
        fprintf(f2, "%s ", ts[i].sbd);
        fprintf(f2, "%s", ts[i].hovaten);
        fprintf(f2, "\n");
        fprintf(f2, "%f", ts[i].diem);
        fprintf(f2, "\n");
    }
    fclose(f2);

    struct THISINH temp;
    for (int i = 1; i <  n; i++) 
    {
        for (int j = 2; j <= n; j++) 
        {
            if (strcmp(ts[i].hovaten, ts[j].hovaten) > 0) 
            {
                temp = ts[i];
                ts[i] = ts[j];
                ts[i] = temp;
            }
        }
    }



}
