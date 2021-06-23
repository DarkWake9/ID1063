#include<stdio.h>

int main()
{
    char ch;
    printf("\nWho is the second Man to step on Moon?");
    printf("\n(a) Neil Armstrong ");
    printf("\n(b) Edwin Aldrin ");
    printf("\n(c) Sentinel Prime ");
    printf("\n(d) Optimus Prime ");

        printf("\nEnter your choice: ");
        ch=getchar();

            switch(ch)
            {
                case 'a':
                {
                    printf("\nCorrect answer\nBecause he had 2 legs");
                }
                break;
                case 'b':
                {
                    printf("\nWrong Answer");
                    printf("\nThe correct answer is Neil Armstrong\nbecause he had 2 legs");
                }
                break;
                case 'c':
                {
                    printf("\nWrong Answer");
                    printf("\nThe correct answer is Neil Armstrong\nbecause he had 2 legs");
                }
                break;
                case 'd':
                {
                    printf("\nWrong Answer");
                    printf("\nThe correct answer is Neil Armstrong\nbecause he had 2 legs");
                }
                break;
                default:
                {
                    printf("\nInvalid choice");
                }
                break;
            }
    return 0;

}