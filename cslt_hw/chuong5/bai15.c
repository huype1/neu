#include <stdio.h>
int n = 0;
int fibonacci(int i)
{
    if (i ==0 || i ==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(i-1) + fibonacci(i-2);
    }
}
int main (void)
{
    
    do
    {
       // printf("Nhap vao n: ");
        scanf("%d", &n);
    }
    while (n <= 3 && n >= 1000000);
    for (int x = 0; x <n; x ++ )
    {
        printf("%d ", fibonacci(x));
    }

}