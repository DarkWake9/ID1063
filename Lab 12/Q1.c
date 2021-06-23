/*Consider the following definition of a structure that can store a vector.
struct vector
{
double *v;
unsigned int d;
};
where d is the dimension of the vector.
(a) Create a variable of type vector; accept the value of d from the
user and dynamically allocate memory for v to store d entries.
(b) Write a function called initializeVector that accepts (i) the address
of a struct vector variable, (ii) the value of d, (iii) a double value a,
and dynamically allocates memory for v to store d entries, initializing
each entry to the value a.
(c) Define an enum variable called BasicDataType with the values
Char, Int, Float, Double. Change the declaration type of v from double
* to void* and write a function called memoryAssign that accepts
(i) the address of a struct vector variable, (ii) the value of d, (iii) a
BasicDataType value t, and dynamically assigns memory for v to store
d entries whose data type is t.*/

#include <stdio.h>
#include <stdlib.h>

/*(a) Create a variable of type vector; accept the value of d from the
user and dynamically allocate memory for v to store d entries.*/
typedef struct
{
    double* v;
    unsigned int d;
} vector;

enum BasicDataType {Char, Int, Float, Double}; 

int initializeVector(vector* va, unsigned d, double a);

int main()
{
    /*(a) Create a variable of type vector; accept the value of d from the
          user and dynamically allocate memory for v to store d entries.*/

    vector vec;
    printf("\nEnter the dimension of the vector: ");
    scanf("%u", &vec.d);
    vec.v = (double *) malloc(vec.d * sizeof(double));

    initializeVector(&vec, vec.d, 15.2);
    for (unsigned i = 0; i < vec.d; i++)
    {
        printf("%lf\t", *(vec.v + i));
    }

    memoryAssign(&vec, vec.d, 15);
    free(vec.v);
}



/*(b) Write a function called initializeVector that accepts (i) the address
of a struct vector variable, (ii) the value of d, (iii) a double value a,
and dynamically allocates memory for v to store d entries, initializing
each entry to the value a.*/

int initializeVector(vector* va, unsigned d, double a)
{
    (double*)va->v;
    va -> v = (double *) malloc(d * sizeof(double));
    for (int i = 0; i < d; i++)
    {
        printf("\nEnter the %uth dimension value: ", i + 1);
        scanf("%lf", &a);
        va -> v[i] = a;
    }
}

