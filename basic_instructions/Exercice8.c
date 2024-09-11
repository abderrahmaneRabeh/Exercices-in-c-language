#include <stdio.h>
/*
---------------------------------------------------------------------------------+
    Exercice 8 :

        Write a program that prompts the user to enter two integers, A and B,
        then swaps the values of A and B without using any additional variables,
        and finally displays A and B.
---------------------------------------------------------------------------------+
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

    // output before swapping
    printf("BEFORE : A = %d, B = %d", A, B);

    // swapping
    A = A + B;
    B = A - B;
    A = A - B;

    // output after swapping
    printf("\nAFTER : A = %d, B = %d", A, B);

    return 0;
}