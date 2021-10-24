#include <stdio.h>

int areaOftriangle(int b, int h){
    return (1*h*b)/2;
}
int main()
{
    // TODO: 04. Area of Triangle.

   int b, h;
    printf("Enter base and height \n");

    scanf("%d %d", &b, &h);
    printf("Area of triangle %d \n", areaOftriangle(b, h));


    return 0;
}

