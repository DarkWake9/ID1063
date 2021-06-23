//1d
#include <stdio.h>

int main(void)
{
    int in,o=0,p=0,q=0,a=0;
    printf("\nEnter any number less than 1000\n");
    scanf("\n%i",&in);
//main logic
        o=in/100;
        a = in - o*100;
        p = a/10;
        q = a - p*10;
        printf("\nResult\n%i\n%i\n%i\n",o,p,q);
}