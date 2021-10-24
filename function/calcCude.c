#include <stdio.h>

float cube();
int main()
{
    // TODO: 16. C Program to Find the Cube of a Number Using Functions.
    printf("Your result%.3f\n", cube());
   
    return 0;
}

float cube(){
    printf("Enter A number\n");
    float number;
    scanf("%f", &number);

    return number * number * number;
}