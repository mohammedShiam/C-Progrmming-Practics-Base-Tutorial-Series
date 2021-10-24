#include <stdio.h>
void giveMeSomething(char msg[40], int age);
int main()
{
    char s[10] = "name";
    int age = 10;
    giveMeSomething(s, age);
    return 0;
}

void giveMeSomething(char msg[40], int age){

    printf("name:%s \tAge: %d\n", msg, age);
}