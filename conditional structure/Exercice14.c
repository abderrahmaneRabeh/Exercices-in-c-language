#include <stdio.h>
/*
-------------------------------------------------------------------------------+
    Exercice 14 :

        Create a program that takes a character input from
        the user and uses a switch statement to print whether
        the character is a vowel (a, e, i, o, u) or a consonant.
-------------------------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    char alphabet;

    // user input
    printf("Enter an alphabet : ");
    scanf("%c", &alphabet);

    // Cheking by using switch statement
    switch (alphabet)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    default:
        printf("Consonant");
    }

    return 0;
}