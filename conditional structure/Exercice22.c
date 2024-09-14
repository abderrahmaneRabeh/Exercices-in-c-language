#include <stdio.h>
/*
----------------------------------------------------------------------------------------+
    Exercice 22 :

       Write a program that asks the user to enter a number, and based on the input,
       performs the following actions:

        - If the number is 6: display "The character moves to the right."
        - If the number is 4: display "The character moves to the left."
        - If the number is 8: display "The character moves up."
        - If the number is 2: display "The character moves down."
        - For any other input: display "Input error, the character does not move."
----------------------------------------------------------------------------------------+
*/

int main()
{

    // variables declaration
    int direction_bumber;

    // user input
    printf("Enter a number direction : ");
    scanf("%d", &direction_bumber);

    // checking and output

    switch (direction_bumber)
    {
    case 2:
        printf("The character moves down.");
        break;
    case 4:
        printf("The character moves to the left.");
        break;
    case 6:
        printf("The character moves to the right.");
        break;
    case 8:
        printf("The character moves up.");
        break;
    default:
        printf("Input error, the character does not move.");
        break;
    }

    return 0;
}