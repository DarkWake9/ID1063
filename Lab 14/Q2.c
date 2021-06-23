/*(Optional) Write a program to accept the name of a text file
and print the lines in reverse order.*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
      FILE *fp;
      char ch, inpfn[100];
      scnaf("%s", inpfn);
      int i,pos;
      fp=fopen(inpfn,"r");
      if(fp==NULL)
      {
            printf("File does not exist..");
            return EXIT_FAILURE;
      }
      fseek(fp,0,SEEK_END);
      pos=ftell(fp);
      //printf("Current postion is %d\n",pos);
      i=0;
      while(i<pos)
       {
            i++;
            fseek(fp,-i,SEEK_END);
            //printf("%c",fgetc(fp));
            ch=fgetc(fp);
            printf("%c",ch);
      }
      return 0;
}