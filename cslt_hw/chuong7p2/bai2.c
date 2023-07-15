#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(void)
{
    
    int countl = 0;
    char string[50];

    printf("Type a string: ");
    gets(&string);
    countl = strlen(string);
    printf("The string length is: %d\n", countl);
    const int x = 2000;
    int arr[x];
    for(int i = 0;i < x; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i< strlen(string);i++)
    {
        arr[(int)*(string+i)]++;
    }
    
    for (int i = 0; i< x;i++)
    if(arr[i]>0)
    {
        printf("letter %c apear %d time\n", i, arr[i]);
    }

}