#include <stdio.h>
int nhapptu();
int giaithua(int n);
int tonggt(int n);
void main()
{
    int n = nhapptu();
    printf("n! = %d\n", giaithua(n));
    printf("S = %d\n", tonggt(n));
    
}
int nhapptu()
{
    int n;
    do {
    printf("n = ");
    scanf("%d", &n);
    } while (n<0);
    return n;
}
int giaithua(int n)
{
    if(n == 0 || n == 1)
        return 1;
    else 
        return n*giaithua(n-1);
}
int tonggt(int n)
{
    int sum = 0;
    if (n == 1 || n == 0)
        return 1;
    else {
        for(int i = 1; i<= n;i++) {
            if (n % 2 == 0 && i%2 == 0)
            {
                sum = sum + giaithua(i);
            }
            else if (n % 2 != 0 && i%2 != 0)
            {
                sum = sum + giaithua(i);
            }
            return sum;
        }
    }
}