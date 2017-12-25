#include <stdio.h>

typedef struct Chain
{
	int num;
	float score;
	struct Chain *next;
} Chain;

typedef int Arr[10];

int main()
{
	Chain a;
	Arr b;
	a.num = 123;
	a.score = 95.35;
	a.next = NULL;
	for(int i=0; i<10; i++)
		b[i] = i;

	printf("%d,%f,%p\n",a.num, a.score, a.next);
	for(int i=0; i<10; i++)
		printf("%d", b[i]);
	printf("\n");

	return 0;
}
