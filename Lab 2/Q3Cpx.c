#include<stdio.h>
#include<complex.h>

int main()
{
    double complex z=2.0+3.0*I;
    double complex zb=4.0+5.0*I;
    double complex s= z*zb;
    printf(" %lf +  %lf *I",creal(s),cimag(s));

    return 0;
}
