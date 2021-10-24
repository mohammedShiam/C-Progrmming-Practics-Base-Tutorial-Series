#include <stdio.h>

int sumOfNaturalNumber(int number);
int main()
{
    // TODO: 11. Find the sum of natural numbers using recursion.
    int number;
    printf("Enter End Point\n");
    scanf("%d", &number);

    printf("Sum of 1 to %d is equals to %d\n", number, sumOfNaturalNumber(number));

    return 0;
}

int sumOfNaturalNumber(int number)
{
    

    if(number != 0){
        printf("number inner if %d\n", number);
        return number + sumOfNaturalNumber(number -1);
    }else{
        return number;
    }
    
}
