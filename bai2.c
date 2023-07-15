#include <stdio.h>
int main (void)
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    c = (double)c;
    c = c + 1;
    c = (char)c;
    printf("The next character according to ASCII is: %c", c);
}