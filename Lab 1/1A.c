#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("\nEnter your first number:");
    scanf("%i",&a);
    printf("\nEnter your second number:");
    scanf("%i",&b);
    int s;
    printf("Enter 1 for ADD\n2 for SUBTRACT\n3 for Multiply\n4 for divide\n5 for remainder");
    scanf("%i",&s);
    char ch;
    do
    switch(s)
    {
        case 1:

            c=a+b;
            printf("Sum of two values is: %i",c);

        break;

        case 2:

            c=a-b;
            printf("Difference of two values is: %i",c);

        break;

         case 3:

            c=a*b;
            printf("Product of two values is: %i",c);

        break;


        case 4:

            c=a/b;
            printf("Quotient of two values is: %i",c);

        break;
        case 4:

            c=a%b;
            printf("Remainder of two values is: %i",c);

        break;

        default:
            printf("Invalid Entry. Please try again");
        break;
    }


    return 0;
}