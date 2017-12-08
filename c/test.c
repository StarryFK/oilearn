#include <stdio.h>

int main()
{
	int a[10][10];
	int count=0;
	for(int i=0; i<10; i++)
		for(int j=0; j<10; j++)
			a[i][j] = count++;

	printf("%p,%p,%p,%d", &a, a, *a, **a);

	return 0;
}
