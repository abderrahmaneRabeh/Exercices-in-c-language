#include <stdio.h>
#include <math.h> // for pow function
/*
---------------------------------------------------------------+
    Exercice 2 :

        Write a program that asks the user to
        enter two real numbers, X and Y,
        and then displays the power of X to the power of Y.
---------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    float X, Y, Power;

    // user input
    printf("Enter the value of X : ");
    scanf("%f", &X); // store the user input in the variable X

    printf("Enter the value of Y : ");
    scanf("%f", &Y); // store the user input in the variable Y

    // calculation
    Power = pow(X, Y);

    // output
    printf("The power of X to the power of Y is : %.2f", Power);
    return 0;
}