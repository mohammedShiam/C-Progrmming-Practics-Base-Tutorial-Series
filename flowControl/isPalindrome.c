#include <stdio.h>

int main()
{
    int num, rev = 0, rem, origianl;

    printf("Enter an intiger number\n");
    scanf("%d", &num);
    origianl = num;

    while (num != 0)
    {
        rem = num % 10;

        rev = rev * 10 + rem;
        num /= 10;
    };

    if (origianl == rev)
    {
        printf("%d is palindrome\n", origianl);
    }
    else
    {
        printf("%d is not palindrome\n", origianl);
    }
    return 0;
}