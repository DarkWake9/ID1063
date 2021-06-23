/*(Optional) Accept a string as input and print all subsets of the string (in any order).
 Hint: Let the length of the string be n.
Map the subsets to numbers in {0, 1, . . . , 2n −1} and for each of these numbers,
print the appropriate characters, using the 3rd exercise from Lab 4.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    char inpch[100];
    printf("\nEnter a String\n");
    scanf("%s", inpch);
    int len = 0;

    //Loop to find string length
    while(inpch[len] != '\0')
    {
        len++;
    }
    
    //Loop top print the subsets
    for(int i = 0; i <  pow(2 , len); i++)
    {
        printf("{ ");
        for(int j = 0; j < len; j++)
        {
            
            if(i & (1<<j))
            {
                printf("%c ", inpch[j]);
            }

        }
        printf("}\n");
    }
}