#include <stdio.h>
#include <stdlib.h>


FILE * fi;
FILE * fo;

int main()
{
	if((fi=fopen("input.txt", "r")) == NULL)
	{
		printf("Cannot open the input file");
		exit(0);

	}
	fo = fopen("output.txt", "w");

	fclose(fi);
	fclose(fo);

	return 0;
}
