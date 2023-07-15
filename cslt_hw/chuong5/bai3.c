#include <stdio.h>
int main(void)
{ 
    int m;
    do
    {
        printf("Nhap vao mot thang trong nam: ");
        scanf("%d", &m);   
    } while (m < 1||m > 12);
    switch (m )
    {
    case 1:
    case 2:
    case 3:
        printf("Quy 1\n");
        break;
    case 4:
    case 5:
    case 6:
        printf("Quy 2\n");
        break;
    case 7:
    case 8:
    case 9:
        printf("Quy 3\n");
        break;
    case 10:
    case 11:
    case 12:
        printf("Quy 4\n");
        break;
    }


}