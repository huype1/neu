#include <stdio.h>
int main (void)
{
    int chisocu = 0, chisomoi = 0;
    int totale = 0, totale50 = 0, totale100 = 0;
    do{
    //printf("Nhap chi so dien cu: ");
    scanf("%d", &chisocu);
    }
    while (chisocu<0 || chisocu >= 1000);
    do{
    //printf("Nhap chi so dien moi: ");
    scanf("%d", &chisomoi);
    }
    while (chisomoi<0 || chisomoi >= 1000);
    totale = chisomoi - chisocu;
    if (totale <= 50)
    {
        printf("%d\n", totale*1500);
    }
    else if(totale < 100 && totale > 50)
    {
        totale50 = totale % 50;
        printf("%d\n", 50*1500+2300*totale50);
    }
    else if(totale == 100)
    {
        printf("%d\n", 50*1500+2300*50);
    }
    else if (totale > 100)
    {
        totale100 = totale % 100;
        printf("%d\n", 50*1500+2300*50+3500*totale100);
    }


}