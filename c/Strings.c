#include <stdio.h>
#include <string.h>

int prchar();
int main()
{
	char s[20];
	gets(s);
	printf("prchar:\n");
	prchar(s, 20);
	printf("puts:\n");
	puts(s);
	printf("for number group:\n");
	for(int i = 0; i<20; i++)
		printf("%c", s[i]);
	printf("\n");
	printf("in mem:\n");
	for(int i = 0; i<20; i++)
	{
		printf("%p:",&s[i]);
		printf("%x\n", s[i]);
	}
	printf("\n");
	return 0;
}

int prchar(char *in, int nu)
{
	for(int i = 0; i<nu; i++)
	{
		printf("%c",*in);
		in++;
	}
	printf("\n");
}
