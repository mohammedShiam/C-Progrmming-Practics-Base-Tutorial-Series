#include <stdio.h>

int main()
{
    //TODO: Reverse a number. 
    
    int num, rev = 0, rem;

    printf("Enter an intiger number\n");
    scanf("%d", &num);

    while (num != 0)
    {
        rem = num % 10;

        rev = rev * 10 + rem;
        num /= 10;
    };

    printf("The reverse of this number is %d\n", rev);
    return 0;
}