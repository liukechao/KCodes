#include <stdio.h>

struct bits {
	int x:1;
	int y:2;
	char z:8;
};

int main()
{
	printf("%f\n", 5);
	printf("%d\n", 5.01);

	return 0;
}
