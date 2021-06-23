/*3. (a) Write a function to accept two strings and check if they are anagrams of each other.
Two strings are anagrams if they contain the same multiset of letters, but in different
orders. For example, sergeant and reagents are anagrams, but pear and appear are not
anagrams.
(b) Write a program to accept a string and do the following: if the string has less than
7 characters, print ”Short string”; if the string has at least 11 characters, print ”Long
string”; otherwise, print all anagrams of the string which are present in the one of the files
“7letterWords.txt”, “8letterWords.txt”, “9letterWords.txt”, “10letterWorsnds.txt”.*/

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
        char s1[100], s2[100];          //Two input strings
        printf("\nEnter string 1: ");
        scanf("%s", s1);
        printf("\nEnter string 2: ");
        scanf("%s", s2);

        //Finding whether the given two strings are anagrams or not
        if (anagrams(s1, s2) == 0)
        {
            printf("\nGiven strings are ANAGRAMS");
        }
        else
        {
            printf("\nThe Given strings are NOT ANAGRAMS");
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