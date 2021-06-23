/*Write a program to accept two integers m and n and
 display the perimeter of a m × n rectangle.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m = 0, n = 0;
    printf("\nEnter the breadth\n");
    scanf("%d", &m);
    printf("\nEnter the length\n");
    scanf("%d", &n);
    for(int i = 1; i <= m; i++)
    {
        printf("\n");
        if( i == 1 || i == m)
        {
            for (int j = 0; j < n; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for(int j = 0; j < n; j++)
            {
                if(j == 0 || j == n-1)
                printf("* ");
                else
                printf("  ");
                
            }
        }
        
    }
}