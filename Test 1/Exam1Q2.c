/* Program that accepts a character and displays all the letters in the English
alphabet starting from the given letter. If the letter is uppercase, the function displays
the alphabet in uppercase. If the character is not from the English alphabet, the function
displays an error message.
*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int r = 0;  //variable to control recursion of the program
    do
    {
        char inpchar; 
        printf("\nEnter a character: ");
        scanf("%c", &inpchar);              //Taking the input char from the user
            
        printf("\n");

        //FOR CAPITAL LETTERS
        if (inpchar >= 65 && inpchar <= 90)
        {
            for (int i = 0; i < 26; i++)
            {
                inpchar = inpchar > 90 ? inpchar -= 26 : inpchar;   //Ternary operator to change inpchar from Z to A
                printf("%c ", inpchar);
                inpchar++;
            }
        }

        //for small letters
        else if (inpchar >= 97 && inpchar <= 122)
        {
            for (int i = 0; i < 26; i++)
            {
                inpchar = inpchar > 122 ? inpchar -= 26 : inpchar;  //Ternary operator to change inpchar from z to a
                printf("%c ", inpchar);
                inpchar++;
            }
        }

        //For INVALID input
        else
        {
            printf("%c is not an English letter.", inpchar);
        }

        //Prompting the user for recursion    
        printf("\nDo you want to enter another mark?\nType 1 for yes\nType anyting else to quit\n");
        scanf("%d", &r);

    }
    while (r == 1);

    printf("\n!!!!THANK YOU!!!!\n");
}