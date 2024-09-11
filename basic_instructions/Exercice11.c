#include <stdio.h>
#include <ctype.h>
/*
------------------------------------------------------------------------------------+
    Exercice 11 :

        Write a program that calculates and displays the equivalent resistance of
        three resistors R1, R2, and R3:
            * If the resistors are connected in series.
            * If the resistors are connected in parallel.
------------------------------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    float R1, R2, R3, result;
    char R_Type;

    // user input
    printf("Enter the value of R1 : ");
    scanf("%f", &R1); // store the user input in the variable R1

    printf("Enter the value of R2 : ");
    scanf("%f", &R2); // store the user input in the variable R2

    printf("Enter the value of R3 : ");
    scanf("%f", &R3); // store the user input in the variable R3

    printf("\nEnter resistance type (P)parallel || (S)series || (B) both : ");
    scanf(" %c", &R_Type); // store the user input in the variable R_Type

    R_Type = toupper(R_Type); // convert the user input to uppercase to avoid errors

    // logic and calculation

    if (R_Type == 'S') // if the user input is 'S' or 's' then the program will calculate the equivalent resistance in series
    {
        result = R1 + R2 + R3;
        printf("The equivalent resistance is : %.2f", result);
    }
    else if (R_Type == 'P') // if the user input is 'P' or 'p' then the program will calculate the equivalent resistance in parallel
    {
        result = (R1 * R2 * R3) / ((R1 * R2) + (R1 * R3) + (R2 * R3));
        printf("The equivalent resistance is : %.2f", result);
    }
    else
    {
        float parallel_result = (R1 * R2 * R3) / ((R1 * R2) + (R1 * R3) + (R2 * R3));
        float series_result = R1 + R2 + R3;
        printf("\nThe equivalent \" parallel \" resistance is : %.2f", parallel_result);
        printf("\nThe equivalent \" series \" resistance is : %.2f", series_result);
    }
    return 0;
}