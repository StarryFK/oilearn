#include <stdio.h>

int main()
{
	int a[10];
	int b;
	b = a;
	printf("%x\n",a);
	for(int i=0;i<10;i++)
	{
		printf("%d:%x\n",i,&a[i]);
	}
	return 0;
}
