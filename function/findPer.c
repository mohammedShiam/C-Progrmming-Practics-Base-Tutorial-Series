#include <stdio.h>

void findPermeter();
int main()
{
    // TODO: Find the Perimeter of a Rectangle.
    // p = 2(l+w)

    findPermeter();

    return 0;
}

void findPermeter(){
    printf("Enter length and width on a rectangle\n");
    int length, width;
    scanf("%d %d", &length, &width);

    printf("Perimeter of a Rectangle is %d\n", 2*(length+width));
}