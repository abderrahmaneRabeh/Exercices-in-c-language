#include <stdio.h>
/*
----------------------------------------------------------------------------------------+
    Exercice 15 :

        Create a program where the precision dancer (for loop) prints
        the first 10 even numbers and the free spirit (while loop) prints
        the first 10 odd numbers. Watch your loops perform and bring your code to life!
----------------------------------------------------------------------------------------+
*/
int main()
{
    // variables declaration
    int i;

    // even numbers
    printf("\nEven Numbers : ");
    for (i = 0; i <= 10; i++)
    {
        // solution 1
        printf("%d ", i * 2);

        // solution 2
        // if (i % 2 == 0)
        // {
        //     continue;
        // }
        // else
        // {
        //     printf(" %d", i);
        // }
    }

    // odd numbers
    printf("\nOdd Numbers : ");
    i = 1;
    int num = 1;
    while (i < 10)
    {
        // solution 1
        printf("%d ", num);
        num += 2;

        // solution 2

        //  if (i % 2 != 0)
        //  {
        //      printf(" %d", i);
        //  }
        i++;
    }

    return 0;
}