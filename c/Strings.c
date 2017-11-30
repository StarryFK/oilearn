#include <stdio.h>
#include <string.h>

int prchar();
int main()
{
	char s[10],b[10];
	gets(s);
	gets(b);
	printf("%d\n%d\n",strlen(s),strlen(b));
	puts(s);
	return 0;
}
