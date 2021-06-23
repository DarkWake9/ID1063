/*Accept an English letter from the user and an integer n; shift the letter
by n. For example, if the character is ’a’ and n = 3, the output is ’d’.
If the character is ’x’ and n = 5, the output is ’c’.*/

#include <stdio.h>

int main(void)
{
    int n = 0, r=0;
    char ch;
    do
    {
        printf("\nEnter any character\n");
        scanf("%c",&ch);
        printf("\nEnter the shifting value\n");
        scanf("%d",&n);

        if(ch>=65 && ch<=90)
        {
            ch = ch + (char)n;
            if(ch>90)
            {
                ch = ch - 26;
            }
        }
        if(ch>=97 && ch<=122)
        {   
            ch = ch + (char)n;
            if(ch>122)
            {
                ch = ch - 26;
            }
        }
        printf("\nOutput character is: %c", ch);

        printf("\nDo you want to try again?\nEnter 1 for yes\nEnter anything else to exit\n");
        scanf("%d", &r);

    } while (r == 1);
    
    printf("\nThank you\n\n");

}