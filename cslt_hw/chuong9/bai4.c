 
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
    FILE *f2;
    f2 =  fopen("C:\\Users\\dell\\Desktop\\C\\chuong9\\thisinh_sx.txt" , "r");
    if (f2 == NULL)
    {
        printf("Loi file");
        return 1;
    }
    int n = 3;
    fscanf(f2, "%d", &n);
    struct THISINH ts[n+1];
    printf("|---|----------|-------------------------------|------|\n");
    printf("|STT|    SBD   |          HO VA TEN            | DIEM |\n");
    printf("|---|----------|-------------------------------|------|\n");
    for (int i = 1; i <= n; i++) 
    {
        fscanf(f2, "%s", &ts[i].sbd);
        fgets(ts[i].hovaten,30, f2);
        ts[i].hovaten[strlen(ts[i].hovaten)-1]='\0';
        fscanf(f2, "%f", &ts[i].diem);
        printf("|%-3d| %-9s| %-30s| %-5.2f|\n", i, ts[i].sbd, ts[i].hovaten, ts[i].diem);
    }
    printf("|---|----------|-------------------------------|------|\n");
    printf("\n");
    struct THISINH temp;
    for (int i = 1; i < n; i++) 
    {
        for (int j = 2; j <= n; j++) 
        {
            if (ts[i].diem < ts[j].diem) 
            {
                temp = ts[i];
                ts[i] = ts[j];
                ts[j] = temp;
            }
        }
    }

    fclose(f2);
    FILE *f1 = fopen("C:\\Users\\dell\\Desktop\\C\\chuong9\\thisinh2.txt" , "w");
    if (f1 == NULL)
    {
        printf("Loi file");
        return 1;
    }
    fprintf(f1,"%d\n", n);
    for (int i = 1; i <= n; i++)
    {
        fprintf(f1, "%s ", ts[i].sbd);
        fprintf(f1, "%s\n", ts[i].hovaten);
        fprintf(f1, "%f\n", ts[i].diem);
    }
    
    fclose(f1);
    f2 =  fopen("C:\\Users\\dell\\Desktop\\C\\chuong9\\thisinh_sx.txt" , "r");
    if (f2 == NULL)
    {
        printf("Loi file");
        return 1;
    }
    fscanf(f2, "%d", &n);
    printf("|---|----------|-------------------------------|------|\n");
    printf("|STT|    SBD   |          HO VA TEN            | DIEM |\n");
    printf("|---|----------|-------------------------------|------|\n");
    for (int i = 1; i <= n; i++) 
    {
        fscanf(f2, "%s", &ts[i].sbd);
        fgets(ts[i].hovaten,30, f2);
        ts[i].hovaten[strlen(ts[i].hovaten)-1]='\0';
        fscanf(f2, "%f", &ts[i].diem);
        printf("|%-3d| %-9s| %-30s| %-5.2f|\n", i, ts[i].sbd, ts[i].hovaten, ts[i].diem);
    }
    printf("|---|----------|-------------------------------|------|\n");
    fclose(f2);
}