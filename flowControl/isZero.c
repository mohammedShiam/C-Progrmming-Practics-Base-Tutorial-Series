#include <stdio.h>

int main()
{
    int num;
    printf("Enter an intiger number\n");

    scanf("%d", &num);

    if(num == 0){
        printf("%d is zero\n", num);
        
    }else if(num > 0){
                printf("%d is positive number\n", num);

    }else{
        printf("%d is negative number\n", num);

    }

    return 0;
}