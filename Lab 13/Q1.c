/*Write a program to read the file ”1000CommonWords.txt” and print all the 7-letter words in this file on screen.*/
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file_reader;
    char temp[20], *flag;       //temp[20] to temporarily store the string from the file until it's printed
    file_reader = fopen("1000CommonWords.txt", "r");

    while (!feof(file_reader))        //Loop iterates till the end of the file
    {
	    flag = fgets(temp, sizeof(temp), file_reader);
	    if (flag != NULL && strlen(temp) == 8)      //'flag != NULL' to check if the word was read correctly
	    {
    		printf("%s", temp);
	    }
    }

    fclose(file_reader);
}