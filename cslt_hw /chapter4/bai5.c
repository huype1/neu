#include <stdio.h>
#include <math.h>

int main (void)
{
    float r = 0;
    
    const float pi = 3.14159265359;
    printf("Enter the sphere radius: ");
    scanf("%f", &r);
    //tinh toan
    float S = 4 * pi * pow (r, 2);
    float V = (4/3) * pi * pow (r, 3);
    printf("S = %f\n", S);
    printf("V = %f", V);
}