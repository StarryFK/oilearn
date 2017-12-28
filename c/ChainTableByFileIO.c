#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(Stud)


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
	Stud *head=NULL, *p1, *p2;
	p1 = p2 = malloc(LEN);
	num =0;
	if(p1 == NULL)
	{
		printf("Fail to malloc\n");
		return NULL;
	}
	fscanf(in, "%d %s %f",&p1->num,p1->name,&p1->score);
	while(p1->num != 0)
	{
		num++;
		if(num == 1)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = malloc(LEN);
		if(p1 == NULL)
		{
			printf("Fail to malloc\n");
			return NULL;
		}
		fscanf(in, "%d %s %f",&p1->num,p1->name,&p1->score);
	}
	p2->next = NULL;
	return head;
}

void printchain(Stud *p)
{
	while(p != NULL)
	{
		printf("Student Number: %d  Student Name: %s  Score: %f\n",p->num, p->name, p->score);
		p = p->next;
	}
}

int main()
{
	FILE * in;
	FILE * out;
	if((in=fopen("input.txt", "r")) == NULL)
	{
		printf("Cannot open the input file");
		exit(0);
	}
	if((out=fopen("output.txt", "wb")) == NULL)
	{
		printf("Cannot open the output file");
		exit(0);
	}

	Stud * chain = create(in);
	printchain(chain);

	fclose(in);
	fclose(out);

	return 0;
}
