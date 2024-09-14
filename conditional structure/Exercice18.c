#include <stdio.h>
/*
----------------------------------------------------------------------------------------+
    Exercice 18 :

        Write a program that allows you to enter a student grades between 0 and 20.
        The program should calculate the average of these grades and
        display the average along with a remark based on the following scale:

        - "Very Good" for an average of 16 or higher
        - "Good" for an average between 14 and 16
        - "Fair" for an average between 12 and 14
        - "Pass" for an average between 10 and 12
        - "Insufficient" for an average below 10
        Note: Assume the student will enter grades between 0 and 20.
----------------------------------------------------------------------------------------+
*/

int main()
{

    // variables declaration
    float student_note;

    // user input
    printf("Enter your note please : ");
    scanf("%f", &student_note);

    // checking
    if (student_note < 0)
    {
        printf("Negative numbers are not accepted !");
    }
    else if (student_note < 10)
    {
        printf("You faild the examination Insufficient!");
    }
    else if (student_note < 12)
    {
        printf("You passed the examination with \"Pass\" !");
    }
    else if (student_note < 14)
    {
        printf("You passed the examination with \"Fair\" !");
    }
    else if (student_note < 16)
    {
        printf("You passed the examination with \"Good\" !");
    }
    else if (student_note < 28)
    {
        printf("You passed the examination with \"Very Good\" !");
    }
    else
    {
        printf("Number should less then 20 ");
    }
    return 0;
}