#include <stdio.h>
/*
---------------------------------------------------------------+
    Exercice 2 :

        Write a program that asks the user
        for the width and length of a rectangle,
        and then displays its perimeter and area
---------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    float Width, Length, Perimeter, Area;

    // user input
    printf("Enter the width of the rectangle : ");
    scanf("%f", &Width); // store the user input in the variable Width

    printf("Enter the length of the rectangle : ");
    scanf("%f", &Length); // store the user input in the variable Length

    // calculation
    Perimeter = 2 * (Width + Length);
    Area = Width * Length;

    // output
    printf("\nThe perimeter of the rectangle is : %.2f", Perimeter);
    printf("\nThe area of the rectangle is : %.2f", Area);

    return 0;
}