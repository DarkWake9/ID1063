//2B
#include <stdio.h>

int main(void)
{
    char un[30];

    printf("\n Hello, user. What's your name? ");

    scanf("%s",un);

        un[0] = 'Z';

	printf("Welcome, %s \n",un);
    return 0;
}