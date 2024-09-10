#include <stdio.h>
/*
---------------------------------------------------------------+
    Exercice 1 :

        Take the date of birth and calculate your age |
---------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    int User_Input, Age_Calulated;

    // user input
    printf("Hello, please enter your Year of birth : ");
    scanf("%d", &User_Input); // store the user input in the variable User_Input

    // calculation
    Age_Calulated = 2024 - User_Input;

    // output
    printf("Well done, Your age is : %d", Age_Calulated);

    return 0;
}