#include <stdio.h>

union Data
{
	int i;
	char ch;
	float f;
};

int main()
{
	union Data a;
	a.f = 4.9999;
	a.i = 5;
	printf("%f\n", a.f);
	return 0;
}
