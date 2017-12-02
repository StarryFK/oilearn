#include <stdio.h>

int main()
{
	int a[10];
	int *b = 0;
	b = a;
	printf("%20p\n",b);
	for(int i=0;i<10;i++)
	{
		printf("%1d:%18p\n",i,&a[i]);
	}
	return 0;
}
