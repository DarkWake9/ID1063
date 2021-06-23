/*Write a program that lets the user play the 15-puzzle. Display some
initial configuration and accept a sequence of moves from the user
and after each move, display the new matrix. The moves may be
accepted as N,W,E or S, where N implies that the blank square has
to be swapped with the square above it. W,E,S are self-explanatory.
The program will stop if the user inputs the character X. Use zero (0)
for the blank location.
*/
#include <stdio.h>

int main()
{
    char soln[4][4] = {{'1', '2', '3', '4'}, {'5', '6', '7', '8'}, {'9', 'A', '0', 'B'}, {'C', 'D', 'E', 'F'}};   //Puzzle to be solved
    printf("\nInitial puzzle:");
    for (int r = 0; r < 4; r++)
    {
        printf("\n");
        for (int c = 0; c < 4; c++)
            {
                printf("%c   ", soln[r][c]);
            }
    }
    char asoln[4][4] = {{'1', '2', '3', '4'}, {'5', '6', '7', '8'}, {'9', 'A', 'B', 'C'}, {'D', 'E', 'F', '0'}}; //Solution to the 15 puzzle

    char disp;  //Displaces the 0 in user given direction among N, E, W, S
    
    do
    {
            char temp; //Auxillary in swapping
            printf("\nEnter the direction to displace 0: ");
            scanf("%c", &disp);

            if (disp == 'X') 
            {
                break;
            }
            int i = 0,j = 0;
            int lb = 0;
            for(i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if (soln[i][j] == '0')
                    {
                        lb = 1;
                        break;
                    }
                }
                if(lb == 1) break;
            }
            //switch case to swap 0 in the direction of disp
            switch (disp)
            {
                case 78:
                {
                    temp = soln[i - 1][j];
                    soln[i - 1][j] = '0';
                    soln[i][j] = temp;
                }
                break;

                case 69:
                {
                    temp = soln[i][j + 1];
                    soln[i][j + 1] = '0';
                    soln[i][j] = temp;
                }
                break;

                case 87:
                {
                    temp = soln[i][j - 1];
                    soln[i][j - 1] = '0';
                    soln[i][j] = temp;
                }
                break;

                case 83:
                {
                    temp = soln[i + 1][j];
                    soln[i + 1][j] = '0';
                    soln[i][j] = temp;
                }
                break;
            }//ENDOF SWITCH

            printf("\nPuzzle after above step:");
            for (int r = 0; r < 4; r++)
            {
                printf("\n");
                for (int c = 0; c < 4; c++)
                {
                    printf("%c   ", soln[r][c]);
                }
            }
    }while(disp != 'X');        //End of Loop

    printf("\nYou ended at:");

    //Loop to print the state where the user quits
    for (int r = 0; r < 4; r++)
    {
        printf("\n");
        for (int c = 0; c < 4; c++)
        {
            printf("%c   ", soln[r][c]);
        }
    }
}