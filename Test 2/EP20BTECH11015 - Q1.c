/*We say that a sequence of numbers is a zig-zag sequence if the sequence is alternatively increasing and decreasing.
For example, the sequence 5, −3, 8.2, 4, 3.5, 3 and the sequence
1, 5, 3, 4 are both zig-zag sequences. On the other hand, the sequence 3, −2, −1, 7 is not
zig-zag as it decreases twice in succession. Write a function that accepts a double array
num[] and two indices i, j and returns 1 if the sequence num[i], num[i+ 1], . . . , num[j] is
zig-zag and 0 otherwise. Note that a sequence of length at most two is always considered
zig-zag. Test your function by accepting a sequence, a positive integer n, and n pairs of
indices from the user.
Example run:
Enter the sequence: 5 -3 8 2 4 6 2 1
Enter the number of pairs: 3
Enter pair 1 of indices: 0 3
Enter pair 2 of indices: 1 5
Enter pair 3 of indices: 4 6
Output: Zig-zag, not zig-zag, zig-zag*/

#include <stdio.h>

enum result_return_value {Not_Zig_Zag, Zig_zag, Invalid_indices};

//Function to check whether the given bit of sequence between the indices i and j is zig - zag or not
int zigzag_check(double array[], int i, int j, int len)
{
    //To check if the user has given correct input. If not, then warn the user
    if (i >= j || j >= len)
    {
        return Invalid_indices;
    }

    //Loop to check whether the given sequence is Zig - Zag or Not
    for (int count = i; count < j - 1; count++)
    {
        if (array[count] > array[count + 1] && array[count + 1] > array[count + 2])
        {
            return Not_Zig_Zag;

        }
        else if (array[count] < array[count + 1] && array[count + 1] < array[count + 2])
        {
            return Not_Zig_Zag;

        }
    }//End of loop
    return Zig_zag;     //Returns the success code
}//End of zigzag_check

int main()
{
    unsigned n = 0, len = 0;        //n to store no.of pairs; len to store the length of the array
    printf("\nEnter the length of the array\n");
    scanf("%u", &len);
    double array[len];              //Array to store the random sequence of numbers

    //Loop to enter the elements of the array
    for (int count = 0; count < len; count++)
    {
        printf("\nEnter element %d: ", count + 1);
        scanf("%lf", &array[count]);
    }//End of loop

    printf("\nEnter the number of pairs: ");
    scanf("%u", &n);
    unsigned i[n];      //Array to store lower indices
    unsigned j[n];      //Array to store upper indices

    //Loop to store the lower and upper indices
    for (int count = 0; count < n; count++)
    {
        printf("\nEnter pair %d of indices: ", count + 1);
        scanf("%u", &i[count]);
        scanf("%u", &j[count]);
    }//End of Loop

    //Loop to print the output
    for (int count = 0; count < n; count++)
    {
        int result = zigzag_check(array, i[count], j[count], len);  //result to store the value returned by vigzag check

        if (result == Zig_zag)
        {
            printf("\nZig-zag");
        }

        else if (result == Not_Zig_Zag)
        {
            printf("\nNot Zig-zag");
        }

        else
        {
            printf("\nInvalid indices");
        }
    }//End of Loop
}//End of main