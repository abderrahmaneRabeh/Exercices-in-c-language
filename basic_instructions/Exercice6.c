#include <stdio.h>
/*
-------------------------------------------------------------------------------+
    Exercice 6 :

        Write a program that prompts the user to enter the radius of a sphere,
        then calculates and displays its volume.
-------------------------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    float Radius, Volume;
    const float PI = 3.14; // We need to define PI as a constant to avoid any changes.

    // user input
    printf("Enter the radius of the sphere : ");
    scanf("%f", &Radius); // store the user input in the variable Radius

    // calculation
    Volume = 4 * PI * (Radius * Radius * Radius) / 3;

    // output
    printf("The volume of the sphere is : %.2f", Volume);

    return 0;
}