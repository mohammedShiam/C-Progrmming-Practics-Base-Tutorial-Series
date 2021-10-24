#include <stdio.h>

int sum(int x, int y);
int main()
{
    // TODO: 01. Return the sum of two number.
    int x, y;
    printf("Enter a two value for sum\n");
    scanf("%d %d", &x, &y);
    printf("%d\n", sum(x, y));
    // sum(x, y);

    return 0;
}

int sum(int x, int y){
    return x + y;
}