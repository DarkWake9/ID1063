/*Write a program that accepts a string and a number k
 and prints the string left-rotated k times.*/
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

int main()
{
    char inc[100];
    printf("\nEnter a String\n");
    scanf("%s", inc);
    int len = 0, k = 0;
    while(inc[len] != '\0')
    {
        len++;
    }
    printf("\nEnter the number of left-rotations:\n");
    scanf("%d", &k);
    char temp[k];

    for(int i = 0; i < k; i++)
    {
        temp[i] = inc[i];
    }

    for(int i = 0; i < len - 1 ; i++)
    {
        inc[i] = inc[i+1];
    }
    
    for (int i = 0; i < k; i++)
    {
        inc[len - k + i] = temp[i];
    }
    printf("\nThe rotated string is: %s\n", inc);
}