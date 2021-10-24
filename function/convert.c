#include <stdio.h>
int getMin(int h);
int getSecound(int m);
int main()
{
    // TODO: 02. Convert hours into minutes, minutes into seconds.
    int hours, min;

    printf("Enter hours\n");
    scanf("%d", &hours);
    min = getMin(hours);
    printf("%d hours is equal to %d minutes is equal to %d secound\n", hours, min, getSecound(min));




    return 0;
}

int getMin(int h){

    return h * 60;
}
int getSecound(int m){
    return m * 60;
}