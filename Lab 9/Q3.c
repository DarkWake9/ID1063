/*Create a typedef structure called complex, which can store the real and
imaginary parts of a complex number, and write the following three
functions: a function that accepts two complex values and returns
their sum, a function that accepts two complex values and returns
their product, a function that accepts the address of a complex value
and accepts the real and imaginary parts. Test these functions by
calling them in main.*/

#include <stdio.h>

typedef struct complex      //Defining a composite type: "complex" to store the a complex number
{
    int re;              //Real part of complex number
    int im;              //Imaginary part of complex number
} complex;

complex add(complex a, complex b);
complex multiply(complex a, complex b);
int accept(complex *a, complex b);

int main()
{
    complex z1, z2;
    printf("\nEnter the real part of z1:\n");
    scanf("%d", &z1.re);
    printf("\nEnter the imaginary part of z1:\n");
    scanf("%d", &z1.im);
    printf("\nEnter the real part of z1:\n");
    scanf("%d", &z2.re);
    printf("\nEnter the imaginary part of z1:\n");
    scanf("%d", &z2.im);
    printf("\nz1 = %d + %di", z1.re, z1.im);
    printf("\nz2 = %d + %di", z2.re, z2.im);
    printf("\nz1 + z2 = %d + %di", add(z1, z2).re, add(z1, z2).im);                 //Printing the sum of z1, z2
    printf("\nz1 * z2 = %d + %di", multiply(z1, z2).re, multiply(z1, z2).im);       //Printing the product of z1, z2
    accept(&z1, z1);
}

//Function to add two complex numbers and return the sum
complex add(complex a, complex b)
{
    complex sum;
    sum.re = a.re + b.re;
    sum.im = a.im + b.im;
    return sum;
}

//Functions to multiply two complex numbers and return the product
complex multiply(complex a, complex b)
{
    complex product;
    product.re = (a.re * b.re) - (a.im * b.im);
    product.im = (a.re * b.im) + (a.im * b.re);
    return product;
}

//Function that accepts the address of a complex value and accepts the real and imaginary parts
int accept(complex *a, complex b)
{
    complex *store = a;
}
