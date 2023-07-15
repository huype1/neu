#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(void)
{
    printf("Please input a string: ");
    char *str1[100], *str2[100], *str3[100];
    gets(&str1);
    printf("You've typed: %s\n", str1);
    printf("Invert to uppercase letter: %s\n", strupr(str1));
    printf("Invert to lowercase letter: %s\n", strlwr(str1));
    strcpy(str2, str1);
    strrev(str2);
    printf("Read the string backwards: %s\n", str2);
    int n, m;
    do
    {
        printf("n = ");
        scanf("%d", &n);
    } while (n<0 || n > 1000);
    printf("Read the first %d letter from the string: %s\n", n, strncpy(str3, str1, n));
    do
    {
        printf("m = ");
        scanf("%d", &m);
    } while (m<0 || m > 1000);
    printf("Read from the string: %s\n",strnset(str1, m, n));
}