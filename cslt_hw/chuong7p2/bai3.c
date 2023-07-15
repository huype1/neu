#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(void)
{
    char string[50];
    printf("Type a string: ");
    gets(&string);
    for (int i = 0; i<=strlen(string);i++)
    { 
        printf("%c", *(string+i));
        if(*(string+i) == ' '|| *(string+i) == '    ')
        {
            printf("\n");
        }  
    }
}