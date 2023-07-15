#include <stdio.h>
void main()
{   int c;
    int *p = &c;
    c = 65;
    for (int i = 0; i<26; i++)
    {
        printf("%c ", *(p)+i);
    }
}