#include <stdio.h>

void invarr(int *, int);
void priarr(int *, int);
void swap(int *, int *);

int main()
{
	int a[100], num=0;
	char in;
	do
		scanf("%d", &a[num++]);
	while((in=getchar()) != '\n');
	num--;
	invarr(a,num);
	priarr(a,num);
}

void invarr(int *arr, int num)
{
	int *p, *q;
	p = arr;
	q = arr + num;
	while(p<q)
		swap(p++,q--);
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void priarr(int *arr, int num)
{
	int *p;
	p = arr;
	for(int i=0; i<=num; i++)
		printf("%d ",*(p+i));
	printf("\n");
}
