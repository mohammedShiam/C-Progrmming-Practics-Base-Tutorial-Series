#include <stdio.h>

int main()
{   
    int year;

    printf("Enter a year\n");

    scanf("%d", &year);

    if(year % 4 == 0){
        printf("%d is leap year\n", year);

    }else if(year % 400 == 0){
        printf("%d is leap year\n", year);
        
    }else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}

// year / 4 = 0 , 100 / 400 = 0