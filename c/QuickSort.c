#include <stdio.h>

int a[100];

int main()
{
	void sort(int *,int,int);
	void prar(int *,int);
	int c=0;
	char ch;
	do
	{
		scanf("%d",&a[c]);
		c++;
	}while((ch = getchar()) != '\n');
	c--;
	prar(a, c);
	sort(a, 0, c);
	prar(a, c);
}


void sort(int *a, int left, int right)
{
	if(left>=right)
		return;

	int i=left,j=right;
	int key=a[i];

	while(i<j)
	{
		while(i<j && key<= a[j])
			j--;
		a[i] = a[j];

		while(i<j && key>= a[i])
			i++;
		a[j] = a[i];
	}

	a[i] = key;

	sort(a, left, i-1);
	sort(a, i+1, right);
}

void prar(int *a, int num)
{
	for(int i=0; i<=num; i++)
		printf("%d ",*(a+i));
	printf("\n");
}

