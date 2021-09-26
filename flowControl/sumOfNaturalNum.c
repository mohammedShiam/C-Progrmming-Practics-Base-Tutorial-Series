#include <stdio.h>

int main()
{ 
    // TODO: Find the sum of natural numbers.

    int startNumber, endNumber, sum = 0;

    printf("Enter a natural star number\n");
    scanf("%d", &startNumber);

    printf("Enter a natural End number\n");
    scanf("%d", &endNumber);

    for(int i = startNumber; endNumber >= i; i++ ){
        printf(" Sum of %d + %d = %d\n", sum, i, sum+i);
        sum+=i; //sum = sum + i;
        printf(" Sum of %d + %d = %d\n", sum, i, sum+i);
    }
    printf("The sum of %d - %d = %d\n", startNumber, endNumber, sum);


    return 0;
}