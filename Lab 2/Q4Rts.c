#include<stdio.h>
#include<math.h>

int main()
{

    float a,b,c,d,r1=0,r2=0,a2;
    int n;
    //Loop for Automatic recurrence
    do
    {
        //Input

        printf("\nEnter the coefficient of x^2: ");
        scanf("%f",&a);
        printf("\nEnter the coefficient of x: ");
        scanf("%f",&b);
        printf("\nEnter the Constant: ");
        scanf("%f",&c);

        a2 = 2.0 * a;
        d = (b * b) - (4 * a * c);

        //Real root condition
        if(d > 0)
        {
            r1 = (pow(d,0.5) - b) / a2;
            r2 = (0.0 - (pow(d,0.5)) - b) / a2;
            printf("\nThe given quadratic equation has REAL and DISTINCT roots\nThe roots are %f and %f",r1,r2);
        }

        //Repeated root condition
        else if(d == 0)
        {
            r1 = (0.0 - b) / a2;
            printf("\nThe given quadratic equation has REAL and EQUAL roots\nThe repeated root is %f\n", r1);
        }

        //Imaginary root condition
        else
        {
            printf("\nThe given quadratic equation has IMAGINARY roots");
        }
    
        //Asking the user for repetition

        
        printf("\nDo you want to enter another value?\nEnter 1 for Yes\nEnter anything else to stop\n");
        scanf("\n%d",&n);
    
    } while(n==1);
    
    printf ("Thank you");

    return 0;
}