/*The library string.h has a function called strcat, which is declared as
char *strcat(char *dest, const char *src). It appends (concatenates
at the end), the string pointed to by src to the string pointed to by
dest. Write your own implemenation of this function. [Don’t include
string.h in your program.]*/
#include <stdio.h>

char strcat_altier(char[], char[]);

int main()
{
    char s1[200];
    printf("\nEnter a string\n");
    scanf("%s", s1);                //Destination string
    char s2[100];
    printf("\nEnter a string\n");
    scanf("%s", s2);                //Source string
    strcat_altier(s1, s2);
    printf("\n%s", s1);             //Printing the concatanated string
}

//Function to concatanate two given strings
char strcat_altier(char a[], char b[])
{
    unsigned i = 0, j = 0;
    while (a[i] != '\0')
    {
        i++;                //index i goes upto the length of string a
    }

    //Loop to concat both the strings
    while (b[j] != '\0')
    {
        a[i] = b[j];       //index i starts at length of string a and goes till length of string a + string b
        i++;               //while j stars from 0 and goes till length of string b
        j++;
    }
    a[i] = '\0';           //Terminating the concatanated string. Else it will print xxxxxx till \0 is found or it will give an error
    return (0);
}