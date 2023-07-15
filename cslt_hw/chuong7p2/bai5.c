#include <stdio.h>
#include <conio.h>
#include <string.h>
int compare(char *string, char *rvstring);
int main(void)
{
    int true = 0;
    char string[50], rvstring[50];
    printf("Type a string: ");
    gets(&string);
    strcpy(rvstring, string);
    strrev(rvstring);
    if(strcmp(string, rvstring) == 0 )
      printf("%s is a palindrome.\n", string);
   else
      printf("%s is not a palindrome.\n", string);


}
