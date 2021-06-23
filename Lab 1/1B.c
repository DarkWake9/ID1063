//1B
#include <stdio.h>

int main(void)
{
    int a,b,c,d;
    printf("\nEnter your first number:");
    scanf("%i",&a);
    printf("\nEnter your second number:");
    scanf("%i",&b);
    c = a + b;
    d = a * b;
    printf("\nThe SUM of values is %i and the product of values is %i\n",c,d);
    return 0;
}
//compiler not accepting %d
