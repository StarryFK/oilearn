#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p;
	int count=0;
	p = calloc(1,sizeof(char));
	do
	{
		*(p+count) = getchar();
		realloc(p,1+count++);
	}while(*(p+count) != '\n');
	*(p+count) = '\0';
	puts(p);
}
