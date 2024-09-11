#include <stdio.h>
/*
-----------------------------------------------------------------------------+
    Exercice 7 :

        Write a program that prompts the user to enter two integers, A and B,
        then swaps the values of A and B and displays the result.
-----------------------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    int A, B, Temp_Variable;

    // user input
    printf("Enter the value of A : ");
    scanf("%d", &A); // store the user input in the variable A

    printf("Enter the value of B : ");
    scanf("%d", &B); // store the user input in the variable B

    // output before swapping
    printf("BEFORE : A = %d, B = %d", A, B);

    // swapping
    Temp_Variable = A;
    A = B;
    B = Temp_Variable;

    // output after swapping
    printf("\nAFTER : A = %d, B = %d", A, B);

    return 0;
}