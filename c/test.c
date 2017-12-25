#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(Stud)

FILE * in;
FILE * out;

struct Student
{
	int num;
	char name[20];
	float score;
	struct Student *next;
};

typedef struct Student Stud;

int num;

Stud * create(FILE * in)
{
	Stud *head=null, *p1, *p2;
	p1 = p2 = malloc(LEN);
	if(p1 == null)
	{
		printf("Fail to malloc\n");
		return;
	}
	fscanf(in

int main()
{
	if((in=fopen("input.txt", "r")) == NULL)
	{
		printf("Cannot open the input file");
		exit(0);
	}
	if((out=fopen("output.txt", "w")) == NULL)
	{
		printf("Cannot open the output file");
		exit(0);
	}

	fclose(fi);
	fclose(fo);

	return 0;
}
