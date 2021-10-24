#include <stdio.h>

int next(int number){

    return ++number;
    
}
int main()
{
    // TODO: 03. Return the Next Number from the Integer Passed.
    int num;

    printf("Enter a intiger number\n");
    scanf("%d", &num);

    printf("Your next number is %d\n", next(num));
    return 0;
}
