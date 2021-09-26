#include <stdio.h>

int main()
{
    int n = 100, x;

    x = n;


    while (n != 0)
    {
       n /= 10;

    };
    printf("x = %d, n = %d\n", x, n);
    
    return 0;
};
