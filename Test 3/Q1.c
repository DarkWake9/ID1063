/*The square-free part of a positive integer n is what’s left out after all the square factors are divided out.
This program accepts a positive integer n and finds it's Square Free Part.*/

#include <stdio.h>
#include <math.h>

//Function that accepts a POSITIVE integer n and finds it's Square Free Part.
unsigned int sqfree(const unsigned int *);

int main()
{
    unsigned int rec = 0;       //Used to recur the program if user inputs 1
    
    //Loop to recur the program if user inputs 1
    do
    {
        unsigned int n = 0;
        printf("\nEnter any positive integer: ");
        scanf("%u", &n);
        printf("\nSquare - free part of %u is %u", n, sqfree(&n));
        
        //Prompting the user for Recursion
        printf("\nDo you want to try with another number?\nEnter 1 for yes\nEnter anything else to quit: ");
        scanf("%u", &rec);
    }
    while (rec == 1);
    printf("\n!!!!!THANK YOU!!!!!\n");
    return 0;
}

//Function that accepts a POSITIVE integer n and finds it's Square Free Part.
unsigned int sqfree(const unsigned int *n)
{
    unsigned int sq_free_part = *n;       //To store the Square Free Part of the input
    //Loop to find the Square Free Part of the input
    for (unsigned int i = 2; i < sq_free_part; i++)
    {
        while (sq_free_part % (unsigned int)pow(i, 2) == 0)       //Unsigned int is used as pow() returns DOUBLE
        {
            sq_free_part = sq_free_part / pow(i, 2);
        }
    }
    return sq_free_part;  
}