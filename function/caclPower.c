#include <stdio.h>

int power(int base, int powerNumber);
int main()
{
    // TODO: 14. Calculate the power of a number using recursion.

    int base, powerNumber;
    printf("Enter a base\n");
    scanf("%d", &base);

    printf("Enter a power\n");
    scanf("%d", &powerNumber);

    int result = power(base, powerNumber);

    printf("%d ^ %d = %d\n", base, powerNumber, result);

    return 0;
}

int power(int base, int powerNumber)
{

    if (powerNumber != 0)
    
        return base * power(base, powerNumber - 1);
    
    else
       
         return 1;

       
}