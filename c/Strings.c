#include <stdio.h>
#include <string.h>

int main()
{
	char s[10],b[10];
	gets(s);
	gets(b);
	char *p;
	p = s;
	for(int i=0;i<10;i++)
	{
		printf("%c\n",*p);
		p++;
	}
	printf("%d,%d",strlen(s),strlen(b));
	return 0;
}

