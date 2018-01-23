#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FLASE 0
#define STACK_INIT_SIZE 100
#define STACK_INCREMENT 10

typedef struct{
	int * base;
	int * top;
	int size;
}SqStack;

void Init(SqStack *sq)
{
	sq->base = (int *)malloc(STACK_INIT_SIZE * sizeof(int));
	if(!sq->base)
	{
		printf("Overflow\n");
		exit(-1);
	}
	sq->top = sq->base;
	sq->size = STACK_INIT_SIZE;
}

void Push(SqStack *sq, int  in)
{
	if(sq->top-sq->base >= sq->size)
	{
		sq->base = (int *)realloc(sq->base, (sq->size + STACK_INCREMENT) * sizeof(int));
		if(!sq->base)
		{
			printf("Overflow");
			exit(-1);
		}
		sq->size += STACK_INCREMENT;
	}
	*(sq->top++) = in;
}

void Pop(SqStack *sq, int *out)
{
	if(sq->base == sq->top)
	{
		printf("Error\n");
		exit(-2);
	}
	*out = *(--sq->top);	
}


int main()
{
	char ch = '\0';
	int save;
	SqStack sq;
	Init(&sq);

	for(int i=0; i<100; i++)
	{
		ch = getchar();
		if(ch == '#')
			break;

		switch(ch)
		{
			case '(':
				Push(&sq, 1);
				break;
			case ')':
				Pop(&sq, &save);
				break;
			default:
				break;
		}
	}

	printf("Correct\n");
}
