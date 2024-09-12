#include <stdio.h>
/*
-------------------------------------------------------------------------------+
    Exercice 13 :

        Write a program that swaps the contents of two numeric values if they
        have the same sign. otherwise, it stores their sum in
        the first value and their product in the second
-------------------------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    float A, B, SUM, PRODUCT;

    // user input
    printf("Enter the value of A : ");
    scanf("%f", &A); // store the user input in the variable A

    printf("\nEnter the value of B : ");
    scanf("%f", &B); // store the user input in the variable B

    // chacking
    if (A * B >= 0) // if A and B have the same sign
    {
        A = A + B;
        B = A - B;
        A = A - B;
        printf("A = %f,\n B = %f", A, B);
    }
    else // if A and B have different signs
    {
        SUM = A + B;
        PRODUCT = A * B;
        printf("\nSUM = %f,\n PRODUCT = %f", SUM, PRODUCT);
    }

    return 0;
}