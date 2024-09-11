#include <stdio.h>
#include <math.h>
/*
------------------------------------------------------------------------------------+
    Exercice 10 :

        Write a program that calculates and displays the distance between
        two points A and B on a plane.
        The coordinates (XA, YA) and (XB, YB) are entered by the user as integers.
        Note: Use the functions pow() and sqrt() to compute powers and square roots
------------------------------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    float X_a, Y_a, X_b, Y_b, Distance;
    // user input
    printf("Enter the value of X_a : ");
    scanf("%f", &X_a); // store the user input in the variable X_a

    printf("Enter the value of Y_a : ");
    scanf("%f", &Y_a); // store the user input in the variable Y_a

    printf("Enter the value of X_b : ");
    scanf("%f", &X_b); // store the user input in the variable X_b

    printf("Enter the value of Y_b : ");
    scanf("%f", &Y_b); // store the user input in the variable Y_b

    // calculation
    Distance = sqrt(pow((X_b - X_a), 2) + pow((Y_b - Y_a), 2));

    // output
    printf("The distance between A and B is : %.2f", Distance);

    return 0;
}