#include <stdio.h>
int main (void)
{
    int ga, cho;
    for (ga = 1; ga < 36; ga++)
    {
        for (cho = 1; cho < 36; cho++)
        {
            if (cho + ga ==36 && 2*ga + 4*cho == 100)
            {
                printf("So ga la: %d, so cho la: %d", ga, cho);
            }

        }
    }

}