#include <stdio.h>
int main()
{
    char filenguon[1000], str[1000];
    char filedich[1000];
    FILE *f1, *f2;
    printf("Nhap vao duong dan cua file nguon: ");
    fflush(stdin);
    gets(filenguon);
    f1 = fopen(filenguon, "r");
    if (f1 == NULL)
    {
        printf("Loi file");
        return 1;
    }

    printf("Nhap vao duong dan cua file dich: ");
    fflush(stdin);
    gets(filedich);
    f2 = fopen(filedich, "a");
    if (f2 == NULL)
    {
        printf("Loi file");
        return 1;
    }

    while (fgets(str, 1000, f1) != NULL) 
    {
        fputs(str, f2);
    }
}