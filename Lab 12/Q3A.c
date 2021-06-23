/*(b) Write a function swapFirstInversion that accepts (i) a double array
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
typedef unsigned int Func(double num[], unsigned int n) *func;

unsigned int sfi(double num[], unsigned int n)
{
    
    for(unsigned int i = 0; i < (n - 1); i++)
    {
        if(num[i] > num[i + 1])
        {
            double temp = num[i];
            num[i] = num[i + 1];
            num[i + 1] = temp;
            break;
        }
    }
}

double *itswap(unsigned int func, double* num, unsigned int n)
{
    if (i > 1)
    {
        return func(itswap(func,num+1, n-1)--, n);
    }
    else return num;
}

int main()
{
    unsigned n = 0;
    printf("\nEnter n: ");
    scanf("%u", &n);
    double num[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &num[i]);
        printf("\n");
    }

    int d = (pow(n, 2) - n) / 2;

    itswap(sfi(num, n, 0), n);

    for (int i = 0; i < n; i++)
    {
        printf("%lf\n", num[i]);
    }
}
