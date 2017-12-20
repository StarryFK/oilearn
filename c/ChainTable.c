#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)

struct Student
{
	int num;
	float score;
	struct Student *next;
};

int n;

struct Student * create()
{
	struct Student *p1,*p2,*head;
	
	n=0;
	head=NULL;

	p1 = p2 = malloc(LEN);

	scanf("%d,%f", &p1->num, &p1->score);
	while(p1->num != 0)
	{
		n++;
		if(n==1)
			head = p1;
		else
			p2->next = p1;
		p2 = p1;
		p1 = malloc(LEN);
		scanf("%d,%f",&p1->num, &p1->score);
	}
	p2->next = NULL;
	return(head);
}

void print(struct Student *pt)
{
	while(pt != NULL)
	{
		printf("Num: %d\nScore: %f\n",pt->num, pt->score);
		pt = pt->next;
	}
}

int main()
{
	struct Student *p;
	p = create();
	print(p);

	return 0;
}
