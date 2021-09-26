#include <stdio.h>

int main()
{
    int base, power, result = 1;
 
    printf("Enter a base and power \n");

    scanf("%d %d", &base, &power);

    while (power != 0)
    {
        result *= base;
        // printf("%d\n", result);
        --power;
    };

    printf("Enter value\n", result);

    

    return 0;
}