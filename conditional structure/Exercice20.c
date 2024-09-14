#include <stdio.h>
/*
----------------------------------------------------------------------------------------+
    Exercice 20 :

        In a city, residents pay taxes according to the following rules:

        - Men over 20 years old pay taxes.
        - Women pay taxes if they are between 18 and 35 years old.
        - Others do not pay taxes.

        Write a program that asks for the age and gender of a resident and
        displays whether they are taxable or not.
----------------------------------------------------------------------------------------+
*/

int main()
{

    // variables declaration
    int age;
    char gender;

    // user input

    printf("Enter your age : ");
    scanf("%d", &age);
    printf("Enter your gender (M or F) : ");
    scanf(" %c", &gender);

    // checking

    if (age >= 20 && gender == 'M')
    {
        printf("Sir, You are tax payer !");
    }
    else if (age >= 18 && age <= 35 && gender == 'F')
    {
        printf("Ma'am, You are tax payer !");
    }
    else
    {
        printf("You are not tax payer !");
    }

    return 0;
}