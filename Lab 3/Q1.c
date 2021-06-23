//Program to accept three integers from the user and print them in increasing order.
#include <stdio.h>

int main(void)
{
    int n[3];
    int x = 0, c = 0;
    int p = 0;

    //Loop for recursion
    do
    {   
        //Loop for input
        for (int i = 0; i < 3; i++)
        {
            printf("\nEnter number %d:\n", i + 1);
            scanf("%d", &n[i]);
        }

        //Loop for Bubble sort
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {

                if (n[j] > n[j + 1])
                {
                    x = n[j];
                    n[j] = n[j + 1];
                    n[j + 1] = x;
                    c++;
                }
            }
        }

        printf("\nNumbers in ascending order:");

        //Printing Loop
        for (int i = 0; i < 3; i++)
        {
            printf(" %d", n[i]);
        }

        //Prompt for recursion
        printf("\nDo you want to try again?\nEnter 1 for YES\nEnter anything else for NO\n");
        scanf("%d",&p);

    } while (p == 1);

    printf("!!Thank You!!\n\n");
}