/*Create a structure called Matrix that can store a two dimensional rectangular matrix
and its dimensions. Accept two matrices from the user (accept their dimensions first),
compute their product (if the dimensions are compatible), store the result in another
Matrix variable and print it.*/

#include <stdio.h>
#include <stdlib.h>

struct Matrix
{
    int row;
    int column;
    int m[100][100];
};

typedef struct Matrix matrix;       //Defining a matrix type

int main()
{
    matrix mat1, mat2;      //mat1 and mat2 are the input matrices
    matrix product;         //Matrix Product of mat1 and mat2
    //Dimensions of the first matrix
    printf("\nEnter the dimensions of first matrix\n");
    printf("No.of Rows: ");
    scanf("%d", &mat1.row);
    printf("No.of Columns: ");
    scanf("%d", &mat1.column);

    //Dimensions of the second matrix
    printf("\nEnter the dimensions of second matrix\n");
    printf("No.of Rows: ");
    scanf("%d", &mat2.row);
    printf("No.of Columns: ");
    scanf("%d", &mat2.column);

    //Exit the program if the matrices are INCOMPATIBLE
    if (mat1.column != mat2.row)
    {
        printf("\nThe Matrices are INCOMPATIBLE\nMatrix multiplication is NOT possible\n");
        return EXIT_FAILURE;
    }

    printf("\nEnter the elements of the first matrix");
    //Loop to store the elements of the first matrix
    for (int i = 0; i < mat1.row; i++)
    {
        for (int j = 0; j < mat1.column; j++)
        {
            printf("\nRow %d Column %d :", i + 1, j + 1);
            scanf("%d", &mat1.m[i][j]);
        }
    }

    printf("\nEnter the elements of the second matrix");
    //Loop to store the elements of the second matrix
    for (int i = 0; i < mat2.row; i++)
    {
        for (int j = 0; j < mat2.column; j++)
        {
            printf("\nRow %d Column %d :", i + 1, j + 1);
            scanf("%d", &mat2.m[i][j]);
        }
    }
    product.row = mat1.row;
    product.column = mat2.column;

    //Loop to multiply the matrices mat1 and mat2 and store the product in product
    for (int i = 0; i < product.row; i++)
    {
        for (int j = 0; j < product.column; j++)
        {
            product.m[i][j] = 0;
            for (int k = 0; k < mat1.column; k++)
            {
                product.m[i][j] += mat1.m[i][k] * mat2.m[k][j];
            }
        }
    }

    //Loop to print the output i.e the product matrix
    for (int i = 0; i < mat1.row; i++)
    {
        printf("\n");
        for (int j = 0; j < mat2.column; j++)
        {
            printf("%d\t", product.m[i][j]);
        }
    }
    return EXIT_SUCCESS;
}