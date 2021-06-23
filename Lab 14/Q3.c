/*Use binary search to find a real root of a real polynomial.
[Optional: Write a search function that accepts a function f of one variable as input,
an interval [a,b] such that f(a)f(b) < 0, a precision t,
and outputs a value r such that f has a root that is at distance at most t from r.]*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

double poly_val(const unsigned int, const double *, const double);
double root_search(const unsigned int, const double *, const double, double *, double *);

int main()
{
    unsigned int deg = 0;       //Stores the degree of polynomial
    printf("\nEnter the degree of polynomial: ");
    scanf("%u", &deg);
    double pcoe[deg + 1];       //Array to store the coefficients of the polynomial terms

    //Loop to accept the coefficients of the polynomial terms from the user
    for (unsigned int i = 0; i < deg + 1; i++)
    {
        printf("\nEnter the coefficient of x^%u: ", i);
        scanf("%lf", &pcoe[i]);
    }

    double t = 0.0;             //t stores precision of the root
    double a = 0.0, b = 0.0;   /*a and b are the lower and upper bounds of the interval
                                 between which the existence of root of the function will be verified*/
    printf("\nEnter the lower bound of the interval: ");
    scanf("%lf", &a);
    printf("\nEnter the upper bound of the interval: ");
    scanf("%lf", &b);
    printf("\nEnter the precision of the root: ");
    scanf("%lf", &t);

    //Possible errors and their return codes
    if (a > b || ((poly_val(deg, pcoe, a)) * (poly_val(deg, pcoe, b))) > 0)
    {
        printf("\nINVALID INTERVAL BOUNDS");
        return EXIT_FAILURE;
    }
    if (t <= 0)
    {
        printf("\nPRECISION VALUE MUST BE POSITIVE");
        return 2;
    }

    //Output
    printf("\nRoot of the polynomial upto a precision %lf is %lf", t, root_search(deg, pcoe, t, &a, &b));
    return EXIT_SUCCESS;
}

//Function to calculate the value of f(x) where f is a polynomial and x is any variable
double poly_val(const unsigned int deg, const double *pcoe, const double x)
{
    double val = 0.0;                  //Stores the value of f(x)

    //Loop to calculate the value of f(x)
    for (int i = 0; i < deg + 1; i++)
    {
        val += pcoe[i] * pow(x, i);
    }
    return val;
}

//Function to find the roots of a polynomial using binary search and return the root
double root_search(const unsigned int deg, const double *pcoe, const double t, double *a, double *b)
{
    double root = 0, temp = 0;      //Temp stores the absolute value of the polynomial function at root

    //Loop to find the roots of a polynomial
    do
    {
        root = (*a + *b) / 2;
        if (poly_val(deg, pcoe, root)*poly_val(deg, pcoe, *a) > 0)
        {
            *a = root;
        }
        if (poly_val(deg, pcoe, root)*poly_val(deg, pcoe, *b) > 0)
        {
            *b = root;
        }
        temp = poly_val(deg, pcoe, root) >= 0 ? poly_val(deg, pcoe, root) : -poly_val(deg, pcoe, root);
    }
    while (temp > t);       //Absolute value is necessary to increase the accuracy of root
    return root;
}