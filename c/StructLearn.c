#include <stdio.h>

int main()
{
	struct Student
	{
		int num;
		char name[20];
	};

	int n;
	scanf("%d", &n);

	struct Student a[n];
	for(int i=0; i<n; i++)
		scanf("%d %s", &a[i].num, a[i].name);

	scanf("%d", &n);
	printf("%d %s\n",a[n-1].num, a[n-1].name);
	return 0;
}

