#include <stdio.h>

int fact(int number);
int main()
{
    int number;
    printf("Enter you number\n");
    scanf("%d", &number);

    printf("The value of %d factorial is %d\n", number, fact(number));

    return 0;
}

int fact(int number){

    if(number == 1){
        return number;
    }else{
        return number * fact(number - 1);
    }
}