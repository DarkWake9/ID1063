/*3. Accept a real number x and find the values of each of e^x, log x, sin x by
adding the first 20 terms of the appropriate Taylor series. Compare
the values with the values from the in-built functions from math.h.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
        double x = 0;
        int ifact = 1, sfact = -1, lfact = -1;
        double xe = 1, xl = 1, xo = 1;
        double e_x = 1, sin_x = 0, log_x = 0;

        printf("\nEnter a number\n");
        scanf("%lf",/*njnj*/ &x);
        printf("%d", x);
        printf("\nMath . h");
        double ex = exp(x);
        printf("\nExp %lf", ex);

        double sine  = sin(x);
        printf("\nSin %lf", sine);

        double logr = log(x);
        printf("\nLog %lf", logr);

        //Exponential
        for (int i = 1; i <= 20; i++)
        {
            ifact *= i;
            xe *= x;
            e_x += (double) xe / ifact;
        }
        //Logarithmic
        for (int i = 1; i <= 20; i++)
        {
            lfact *= (0 - 1) * i;
            xl *= (x-1);
            log_x +=  (double)xl / lfact;

        }
        
        //Sine
        xo = x;
        for (int i = 1; i <= 20; i++)
        {
            
            if(i % 2 != 0)
            {
                xo *= x * x;
                sfact *= (0 - 1) * i;
                
            }
            else
            {
                sfact *= i;
            }
            sin_x += (double)xo / sfact;
               
        }

        printf("\nTaylor loop\n");
        printf("\nexp  %lf  ", e_x);
        printf("\nSin  %lf  ", sin_x);
        printf("\nLog %lf  ", log_x);


}