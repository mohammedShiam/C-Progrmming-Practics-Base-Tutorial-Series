#include <stdio.h>

int main()
{
    // int num = 5;
    // printf("Enter a intiger number\n");
    // scanf("%d", &num);
    // for(int i = 1; i < 11; i++){
    //     printf("%d x %d = %d\n",num, i, num*i);
    // }

    int startNumber, endNumber;
    printf("Enter the start number\n");
    scanf("%d", &startNumber);
    printf("Enter the end number\n");
    scanf("%d", &endNumber);

    for(int i = startNumber; i < endNumber + 1; i++){
        printf("The maliplication table of %d\n", i);
        for(int x = 1; x < 11; x++){
            printf("%d x %d = %d\n",i, x, i*x);
        }
        printf("\n\n");
        
    }
    return 0;
};