#include <stdio.h>
/*
-------------------------------------------------------------------------------+
    Exercice 12 :

        Write a program that determines if two given integers
        have the same sign or not.
-------------------------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    int A, B;

    // user input
    printf("Enter the value of A : ");
    scanf("%d", &A); // store the user input in the variable A

    printf("Enter the value of B : ");
    scanf("%d", &B); // store the user input in the variable B

    // chacking

    (A >= 0 && B >= 0) || (A <= 0 && B <= 0) ? printf("The numbers have the same sign")
                                             : printf("The numbers have different signs");

    return 0;
}