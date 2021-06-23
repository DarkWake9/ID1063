/*4. [Optional] Accept a positive integer n and print n consecutive lines of
stars, with the ith line having i stars. Example output for n = 5:
*
**
***
****
*****
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int r = 1;
    do
    {
        unsigned num = 0;
        printf("\nEnter a positve number:\n");
        scanf("%u",&num);

        for(int i = 0; i < num; i++)
        {
            printf(" \n");
            for(int j = 0; j <= i; j++)
            {
                printf("*");
            }
        }

        printf("\n\nDo you want to try Again?\nEnter 1 for Yes\nEnter anything else to exit\n");
        scanf("%d", &r);

    } while ( r == 1 );
    
    printf("\n!!Thank you!!\n");
}
