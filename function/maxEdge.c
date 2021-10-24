#include <stdio.h>
void maxEdge(int x, int y);
int main()
{
    // TODO: 06. Maximum range of third edge of a triangle.
    // max edge = (side1 + side2) - 1

    int side1, side2;

    printf("Enter side1 and side2\n");
    scanf("%d %d", &side1, &side2);
    maxEdge(side1, side2);

    return 0;
}

void maxEdge(int x, int y){

    printf("Maximum range of third edge of a triangle %d\n", (x+y)-1);
}