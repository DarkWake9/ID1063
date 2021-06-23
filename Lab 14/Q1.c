/*Program that accepts the names of two text files and appends
the contents of the second file to the first.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    FILE *p1, *p2, *temp;
    char filename_1[20], filename_2[20];        //Stores the names of files taken from the user
    char eofc;
    printf("\nEnter the name of file 1: ");
    scanf("%s", filename_1);
    printf("\nEnter the name of file 2: ");
    scanf("%s", filename_2);
    p1 = fopen(filename_1, "r");
    p2 = fopen(filename_2, "r");

    temp = fopen("TEMP.txt", "w");      //temp to temporarily store the concatenation of file 1 and file 2 in a separate file

    //Writing the first file to the temp file
    while ((eofc = fgetc(p1)) != EOF)
    {
        fputc(eofc, temp);
    }

    //Writing the second file to the temp file
    while ((eofc = fgetc(p2)) != EOF)
    {
        fputc(eofc, temp);
    }

    //Reopening the temporary file in read mode and the first file in write mode to store the result
    fclose(p1);
    fclose(temp);
    p1 = fopen(filename_1, "w");
    temp = fopen("TEMP.txt", "r");

    //Writing the output to the first file
    while ((eofc = fgetc(temp)) != EOF)
    {
        fputc(eofc, p1);
    }
    fclose(temp);
    remove("TEMP.txt");     //Destroying the temporary file
    fclose(p1);
    fclose(p2);
}