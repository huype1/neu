#include <stdio.h>
int main (void)
{
    int traudung, traunam, traugia;
    int tongtrau, co;
    for (traudung = 1; traudung < 100; traudung++)
    {
        for (traunam = 1; traunam <= 100; traunam++)
        {
            for (traugia = 1; traugia <=100 ; traugia++)
            {
                tongtrau = traudung + traugia + traunam;
                co = traudung*15 + traunam*9 + 1*traugia;
                if ( tongtrau == 100  && co == 300)
                {
                    printf("So trau dung la %d, So trau nam la: %d, So trau gia la: %d\n", traudung , traunam , traugia );
                }
            } 
        }
    }
}