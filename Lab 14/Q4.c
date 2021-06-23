/*Implement the selection sort algorithm.*/
#include <stdio.h>

int main()
{
    unsigned int len = 0;   //Stores the length of the array
    printf("\nEnter the length of the array: ");
    scanf("%u", &len);
    double inparr[len];     //Input array containing unsorted data
    printf("\nEnter the elements of the array\n");

    //Loop to accept the values oif the elemetns of the array from user
    for (int i = 0; i < len; i++)
    {
        printf("\nEnter the value of element no.%d: ", i + 1);
        scanf("%lf", &inparr[i]);
    }

    //Selection sort algorithm to sort the array elements in DESCENDING order
    int tp;     //To temporarily store the position of maximum value in the given range inside the array
    double ta;  //To temporarily store the maximum value in the given range inside the array
    for (int i = 0; i < len - 1; i++)
    {
        tp = i;
        ta = inparr[i];
        for(int j = i + 1; j < len;j++)
        {
            if (inparr[j] > ta)
            {
                ta = inparr[j];
                tp = j;
            }
        }
        inparr[tp] = inparr[i];
        inparr[i] = ta;
    }

    //Printing the sorted array
    printf("\nSorted array: ");
    for (int i = 0; i < len; i++)
    {
        printf("%\nlf\n", inparr[i]);
    }
}