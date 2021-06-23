/*Accept three integers d, m, y (for date, month, year respectively) and
find the day of the week corresponding to that date; assume that the
year is between 2000 and 2100. If any of the input values is incorrect,
output an appropriate message.*/
#include <stdio.h>

int main(void)
{ 

        int d=0, m=0, y=0;
        int c = 7, r=0;
        int nl[] = {0,3,3,6,1,4,6,2,5,0,3,5};
        int l[] = {0,3,4,0,2,5,0,3,4,1,4,6};
        do
        { 
            printf("Enter Your DOB in \nDD\nMM\nYYYY\n");
            scanf("%d",&d);
            scanf("%d",&m);
            scanf("%d",&y);
            c = 0;

            //Validity check for user input
            if(m>12 || d>31 || y>2100 || y<2000)
            {
                printf("Invalid Date.");
            }
            else if(m==2 && y>=2000 && y<=2100)
            {
                if(y%4 == 0) 
                {
                    if (y%100==0 && y%400!=0)
                    {
                        if(d>28)
                        {
                            printf("Invalid Date.");
                        }
                    }
                    else
                    {
                        if(d>29)
                        {
                            printf("Invalid Date.");
                        }
                    }
                }
                else
                {
                    if(d>28)
                        {
                            printf("Invalid Date.");
                        }
                }
                
            }
            //when user input is valid
            else
            {
            
            //Years
            for (int i=2000;i<y;i++)
            {
                if(c>7) c-=7;
                if(i%4==0)
                {
                    if(i%100==0 && i%400!=0) {   c++; }

                    else   { c+=2;}
                    
                }
                else   { c++; }
            }
            
            //Months
                if(y%4==0)
                {
                    if(y%100==0 && y%400!=0)
                    {
                        c = c + nl[m-1];
                    }
                    else{    c = c + l[m-1];}
                    
                }
                else   { c = c + nl[m-1];}

                if(c>7) 
                {
                    c-=7; 
                }
                
                d = d % 7; 
                c = c + d - 1;

                if(c>7) 
                {
                    c-=7; 
                }
            
                //Printer
                switch(c)
            {
                case 1:
                {
                    printf("Your were born on SUNDAY");
                }
                break;
                case 2:
                {
                    printf("Your were born on MONDAY");
                }
                break;
                case 3:
                {
                    printf("Your were born on TUESDAY");
                }
                break;
                case 4:
                {
                    printf("Your were born on WEDNESDAY");
                }
                break;
                case 5:
                {   
                    printf("Your were born on THURSDAY");
                }
                break;
                case 6:
                {
                    printf("Your were born on FRIDAY");
                }
                break;
                case 7:
                {
                    printf("Your were born on SATURDAY");
                }
                break;
                default:
                printf("Your were born on SATURDAY", c);
                break;
        }
            }
            printf("\nDo you want to try again?\nEnter 1 for yes\nEnter anything else to exit\n");
            scanf("%d", &r);
        } while (r == 1);

        printf("\n!!Thank You!!\n\n");
}