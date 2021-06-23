/*4. (a) Write a function fallingFactorial, that accepts a number x (of type double) and a
positive integer n, and returns the value of x(x − 1). . .(x − n + 1). Test it by calling
it in main().
(b) Write a function realBinomialCoefficient, that accepts a number x and a positive
integer n, and computes the value of x(x − 1). . .(x − n + 1)
n!
. Use your fallingFactorial
function from part (a).*/

#include <stdio.h>

double fallingFactorial(double x, unsigned n);
double realBinomialCoefficient(double x, unsigned n);

//Main function to take a real number x and a natural number n from the user and display the output
int main()
{
    double x = 0;
    unsigned n = 0;
    printf("\nEnter any real number \n");
    scanf("%lf", &x);
    printf("\nEnter a +ve integer \n");
    scanf("%u", &n);
    printf("\nFallingFactorial of %lf is %lf", x, fallingFactorial(x, n));
    printf("RealBinomialCoefficient %lfC%u is: %lf", x, n, realBinomialCoefficient(x, n));
}

//Function to calculate fact(x)/fact(x - n) or xPn
double fallingFactorial(double x, unsigned n)
{
    double fallingfactorial = 1;
    for (int i = 1; i <= n; i++)
    {
        fallingfactorial *= (x - i + 1); 
    } 
    return fallingfactorial;
}

//Function to calculate xCn
double realBinomialCoefficient(double x, unsigned n)
{
    double rbc = (fallingFactorial(x, n)) / (fallingFactorial((double)n, n));
    return rbc;
}

