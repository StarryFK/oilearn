#include <stdio.h>

int ctof();
void cto();
int ctok();
void printArray();

int main()
{
	int a[100], b[100], c[100], count = 0;
	char ch;
	do
		scanf("%d", &a[count++]);
	while((ch = getchar()) != '\n');
	printf("Here's C:");
	printArray(a,count);
	cto(a,b,count,ctof);
	cto(a,c,count,ctok);
	printf("Here's F:");
	printArray(b,count);
	printf("Here's K:");
	printArray(c,count);
	printf("\n");

	return 0;
}

void printArray(int *out, int len)
{
	for(int l = 0; l<len; l++)
		printf("%5d", *(out + l));
	printf("\n");
}

void cto(int *a, int *b, int len, int (*f)(int))
{
	for(int k = 0; k<len; k++)
		*(b+k) = (*f)(*(a+k));
}

int ctof(int c)
{
	return c*1.8+32;
}

int ctok(int c)
{
	return c+273;
}
