#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(void)
{
    char string[50];
    printf("Type a string: ");
    gets(&string);
    int i = 0;
    int vowels = 0;
    int consonants = 0;
    while(string[i] != '\0')
     {
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' )
        vowels++;
        else
        consonants++;
        i++;
    }
   printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", string, vowels, consonants);

   return 0;
}
