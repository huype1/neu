#include <stdio.h>
int main(void)
{
    int muoi, hai ,nam, tong;
    for (muoi = 1; muoi <=20; muoi++)
    {
        for(hai = 1; hai<= 10; hai++)
        {
            for(nam = 1; nam <= 4; nam ++)
            {
                tong = muoi*10000 + hai*20000+ nam*50000;
                if (tong == 200000)
                {
                    printf("10k: %d, 20k: %d, 50k: %d\n", muoi, hai, nam);
                }
            }
        }
    }
}