/*Program to create a 3D array (of any type) of size 2 × 3 × 4
and print the addresses of all the array locations.*/

#include <stdio.h>

int main()
{
    int input_array[2][3][4];          //Integer array of random values

    //Loop to print the addresses of all the array locations
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("\n%p", &input_array[i][j][k]);
            }
        }
    }
}
