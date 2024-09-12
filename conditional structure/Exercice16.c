#include <stdio.h>
/*
----------------------------------------------------------------------------------------+
    Exercice 16 :

        A store charges 0.30 Euros for the first ten photocopies, 0.25 Euros for
        the next twenty, and 0.20 Euros beyond that. Write a program that asks
        the user for the number of photocopies made and displays the corresponding bill.
----------------------------------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    int photocopies;
    float bill;

    // user input
    printf("Enter the number of photocopies : ");
    scanf("%d", &photocopies); // store the user input in the variable photocopies

    // checking and output
    if (photocopies <= 10)
    {
        bill = 0.30 * photocopies;
        printf("\nPhotocopies cost 0.30$ ,Bill = $%.2f", bill);
    }
    else if (photocopies <= 30)
    {
        bill = 0.25 * photocopies;
        printf("\nPhotocopies cost 0.25$ ,Bill = $%.2f", bill);
    }
    else
    {
        bill = 0.20 * photocopies;
        printf("\nPhotocopies cost 0.20$ ,Bill = $%.2f", bill);
    }

    return 0;
}