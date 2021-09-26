#include <stdio.h>

int main()
{
    int num;
    printf("Enter a intiger number\n");
    scanf("%d", &num);
    int fact = 1;

    for(int i = num; 1 < i; i--)
    {
        fact*=i;
       
    }
    printf("The factorial of %d = %d\n", num, fact); 
    return 0;
}

// 4! =  4 x 3 x 2 x 1