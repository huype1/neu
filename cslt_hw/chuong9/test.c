#include<stdio.h>

int recursive(int i)

{

    static int count = 0;

    count = count + i;

    return count;

}

int main()

{

    int i, j;

    for (i = 0; i <= 5; i++)

        j = recursive(i);

    printf("%d\n", j);

    return 0;

}