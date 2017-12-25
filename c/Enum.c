#include <stdio.h>

enum color {red, yellow, blue, green};

int main()
{
	enum color cl;
	cl = red;
	switch(cl)
	{
		case red:
			printf("Red");
			break;
		case yellow:
			printf("Yellow");
			break;
		case blue:
			printf("Blue");
			break;
		case green:
			printf("Green");
			break;
		default:
			break;
	}
	printf("\n");

	return 0;

}
