/* Create a copy of redSanta.bmp in which the color of Santa’s suit is
changed from red to some other color of your choice.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char headerInfo[55];
	unsigned char R, G, B;
    FILE *imgreader;
    FILE *imgwriter;


	imgreader = fopen("redSanta.bmp", "rb");	// rb is for binary read mode

	if (imgreader==NULL)
	{
		printf("\n Open Error");
		return 2;
	}


	imgwriter = fopen("redSantaCopy.bmp", "wb"); //wb is for write binary mode

	if (imgwriter == NULL)
    {
        printf("\nWrite Error");
        return 3;
	}

	fread(headerInfo, 54, 1, imgreader);
	fwrite(headerInfo, 54, 1, imgwriter);		//54 bytes offset as the header of any bmp img has size of 54 bytes

	while(!feof(imgreader))
	{
		B = fgetc(imgreader);
		G = fgetc(imgreader);
		R = fgetc(imgreader);

		fputc(B + R + G, imgwriter);
		fputc(G, imgwriter);
		fputc(R, imgwriter);

	}

	fclose(imgwriter);
	fclose(imgreader);
}