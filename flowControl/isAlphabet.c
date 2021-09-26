#include <stdio.h>

int main()
{
   char ch;
   printf("Enter a char\n");
   scanf("%c", &ch);

   if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
       printf("%c is a char\n", ch);
   }else{
       printf("%c is not char\n", ch);
   }

    return 0;
}