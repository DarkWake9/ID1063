/*Write a function that accepts a string and removes duplicates of characters.
Example runs:
Enter the string: bananas
Output string: bans
Enter the string: cataract
Output string: catr
*/
#include <stdio.h> 
#include <string.h>

void del_dup(char *s);

int main()
{
    char inpstr[1000];
    printf("\nEnter the string: ");
    scanf("%s", inpstr);
    del_dup(inpstr);
    printf("\nOutput string: ");
    printf("%s\n",inpstr);
}

//Function to delete the censored duplicates
void del_dup(char *s)
{
    //Loop to find the duplicates and "censor" them with '!' character 
    for(int i = 0; s[i]; i++)
    {
    	if(!(s[i] == '!'))
    	{
    		for(int j = i + 1; s[j]; j++)
            {
            	if(s[i] == s[j])
            	   s[j] = '!';
		    }	
		}	
    }

	int k = 0;
    //Loop to remove the '!' character
    for(int i = 0; s[i]; i++)
    {
        s[i] = s[i + k];
     	if(s[i] == '!')
     	{
		    k++;
		    i--;
	    }
    }  	 
}