/*3. (a) Suppose that f(x, y) is a C function with two arguments that
stores its result in x. Write a function iterateFunction, that accepts
(i) the name of such a function, (ii) a positive integer d, (iii) address
of x and the value of y, and computes the iterated function f
d
(x, y)
which is defined recursively as follows: f
1
(x, y) = f(x, y); fd(x, y) =1f(fd−1(x, y), y). Test iterateFunction on (i) pow(x,y) function from
math.h, (ii) the strcat function (or on your implementation from Lab
9); calling iterateFunction with strcat, 3 and two strings YA and HOO,
should produce YAHOOHOOHOO.
(b) Write a function swapFirstInversion that accepts (i) a double array
num[], (ii) a positive integer n, and finds the first index i ≤ n − 2 (if
any) such that num[i] > num[i + 1] and swaps num[i] with num[i+1].
For example, if the array has elements 3, 5, 6, 0, 2 calling the function
with n = 3 will swap num[2] with num[3] to give 3, 5, 0, 6, 2, while
calling the function with n = 2 will not have any effect (on the initial
array).
Test iterateFunction from part (a) on swapFirstInversion with n as
the length of the array and d = n(n − 1)/2.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


double iterateFunction_pow(double* x, double* y, unsigned d)
{
    if (d > 1)
    return pow(iterateFunction_pow(x, y, d - 1), *y);
    else return pow(*x, *y);
}

char* iterateFunction_char(char* x, char* y, unsigned d)
{
    if (d > 1)
    {
        return strcat(iterateFunction_char(x, y, d - 1), y);
    }
    else return strcat(x, y);
}

double *swapFirstInversion(double num[], unsigned n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(num[i] > num[i + 1])
        {
            double temp = num[i];
            num[i] = num[i + 1];
            num[i + 1] = temp;
            break;
        }
    }
    return num;
}

int main()
{
    double x, y;
    unsigned n = 0,d = 0;
    char strx[100], stry[100];

    printf("\nEnter x: ");
    scanf("%lf", &x);

    printf("\nEnter y: ");
    scanf("%lf", &y);

    printf("\nEnter strx:");
    scanf("%s", strx);

    printf("\nEnter stry:");
    scanf("%s", stry);

    
    printf("\nEnter d: ");
    scanf("%u" ,&d);

    printf("%lf", iterateFunction_pow(&x, &y, d));
    printf("\n%s", iterateFunction_char(strx, stry, d));

    printf("\nEnter n:");
    scanf("%u", &n);
    
    d = (pow(n, 2)- n)/2;
    double num[n];
    printf("\nEnter array elements");
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &num[i]);
        printf("\n");
    }
    
    swapFirstInversion(num, n);
    for (int i = 0; i < n; i++)
    {
        printf("%lf\n", num[i]);
    }
}