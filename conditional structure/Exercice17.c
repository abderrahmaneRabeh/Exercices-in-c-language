#include <stdio.h>
/*
----------------------------------------------------------------------------------------+
    Exercice 17 :

      Write a program that asks the user for a child's age. Then, it informs them of
      the child's category: 'Poussin' for ages 6 to 7, 'Pupille'
      for ages 8 to 9, 'Minime' for ages 10 to 11, and 'Cadet' for ages 12 and above.
----------------------------------------------------------------------------------------+
*/

int main()
{

    // variables declaration
    int age;

    // user input
    printf("Enter your age please : ");
    scanf("%d", &age);

    // checking
    if (age < 6)
    {
        printf("Tu n'ess pas encore acceptable !");
    }
    else if (age <= 7 && age >= 6)
    {
        printf("You Are | Poussin |");
    }
    else if (age <= 9 && age >= 8)
    {
        printf("You Are | Pupille |");
    }
    else if (age <= 11 && age >= 10)
    {
        printf("You Are | Minime |");
    }
    else
    {
        printf("You Are | Cadet |");
    }

    return 0;
}