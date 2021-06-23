//PLEASE RUN VIA DEBUGGER TO GET THE CORRECT OUTPUT
//PLEASE RUN VIA DEBUGGER TO GET THE CORRECT OUTPUT
//PLEASE RUN VIA DEBUGGER TO GET THE CORRECT OUTPUT
//PLEASE RUN VIA DEBUGGER TO GET THE CORRECT OUTPUT
//PLEASE RUN VIA DEBUGGER TO GET THE CORRECT OUTPUT

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Function to sort the letters of the string in ALPHABETICAL order
char* Alpha_Sort_Str(char *);

//Function to determine whether the given two strings are ANAGRAMS or NOT
int anagrams(char *, char *);

int main()
{
    //PART A
        char s11[100], s2[100];          //Two input strings
        printf("\nEnter string 1: ");
        scanf("%s", s11);
        printf("\nEnter string 2: ");
        scanf("%s", s2);

        //Finding whether the given two strings are anagrams or not
        if (anagrams(s11, s2) == 0)
        {
            printf("\nGiven strings are ANAGRAMS");
        }
        else
        {
            printf("\nThe Given strings are NOT ANAGRAMS");
        }

    //PART B
    char s1[12];
        printf("\n\nEnter a string: ");
        scanf("%s", s1);
        if (strlen(s1) < 7)
        {
            printf("\nShort string");
        }
        else if(strlen(s1) > 10)
        {
            printf("\nLong string");
        }
        else
        {
            int n = strlen(s1);
            s1[n] = 32;
            int c = 0;
            FILE *fp;
            char temps[n + 1], temp[n + 1], *tempc;
            switch (n)
            {
                case 7:
                {
                    fp = fopen("7letterwords.txt","r");
                    while(!feof(fp))
                    {
                        tempc = fgets(temps,sizeof(temps) + 1, fp);
                        strcpy(temp, temps);
                        int r = anagrams(s1, temps);
                        if (r == 0)
                        {
                            printf("%s", temp);
                            c++;
                        }
                    }
                    printf("\n%d", c);
                }
                break;
                case 8:
                {
                    fp = fopen("8letterwords.txt","r");
                    while(!feof(fp))
                    {
                        tempc = fgets(temps,sizeof(temps) + 1, fp);
                        strcpy(temp, temps);
                        int r = anagrams(s1, temps);
                        if (r == 0)
                        {
                            printf("%s", temp);
                            c++;
                        }
                    }
                    printf("\n%d", c);
                }
                break;
                case 9:
                {
                    fp = fopen("9letterwords.txt","r");
                    while(!feof(fp))
                    {
                        tempc = fgets(temps,sizeof(temps) + 1, fp);
                        strcpy(temp, temps);
                        int r = anagrams(s1, temps);
                        if (r == 0)
                        {
                            printf("%s", temp);
                            c++;
                        }
                    }
                    printf("\n%d", c);
                }
                break;
                case 10:
                {
                    fp = fopen("10letterwords.txt","r");
                    while(!feof(fp))
                    {
                        tempc = fgets(temps,sizeof(temps) + 1, fp);
                        strcpy(temp, temps);
                        int r = anagrams(s1, temps);
                        if (r == 0)
                        {
                            printf("%s", temp);
                            c++;
                        }
                    }
                    printf("\n%d", c);
                }
                break;
            }
            fclose(fp);
        }


}

//Function to sort the letters of the string in ALPHABETICAL order
char* Alpha_Sort_Str(char *arr)
{
    unsigned int n = strlen(arr);
    char temp;

    //Loop to sort the letters of the string in ALPHABETICAL order
	for (unsigned int i = 0; i < n-1; i++)
    {
		for (unsigned int j = i+1; j < n; j++)
        {
			if (arr[i] > arr[j])
            {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
    return arr;
}

//Function to determine whether the given two strings are ANAGRAMS or NOT
int anagrams(char *s1, char *s2)
{
    Alpha_Sort_Str(s1);
    Alpha_Sort_Str(s2);
    if (strcmp(s1, s2) == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}