#include <stdio.h>
#include <math.h>
int main (void)
{
    float a, x, y, z;
    printf("type an integer: ");
    scanf("%f", &a);
    x = pow(a, 2);
    y = pow(a, 3);
    z = pow(a, 4);
    printf("square root: %f , pow 3: %f, pow 4: %f", x, y, z);


}