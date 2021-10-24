#include <stdio.h>

void reversSent();
int main()
{
    printf("Enter a sentence\n");
    reversSent();
    printf("\n");
    
    return 0;
}

void reversSent(){
    

    char sent;

    scanf("%c", &sent);

    if(sent != '\n'){
        reversSent();
        printf("%c\n", sent);
    }
}