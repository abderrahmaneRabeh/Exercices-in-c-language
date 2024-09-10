#include <stdio.h>
/*
---------------------------------------------------------------+
    Exercice 5 :

        Write a program that asks the user to enter 5 grades 
        and then displays their sum and average.
---------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    float Grade1, Grade2, Grade3, Grade4, Grade5, Sum, Average;

    // user input
    printf("Enter the value of Grade1 : ");
    scanf("%f", &Grade1); // store the user input in the variable Grade1

    printf("Enter the value of Grade2 : ");
    scanf("%f", &Grade2); // store the user input in the variable Grade2

    printf("Enter the value of Grade3 : "); 
    scanf("%f", &Grade3); // store the user input in the variable Grade3

    printf("Enter the value of Grade4 : ");
    scanf("%f", &Grade4); // store the user input in the variable Grade4

    printf("Enter the value of Grade5 : ");
    scanf("%f", &Grade5); // store the user input in the variable Grade5

    // calculation
    Sum = Grade1 + Grade2 + Grade3 + Grade4 + Grade5;

    Average = Sum / 5;

    // output
    printf("\nThe sum of the grades is : %.2f", Sum);
    printf("\nThe average of the grades is : %.2f", Average);


    
    return 0;
}