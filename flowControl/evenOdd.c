#include <stdio.h>

int main()
{
    // TODO: Check whether a number is even or odd.
    int num1;
    printf("Enter a intiger number\n");
    scanf("%d", &num1);

    if(num1%2 == 0){
        printf("%d is Even\n", num1);
    }else{
        printf("%d is odd Number\n", num1);
    }
    return 0;
}