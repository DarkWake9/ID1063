/*Q5. Create your own pair of header and C files, and call it from another program.*/

#include "Q5.h"
#include <stdio.h>

int main()
{
    double x, y;        //Two variables whose values are given by user
    printf("\nEnter the value of x: ");
    scanf("%lf", &x);
    printf("\nEnter the value of y: ");
    scanf("%lf", &y);
    char op;            //It is "switched" to determine the operation to be performed on x and y
    printf("Enter the operation desired to perform on x and y: ");
    scanf("%s", &op);

    //Switch statement to make the user choose the operation he wants to perform on x and y
    printf("\nEnter + to add\nEnter - to subtract\nEnter * to multiply\nEnter / to divide\n");
    switch (op)
    {
        case '+':
            printf("\n%lf", add(x, y));
            break;
        case '-':
            printf("\n%lf", subtract(x, y));
            break;
        case '*':
            printf("\n%lf", multiply(x, y));
            break;
        case '/':
            printf("\n%lf", divide(x, y));
            break;

        default:
            printf("\nINVALID OPERATION");
            break;
    }
    return 0;
}