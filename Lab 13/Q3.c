/*Write a program to accept a year between 1939 and 2019
and print the name of the movie that won the Academy Award for
best picture in that year; use the academylist-movies file.*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    /*unsigned int moy[5];
    unsigned int tempyr = 0;*/
    char moy[5];
    char tempyr[5];
	char string[50], a = '-';

	FILE *filereader;

	filereader = fopen ("academylist-movies.txt","r");

	if (filereader==NULL)
	{
		printf("\n Open Error");
		return 1;
	}

    printf("Enter the Year: ");
    scanf("%s", moy);
    
    if(atoi(moy) > 2019 || atoi(moy) < 1939)
    {
        printf("Invalid year");
        return EXIT_FAILURE;
    }
    else
    {
	    while (!feof(filereader))   //Loop iterates till end of the academylist-movies.txt file
	    {
            //fscanf (filereader, "%u", &tempyr);
            fscanf (filereader, "\n%s %s", tempyr, string);
            if (atoi(moy) == atoi(tempyr))
            {   
                printf("%s - %s", tempyr, string);
                fclose (filereader);
                return EXIT_SUCCESS;
            }
	    }
    }   
	
}
