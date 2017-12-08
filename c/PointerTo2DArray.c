#include <stdio.h>

void p2A(int *[], int, int);

int main()
{
	int count = 0;
	int a[10][10];
	for(int i=0; i<10; i++)
		for(int j=0; j<10; j++)
			a[i][j] = count++;
	p2A(a,10,10);
	return 0;
}

void p2A(int (*a)[], int x, int y)
{
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			printf("%4d", *(*(a+i)+j));
		}
		printf("\n");
	}
}
