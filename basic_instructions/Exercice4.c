#include <stdio.h>
/*
---------------------------------------------------------------+
    Exercice 4 :

        Write a program calculates the 
        sum, product, difference, and quotient of two real numbers.
---------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    float X, Y, Sum, Product, Difference, Quotient;

    // user input
    printf("Enter the value of X : ");
    scanf("%f", &X); // store the user input in the variable X

    printf("Enter the value of Y : "); 
    scanf("%f", &Y); // store the user input in the variable Y


    // calculation

    Sum = X + Y;
    Product = X * Y;
    Difference = X - Y;
    Quotient = X / (int)Y;

    // output

    printf("\n %.2f + %.2f = : %.2f",X,Y, Sum);
    printf("\n %.2f * %.2f : %.2f",X,Y, Product);
    printf("\n %.2f - %.2f : %.2f",X,Y, Difference);
    printf("\n %.2f / %.2f : %.2f",X,Y, Quotient);
    
    return 0;
}