#include <stdio.h>

int calcPower(int v, int i);
int main()
{
    // TODO: 05. How do you calculate power in a circuit.
    int v, i;

    printf("Enter voltage and current\n");

    scanf("%d %d", &v, &i);

    printf("Power in a circuit P = %d x %d\nP = %d\n",v, i,calcPower(v, i));
    
    return 0;   
}

int calcPower(int v, int i){
    return v*i;
}