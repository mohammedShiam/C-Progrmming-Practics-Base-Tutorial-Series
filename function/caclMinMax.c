#include <stdio.h>

int minimumNUmber(int n1, int n2, int n3);
int maxmimumNUmber(int n1, int n2, int n3);
int main()
{
    // TODO: 17. Find Minimum & Maximum in Three Numbers by Function.

    int num1, num2, num3;
    printf("Enter three number for calculating maximum number\n");

    scanf("%d %d %d", &num1, &num2, &num3);

    int num4, num5, num6;
    printf("Enter three number for calculating minimum number\n");

    scanf("%d %d %d", &num4, &num5, &num6);

    printf("Maximum number of %d %d %d is %d\n",num1, num2, num3, maxmimumNUmber(num1, num2, num3));

    printf("Minimum number of %d %d %d is %d\n",num4, num5, num6, minimumNUmber(num4, num5, num6));
    

    return 0;
}
int maxmimumNUmber(int n1, int n2, int n3){
    if(n1 >= n2 && n1 >= n3)return n1;

    else if(n2 >= n3 && n2 >= n1)return n2;
    else return n3;

}

int minimumNUmber(int n1, int n2, int n3){
    if(n1 <= n2 && n1 <= n3)return n1;

    else if(n2 <= n3 && n2 <= n1)return n2;
    
    else return n3;

}