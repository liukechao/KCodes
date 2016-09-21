#include <stdio.h>

union endian {
	int i;
	char c;
};

int main()
{
	union endian e;

	e.i = 0x12345678;
	if(e.c == 0x78)
		printf("Little Endian.\n");
	else
		printf("Big Endian.\n");

	system("pause");
	return 0;
}	
