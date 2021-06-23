/*Program that swaps the values of two variables by passing
their addresses. See sample code for passing addresses.*/
#include <stdio.h>

//Function to swap the values of two variables by passing their addresses.
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;        //Swapping the adresses of the variables makes the swap GLOBAL
    *b = temp;
}

int main()
{
    int a = 5, b = 10;
    printf("\nBefore swapping:  %d , %d", a, b);
    swap(&a, &b);    
    printf("\nAfter swapping:   %d , %d", a, b);
}