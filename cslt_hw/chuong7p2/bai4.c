#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(void)
{
    char string[50];
    printf("Type a string: ");
    gets(&string);
    int words = 0;
    for (int i = 0; i<strlen(string)+1;i++)
    {  
        if(*(string+i) == ' '||*(string+i) == '.' ||*(string+i) == '?'||*(string+i) == '!'||*(string+i) == '\0')
        {
            words+=1;
        }
        if((*(string+i) == '.' ||*(string+i) == '?'||*(string+i) == '!') && *(string+i+1) == ' ')
        {
            words-=1;
        }
    }
    if(string[strlen(string)-1] == '.' ||string[strlen(string)-1] == '?'||string[strlen(string)-1] == '!')
        {
            words-=1;
        }
    printf("The number of words is: %d\n", words);
}