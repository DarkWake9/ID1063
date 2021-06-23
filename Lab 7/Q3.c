/*Write a function that accepts the name of an array (of type double), and two indices
i, j and finds the sum of the elements of the array between indices i and j (inclusive),
assuming that i ≤ j. Test it by calling them in main().*/

#include <stdio.h>

void array(unsigned i, unsigned j);

//Main function to take the indices from the the user.
int main()
{
    unsigned i = 0, j = 0;           //i and j are indices to print the array elements.
    printf("\nEnter the left index: ");
    scanf("%u", &i);
    printf("\nEnter the right index: ");
    scanf("%u", &j);
    array(i, j);

}

//Function to print the sum of the elements of the array between indices i and j (inclusive).
void array(unsigned i, unsigned j)
{
    double arr[20] = {2.5, 33.6, 113.16565, 515.755, 841.9, 2210.0, 6365.8875, 24620.75643, 5164.6343, 6146.654, 243.65, 46.3, 3.63, 4634.656, 463.4, 5453.978, 0.0322, 0.4383, 214.522, 4981.3871};
    double sum = 0;
    if (i > j || j > 20)
    {
        printf("\n!!!Invalid indices!!!");    
    }
    else
    {
        for (int count = i; count <= j; count++)
        {
            sum += arr[count];
        }
        printf("Sum of elements from %u to %u in the array is%lf", i, j, sum);
    }
}