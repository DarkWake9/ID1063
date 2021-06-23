/*Write a program to accept a positive integer n, a n×n matrix M, and a vector v ∈ R^n
and to print the entries of M · v.*/

#include <stdio.h>

//product function to calculate the product of the matrix and the basis vectors
double product(int n, double input_matrix[n][n], double input_vector[n]);

//main function to take input and display the output
int main()
{
    int n = 0;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);
    
    double input_matrix[n][n];
    double input_vector[n];

    //Loop to get the matrix elements from the user
    for (int i = 0; i < n; i++)
    {
        printf("\nRow %d:\n", i + 1);
        for (int j = 0; j < n; j++)
        {
            printf("\nColumn %d: ", j + 1);
            scanf("%lf", &input_matrix[i][j]);
        }
    }

    //Loop to get the n dimensions of a vector v from the user
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the dimension %d of the vector:\n", i + 1);
        printf("\n");
        scanf("%lf", &input_vector[i]);
    }
    product(n, input_matrix, input_vector);
}

double product(int n, double input_matrix[n][n], double input_vector[n])
{
    double output_vector[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            output_vector[i] = 0;
            for (int k = 0; k < n; k++)
            {
                output_vector[i] += input_matrix[i][k] * input_vector[k];
            }
        }
    }

    printf("\nThe output Vector is: ");
    //Loop to print the output vector
    for (int i = 0; i < n; i++)
    {
        
        printf("%lf\t", output_vector[i]);
    }
    return 0.0;
}

