#include <stdio.h>

int main()
{
    //TODO:Calculate the power of a number.
    // int num;
    // printf("Enter an intiger number\n");
    // scanf("%d", &num);

    // printf("The power of %d is %d\n", num, num*num);

    int num1;
    int num2;
    int power;
    printf("Enter an intiger number\n");
    scanf("%d", &num1);
    printf("Enter an intiger number for power\n");
    scanf("%d", &num2);

    
    for(int i = num2; i > 0; i-- ){
        num1*=num1;
    }
    printf("%d\n", num1);
    return 0;    
}