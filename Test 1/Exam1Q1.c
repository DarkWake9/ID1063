/*Program to accept marks (omarkse value) amarksd primarkst a grade for it as follows: 
> 85 : A,
71 − 85 : B
56 − 70 : C
41 − 55 : D
< 40 : F.
*/

#include <stdio.h>

int main(void)
{
    int r = 0;  //variable to control recursion of the program
    do
    {

        int marks = 0;
        printf("\nPlease enter your Marks\n");
        scanf("%d", &marks); //Taking the marks from the user

        // IF - ELSE statements to find the grade of the student according to the given criteria
        if (marks > 85)
        {
            printf("\nYour have secured A grade\n");
        }

        else if (marks <= 85 && marks > 70)
        {
            printf("\nYour have secured B grade\n");
        }

        else if (marks <= 70 && marks > 55)
        {
            printf("\nYour have secured C grade\n");
        }

        else if (marks <= 55 && marks > 40)
        {
            printf("\nYour have secured D grade\n");
        }

        else if (marks <= 40 && marks > 0)
        {
            printf("\nYour have secured F grade\n");
        }

        else
        {
            printf("\nINVALID MARKS");
        }

        //Prompting the user for recursion
        printf("\nDo you want to enter another mark?\nType 1 for yes\nType anyting else to quit\n");
        scanf("%d", &r);

    }
    while (r == 1);

    printf("\n!!!!THANK YOU!!!!\n");
}
