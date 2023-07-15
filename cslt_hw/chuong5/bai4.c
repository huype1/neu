#include <stdio.h>
int main (void)
{
    int count;
    int i = 0;
    for (count = 1; ; count++)
    {
        i = i + count;
        if (i > 10000)
        {
            break;
        }
    }
    printf ("%d", count);
}