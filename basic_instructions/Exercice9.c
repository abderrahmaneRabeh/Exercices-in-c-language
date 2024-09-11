#include <stdio.h>
/*
---------------------------------------------------------------------+
    Exercice 9 :

        Write a program that asks for a time T (integer) in seconds,
        then converts it into hours, minutes, and seconds.
        Example: T = 56263 seconds => 15 hours 37 minutes 43 seconds
---------------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    int Timer_In_Seconds, Hours, Minutes, Seconds, Remaining_After_Hours;

    // user input
    printf("Enter the time in seconds : ");
    scanf("%d", &Timer_In_Seconds);

    // calculation

    Hours = Timer_In_Seconds / 3600;
    Remaining_After_Hours = Timer_In_Seconds % 3600;
    Minutes = Remaining_After_Hours / 60;
    Seconds = Remaining_After_Hours % 60;

    // output
    printf("%d seconds = %d hours %d minutes %d seconds", Timer_In_Seconds, Hours, Minutes, Seconds);

    return 0;
}