/*Write a program to accept a positive integer n and do each of the
following.
(a) Print n consecutive ∗ on a line. For example, if n = 5, the output
is: *****
(b) Print all the square numbers in the interval [1, n]. For example, if
n = 50, then the output is 1,4,9,16,25,36,49.
(c) Print the value of n!.
(d) Accept n numbers from the user and print their sum.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int r = 1;
    do
    {
    
        unsigned num = 0;
        printf("\nEnter a positve number:\n");
        scanf("%u",&num);
        
        //a

        printf("\n");
        for(int i = 0; i < num; i++)
        {
            printf("*");
        }
        printf("\n");

        //b
        printf("\nPerfect squares less than %u are: ", num);
        for(int i = 1; i <= num; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                float c = (float) i/j;
                if( (float) j == c )
                {
                    printf(" %d", i);
                }
            }
        }
        printf("\n");

        //c
        unsigned fac = 1;
        for(unsigned i = 1; i <= num; i++)
        {
            fac = fac * i;
        }
        printf("\nFactorial of %u is %u\n", num, fac);

        //d
        unsigned sum = 0;
        for(unsigned i = 0; i < num; i++)
        {
            unsigned inp = 0;
            printf("\nEnter a positve number:\n");
            scanf("%u", &inp);
            sum += inp;
        }
        printf("\n%u", sum);
        
        printf("\nDo you want to try Again?\nEnter 1 for Yes\nEnter anything else to exit\n");
        scanf("%d", &r);
    } while ( r == 1 );
    
    printf("\n!!Thank you!!\n");
}