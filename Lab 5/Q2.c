/*Write a program to accept n integers in an array, and
 find the smallest and largest of the numbers.*/
 #include <stdio.h>

 int main()
{
    int n = 0, temp = 0;
    printf("\nHow many numbers do you want o enter?\n");
    scanf("%d", &n);
    int inparr[n];
    //Loop to take input from the user
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter a number\n");
        scanf("%d", &inparr[i]);
    }

    //Selection sort to arrange the elements in Ascending Order
    for (int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if(inparr[j] > inparr[j + 1])
            {
                temp = inparr[j];
                inparr[j] = inparr[j + 1];
                inparr[j + 1] = temp;
            }
        }
    }
    printf("\nSmallest of given numbers is: %d\nLargest of given numbers is:%d", inparr[0], inparr[n-1]);

}