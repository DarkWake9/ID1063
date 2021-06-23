/*. Create a structure called Polynomial to store the degree n and the
coefficients a0, a1, . . . , an of a real polynomial P(x) = a0 + a1x + . . . +
anx
n
. Accept a polynomial P(x) and another polynomial Q(x) of
degree two from the user and print the coefficients of the remainder
when P(x) is divided by Q(x).*/
#include <stdio.h>

int main()
{
    printf("\nEnter the degree of first polynomial: ");
    unsigned deg;                   //Stores the highest degree of the dividend polynomial
    scanf("%u", &deg);
    int acoe[deg + 1];                //Array to store the coefficients of the dividend polynomial
    for (int i = deg; i >= 0; --i)
    {
        printf("\nEnter the value of a%d: ", i);
        scanf("%d", &acoe[i]);
    }
//    hi_deg = acoe[deg] = 0? deg - 1: deg;       //If the user inputs the coefficient of the highest term as 0 then the actual degree of polynomial 
    printf("\nSecond polynomial of degree: 2\n");

    int bcoe[3];                //Array to store the coefficients of the quadratic/divisor polynomial
    for (int i = 2; i >= 0; i--)
    {
        printf("\nEnter the value of b%d: ", i);
        scanf("%d", &bcoe[i]);
    }

    int qcoe[deg];               //Array to store the coefficients of the quotient polynomial

    //Loop to find the coefficients of quotient and remainder polynomials
    while (deg > 1)
    {
        qcoe[deg - 2] = (acoe[deg] / bcoe[2]);
        acoe[deg - 1] = acoe[deg - 1] - (qcoe[deg - 2] * bcoe[1]);
        acoe[deg - 2] = acoe[deg - 2] - (qcoe[deg - 2] * bcoe[0]);
        acoe[deg] = 0;
        --deg;
    }
    printf("\n The remainder is %dx + %d", acoe[1], acoe[0]);
}