#include <stdio.h>

int * generateArray();

int main()
{
	int *p = 0,num;
	scanf("%d", &num);
	p = generateArray(num);
	for(int i = 0; i<num; i++)
		printf("%4d",*(p+i));
	printf("\n");
	
	return 0;
}

int * generateArray(int num)
{
	static int rt[100];
	for(int i = 0; i < num; i++)
		rt[i] = i + 1;
	
	return rt;
}
