/*Write a program to accept a number 1 ≤ n ≤ 112 and print the
symbol and name of the element with atomic number n; use the file
chemicalElements.txt and the atoi function.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int at_no;     //Stores Atomic number
    char symbol[3];         //Stores Symbol
    char ele_name[20];      //Stores Element Name
    char at_wt[20];         //Stores Atomic Weight in string form
} elements;

int main()
{
    elements ele;
    unsigned int input_at_num = 0;      //To store the atomic number
    FILE *filereader;

	filereader = fopen("chemicalElements.txt", "r");

	if (filereader == NULL)
	{
		printf("\n Open Error");
		return EXIT_FAILURE;
	}

    printf("\nEnter the atomic number of the required element: ");
    scanf("%u", &input_at_num);

    if (input_at_num <= 112 && input_at_num > 0)    //To proceed only if the user inputs a valid atomic number (in chemicalElements.txt)
    {
        while (!feof(filereader))    //Loop iterates till end of the chemicalElements.txt file
        {
            fscanf(filereader, "%u %s %s %s", &ele.at_no, ele.symbol, ele.ele_name, ele.at_wt);
            if (ele.at_no == input_at_num)
            {
                printf("\n%u  %s  %s   %s", ele.at_no, ele.symbol, ele.ele_name, ele.at_wt);
                
                fclose(filereader);
                return EXIT_SUCCESS;
            }
        }
    }
    else
    {
        printf("\nInvalid atomic number");
    }

}