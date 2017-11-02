#include <cstring>
#include <cstdio>

char a[10000];

int main()
{
	int count, i;
	scanf("%s", a);
	for(int j=0; j<=9; j++)
		printf("%3d", j);
	printf("\n");
	for(int nu=48; nu<=57; nu++)
	{
		count = 0;
		for(i=0; i<strlen(a); i++)
			if(a[i] == (char)nu)
				count++;
		printf("%3d", count);
	}
	printf("\n");
	return 0;
}

