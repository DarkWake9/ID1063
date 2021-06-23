
/*Write a program to accept a string and 
print the number of occurrences of each vowel
in the string, as well as the length of the string.
For example, if the input string is PROGRAMMING,
the output is: A:1, E:0, I:1, O:1, U:0. String Length: 11.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char inpchar[100];
    printf("\nEnter any string\n");
    scanf("%s", inpchar);
    int len  = 0;
    while(inpchar[len] != '\0')
    {
        len++;
    }
    int count[5] = {0 , 0 , 0 , 0 , 0};

    for(int i = 0; i < len; i++)
    {
        switch (inpchar[i])
        {
            case 'A':
            case 'a':
                count[0]++;
            break;

            case 'E':
            case 'e':
                count[1]++;
            break;
            
            case 'I':
            case 'i':
                count[2]++;
            break;

            case 'O':
            case 'o':
                count[3]++;
            break;

            case 'U':
            case 'u':
                count[4]++;
            break;
        }
    }
    printf("\nA:%d, E:%d, I:%d, O:%d, U:%d.", count[0], count[1], count[2], count[3], count[4]);
    printf(" String length: %d\n", len);

}