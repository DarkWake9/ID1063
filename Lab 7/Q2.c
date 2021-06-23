/*The sample file string-functions.c has a couple of example functions, and two more
function declarations; one for printing a string multiple times, and another, for printing
a substring of a string. Fill in the code inside these functions (this is usually called
the function definition). Test these functions by calling them in main().*/

#include<stdio.h>

unsigned stringLength(char text[]);
void multiCharPrint(char ch, unsigned count);
void multiStringPrint(char text[], unsigned count);
void substringPrint(char text[], unsigned i, unsigned j, unsigned max);

//Main function to get the Input string and indices from the user and print the output
int main()
{
    char input_string[100];               //Input string
    printf("\nEnter a string\n");
    scanf("%s", input_string);        
    unsigned i = 0, j = 0;           //i and j are indices to print the substring
    printf("\nEnter the left index: ");
    scanf("%u", &i);
    printf("\nEnter the right index: ");
    scanf("%u", &j);

    printf("\n Length is %u \n", stringLength(input_string));
    multiCharPrint('*', 10);
    multiStringPrint(input_string, stringLength(input_string));
    substringPrint(input_string, i - 1, j - 1, stringLength(input_string));
    return 0;
}
// This function returns the length of text.
unsigned stringLength(char text[])
{
    unsigned len;
    len = 0;
    while (text[len] != '\0')
    {
        len++;
    }
    return len;
}

// This function prints the character ch count many times.
void multiCharPrint(char ch, unsigned count)
{
    unsigned i = 1;
    while (i <= count)
    {
        printf("%c", ch);
        i++;
    }
}

//This function prints the string text, count many times.
void multiStringPrint(char text[], unsigned count)
{
    unsigned i;
    for (i = 0; i < count; i++)
    {
        printf("\n%s", text);
    }
}

//This function prints the substring of the given string text, between indices i and j, inclusive.
void substringPrint(char text[], unsigned i, unsigned j, unsigned max)
{
    if (i > j || j > max)
    {
        printf("\n!!!Invalid indices!!!");
    }
        
    else
    {
        printf("\n");
        for (int c = i; c <= j; c++)
        {
            printf("%c", text[c]);
        }
    }
}


