/*(a) A heterogram is a string in which no character is repeated. An
example is the word Apricot, while Apple is not a heterogram. Write
a function IsHeterogram that accepts a string and checks whether it
is a heterogram.
(b) Read the file 12letterWords.txt and create a file called
12letterHgrams.txt that contains all 12-letter heterograms.
You should find 146 such words, with Adjunctively being the first and Zanthoxylums
being the last.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*(a) A heterogram is a string in which no character is repeated. An
example is the word Apricot, while Apple is not a heterogram. Write
a function IsHeterogram that accepts a string and checks whether it
is a heterogram.*/

#define TRUE 1
#define FALSE 0

int IsHeterogram(const char *str)
{
    unsigned int length = strlen(str);
    unsigned int ishet = 0;      //ishet stores no of repetitions of letters in a given word
    for (unsigned i = 0; i < length; i++)
    {
        for (unsigned j = 0; j < length; j++)
        {
            if ((str[i] == str[j] || str[i] == str[j] + 32 || str[i] == str[j] - 32) && i != j) //Condition for a given word/string to NOT be a heterogram
            {
                ishet++;
            }
        }
    }

    return ishet == 0 ? TRUE : FALSE;     //Returning TRUE if word is Heterogram else returns FALSE
}

int main()
{
    /*(b) Read the file 12letterWords.txt and create a file called
    12letterHgrams.txt that contains all 12-letter heterograms.
    You should find 146 such words, with Adjunctively being the first and Zanthoxylums
    being the last.*/

    FILE *filereader, *filewriter;

    char temp[14];      //string to temporarily store the words from 12letterwords.txt
	filereader = fopen("12letterWords.txt", "r");
    filewriter = fopen("12letterHgrams.txt", "w");

	if (filereader == NULL)
	{
		printf("\n Open Error");
		return 2;
	}

    while (!feof(filereader))
	{
        fgets(temp, sizeof(temp), filereader);

        if (IsHeterogram(temp) == TRUE)
        {
            fprintf(filewriter, "%s\n", temp);    //Writing all the 12 letter heterograms to 12letterHgrams.txt
        }
    }

    fclose(filereader);
    fclose(filewriter);

    return EXIT_SUCCESS;
}