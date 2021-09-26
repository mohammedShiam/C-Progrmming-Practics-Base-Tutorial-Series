#include <stdio.h>

int main()
{
    //TODO:  Count number of digits of an integer.

    int num;
    int count = 0;
    printf("Enter a intiger number\n");
    scanf("%d", &num);

    do
    {
        printf("After each itaration %d\n", num);
        count ++;

        num /= 10; //num = num / 10;
    } while (num != 0);

    printf("Enter %d digits of given intiger number\n", count);
    return 0;
}