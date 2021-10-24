#include <stdio.h>

int power(int base, int powerNumber);
int main()
{
    int base, powerNumber;
    printf("Enter base\n");
    scanf("%d", &base);
    printf("Enter powerNumber\n");
    scanf("%d", &powerNumber);

    int result = power(base, powerNumber);

    printf("%d^%d = %d\n", base, powerNumber, result); 
  return 0; 
}
int power(int base, int powerNumber){
    
    if(powerNumber != 0){
        return (base * power(base, powerNumber-1));
    }else
    return 1;
}

    
