/*2. Write a program to accept a positive integer n and do the following.
(a) Print the decimal and binary representations from right-to-left.
For example, if n = 20, the output is 02 on the first line and 00101 on
the second line.
(b) Optional: Print the binary representation from left-to-right.*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int r = 1;
    do
    {
        int n = 0, numrev = 0, arlen = 0, dec = 0;
        int binum[32];
        printf("\nEnter a number\n");
        scanf("%d", &n);
        dec =  n;

        //Loop to print the reversed input number in decimal form
        printf("\nReversed number : ");

        while(dec > 0)
        {
            numrev = dec % 10;
            dec = dec / 10;
            printf("%d", numrev);
        }

        //Loop to print the input number in binary form
        while(n > 0)
        {
            binum[arlen] =  n % 2;
            n = n / 2;
            arlen++;
            
        }
        
        printf("\n\nBinary Number\n");
        printf("From right-to-left: ");
        for (int i = 0; i < arlen; i++)
        {
            printf("%d", binum[i]);
        }
        printf("\nFrom left-to-right: ");
        for (int i = arlen - 1; i >= 0; i--)
        {
            printf("%d", binum[i]);
        }
        printf("\n\n");

        //Recursion
        printf("\nDo you want to try Again?\nEnter 1 for Yes\nEnter anything else to exit\n");
        scanf("%d", &r);
    } while ( r == 1 );
    
    printf("\n!!Thank you!!\n");
}