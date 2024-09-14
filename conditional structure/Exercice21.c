#include <stdio.h>
/*
----------------------------------------------------------------------------------------+
    Exercice 21 :

        Products sold in a store are classified into three VAT categories:

        - A = 7%
        - B = 20%
        - C = 25%
        Write a program that calculates the total price (including VAT) of a product,
        given its price before tax and its category.
----------------------------------------------------------------------------------------+
*/

int main()
{

    // variables declaration
    float price_before_tax;
    char category;

    // user input

    printf("Enter the price before tax : ");
    scanf("%f", &price_before_tax);

    printf("Enter the category (A, B or C) : ");
    scanf(" %c", &category);

    // chacking and calculation

    switch (category)
    {
    case 'A':
        printf("The total price is : %.2f", price_before_tax + price_before_tax * 0.07);
        break;
    case 'B':
        printf("The total price is : %.2f", price_before_tax + price_before_tax * 0.2);
        break;
    case 'C':
        printf("The total price is : %.2f", price_before_tax + price_before_tax * 0.25);
        break;

    default:
        printf("The gategory not found ! ");
    }
    return 0;
}