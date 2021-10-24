#include <stdio.h>

void calcAreaOfCircel();
int main()
{
    calcAreaOfCircel();


    return 0;
}

void calcAreaOfCircel(){
    float radias;
    printf("Enter a radias\n");
    scanf("%f", &radias);

    printf("The Area Of Circel is %.3f cm\n", 3.1416 * radias * radias);
};