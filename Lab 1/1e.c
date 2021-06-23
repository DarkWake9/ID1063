//1e
#include <stdio.h>

int main(void)
{
    float r=0, a=0, c=0, p=3.141592;
    printf("\nEnter the value of raduis of the circle\n");
    scanf("%f",&r);
    a = p * r * r;
    c = 2 * p  * r;
    printf("Cirumference of given circle is: %f\nArea of given circle is: %f\n",c,a);
}