#include <stdio.h>
#include <math.h>
/*
----------------------------------------------------------------------------------------+
    Exercice 19 :

        Write a program that displays the solution(s) of a quadratic equation of the form :
        𝑎𝑥²+𝑏𝑥+𝑐
        Note: Use the functions pow() and sqrt() to calculate
        the power and the square root, respectively.
----------------------------------------------------------------------------------------+
*/

int main()
{

    // variables declaration
    float a, b, c, delta, x, x1, x2;

    // user input
    printf("Enter a value : ");
    scanf("%f", &a);

    printf("Enter b value : ");
    scanf("%f", &b);

    printf("Enter c value : ");
    scanf("%f", &c);

    // calculation

    delta = pow(b, 2) - 4 * a * c;

    // checking
    if (delta < 0)
    {
        printf("There is no solutions");
    }
    else if (delta == 0)
    {
        x = -b / 2 * a;
        printf("The solution is : %.2f", x);
    }
    else
    {
        x1 = (-b - sqrt(delta)) / a * 2;
        x2 = (-b + sqrt(delta)) / a * 2;

        printf("The solutions are %.2f | %.2f", x1, x2);
    }

    return 0;
}