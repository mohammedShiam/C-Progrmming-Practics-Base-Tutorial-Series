#include <stdio.h>

int main()
{
    // TODO:  Find the largest number among three numbers.

    int num1, num2, num3;
    printf("Enter 3 intiger number\n"); 
    scanf("%d %d %d", &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3){
        printf("%d is large number\n", num1);
    } else if(num2 > num3 && num2 > num1){
        printf("%d is large number\n", num2);
    }else{
        printf("%d is large number\n", num3);
    }
    return 0;
}