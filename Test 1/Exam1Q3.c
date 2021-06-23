/*Program to print the effective resistance of a ladder circuit
  where  ______v^v^v__________v^v^v_____-------_____v^v^v____
                a1      |      a2       |      |     an      |
                        <               <      >             <
                    b1  >           b2  >      < bn-1        > bn
                        <               <      >             <
                        |               |      |             |
                        |               |      |             |
         _______________|_______________|------|_____________|*/

#include <stdio.h>

int main(void)
{
    int r = 0; //variable to control recursion of the program
    do
    {
        int n;
        double an = 0, bn = 1;
        printf("\nEnter the value of n: ");
        scanf("%d", &n);

        double ai[n], bi[n]; //ai[n] stores Horizontal resistances and bi[n] stores vertical resistances

        printf("\nEnter the value of ai: ");
        for (int i = 0; i < n; i++)
        {
            // printf("\n");
            scanf("%lf", &ai[i]);
        }
            
        printf("\nEnter the value of bi: ");
        for (int i = 0; i < n; i++)
        {
        
            scanf("%lf", &bi[i]);
        }
            
        //Loop to calculate the effective resistance of the Ladder
        for (int i = n - 1; i > 0; i--)
        {
            an = (ai[i] + bi[i]);
            bn = (bi[i - 1] * an) / (bi[i - 1] + an);
            bi[i - 1] = bn;    
        }

        an = bn + ai[0];

        printf("\nEffective resistance is: %lf\n", an);
    
        //Prompting the user for recursion    
        printf("\nDo you want to enter another mark?\nType 1 for yes\nType anyting else to quit\n");
        scanf("%d", &r);

    }
    while (r == 1);

    printf("\n!!!!THANK YOU!!!!\n\n");
}