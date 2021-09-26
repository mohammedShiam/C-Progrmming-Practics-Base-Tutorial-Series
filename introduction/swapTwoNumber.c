#include <stdio.h>

int main()
{
    // with taken a variable
    // int num1 = 10, num2 = 20, temp;

    // printf("Befor swap num1 = %d\tnum2 = %d\n", num1, num2);
    // temp = num1; //temp = 10

    // num1 = num2; //num1 = 20
    // num2 = temp;

    // printf("After swap num1 = %d\tnum2 = %d\n", num1, num2);

    // Without taken a variable
    // int num1 = 20, num2 = 10;
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Befor swap num1 = %d\tnum2 = %d\n", num1, num2);
    

    num1 = num1 + num2; //num1 = 10 + 20 = 30;

    num2 = num1 - num2; //num2 = 30 - 20 = 10;
    num1 = num1 - num2; //num1 = 30 - 10 = 20;

    printf("After swap num1 = %d\tnum2 = %d\n", num1, num2);


    return 0;
}