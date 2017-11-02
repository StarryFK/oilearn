#include <stdio.h>

int main()
{
	struct birth
	{
		int year;
		int month;
		int date;
	};

	struct Student
	{
		int num;
		char name[20];
		struct birth birthday;
	};

	struct Student a[3];
	a[1].birthday.date=31;
	printf("%d %s %d\n", a[1].birthday.date);
	return 0;
}

