/*Consider the following declarations:
double **matrix;
unsigned int m,n;
Accept the value of m, n from the user 
and dynamically allocate memory for matrix 
to store a rectangular matrix of size m × n.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double **matrix;
    unsigned int m,n;
    printf("\nEnter the no.of rows: ");
    scanf("%u", &m);
    printf("\nEnter the no.of columns: ");
    scanf("%u", &n);
    
    matrix = (double** ) calloc(m, sizeof(double));
    for(int i = 0; i < m; i++) 
    {
        matrix[i] = (double* ) calloc(n, sizeof(double));
    }      

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\nEnter element %d row, %d column: ", i + 1, j + 1);
            scanf("%lf", &matrix[i][j]);
        }
    }

    printf("\nYour Matrix");
    for (int i = 0; i < m; i++)
    {
        printf("\n\n");
        for (int j = 0; j < m; j++)
        {
            printf("%lf\t",matrix[i][j]);
        }
    }
}