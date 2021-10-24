#include <stdio.h>

int isLessThenEqualOrZero(int number);
int main()
{
    // TODO: 10. Is the Number Less than or Equal to Zero?
    int number;
    printf("Enter a intiger number\n");
    scanf("%d", &number);

    isLessThenEqualOrZero(number);

    return 0;
}

int isLessThenEqualOrZero(int number){
    if(number < 0){
        printf("%d is Less then zero\n", number);
        return 0;
    }
    if(number == 0){
        printf("%d is Equal to zero\n", number);
        return 0;
    }else{
        printf("%d is Gater then zero\n", number);

    }
}