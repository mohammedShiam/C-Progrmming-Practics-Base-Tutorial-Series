#include <stdio.h>

int main()
{
    // TODO:Check whether a character is a vowel or consonant.

    char userChar;
    printf("Enter a Char for check vowel and Consonant\n");
    scanf("%c", &userChar);

    // A, E, I, O, U

    // switch (userChar)
    // {
    // case 'A':
    //     printf("%c is Vowel\n", userChar);
    //     break;
    // case 'E':
    //     printf("%c is Vowel\n", userChar);
    //     break;

    // case 'I':
    //     printf("%c is Vowel\n", userChar);
    //     break;
    // case 'O':
    //     printf("%c is Vowel\n", userChar);
    //     break;
    // case 'U':
    //     printf("%c is Vowel\n", userChar);
    //     break;
    // case 'a':
    //     printf("%c is Vowel\n", userChar);
    //     break;
    // case 'e':
    //     printf("%c is Vowel\n", userChar);
    //     break;
    // case 'i':
    //     printf("%c is Vowel\n", userChar);
    //     break;
    // case 'o':
    //     printf("%c is Vowel\n", userChar);
    //     break;
    // case 'u':
    //     printf("%c is Vowel\n", userChar);
    //     break;

    // default:
    //     printf("%c is Consonant\n", userChar);
    //     break;
    // }

    // SECOUND Method

    char upperCase = (userChar == 'A' || userChar == 'E' || userChar == 'I' || userChar == 'O' || userChar == 'U' );
    char lowerCase = (userChar == 'a' || userChar == 'e' || userChar == 'i' || userChar == 'o' || userChar == 'u' );

    if(upperCase || lowerCase){
            printf("%c is vowel\n", userChar);

    }else{
        printf("%c is consonant\n", userChar);
    }

    return 0;
}