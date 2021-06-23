#include<stdio.h>

int main()
{
    char c;
    int n;
    //Loop for Automatic recurrence
    do
    {

        printf("\nThis program checks whether the input character is Z. \n ");
        printf("Enter a character: ");
        c=getchar();
        
        if (c == 'Z')
        {
            printf("That was Z. \n");
        }

        //Modded part

        if (c == 'z')
        {
            printf("That was z. \n");
        }

        //End of modded part

        else
        {
            printf("That wasn't Z. \n");
        }
    
        //Asking the user for repetition

        
        printf("\nDo you want to enter another value?\nEnter 1 for Yes\nEnter anything else to stop\n");
        scanf("\n%d",&n);
    
    } while(n==1);

    printf ("Thank you");

    return 0;
}
