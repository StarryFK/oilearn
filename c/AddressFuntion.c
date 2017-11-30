#include <stdio.h>

void s(int x,int y)
{
	printf("%x,%x\n", &x, &y);
}

int main()
{
	int x=10,y=6;
	printf("%x,%x\n", &x, &y);
	s(x,y);
	return 0;
}
