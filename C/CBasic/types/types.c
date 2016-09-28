#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c;
	short s;
	int i;
	float f;
	double d;
	
	printf("%d, %d, %d, %d, %d\n",
		sizeof(c), sizeof(s),
		sizeof(i), sizeof(f),
		sizeof(d));

	system("pause");
	return EXIT_SUCCESS;
}
