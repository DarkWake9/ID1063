#include<stdio.h>
int main()
{

    float c,f;
    int n;
    
    //Loop for Automatic recurrence
    do
    {
        //Input

        printf("\nEnter the temperature in Celsius  ");
        scanf("%f",&c);

        //To check if the user enters an invalid temperature

        if( c < -273.15 )
        {
            printf("\nInvalid temperature.");
        }

        else
        {
            //CONVERSION FROM CELSIUS TO FARENHIET 
            f = (1.8*c) + 32.0;

            printf("\nThe entered temperature in Farenhiet is %f",f);
        }

        //Asking the user for repetition

        printf("\nDo you want to enter another value?\nEnter 1 for Yes\nEnter anything else to stop\n");
        scanf("\n%d",&n);

    } while (n==1);
    
    return 0;
    
}