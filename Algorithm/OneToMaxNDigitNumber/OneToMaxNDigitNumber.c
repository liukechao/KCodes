#include <stdio.h>

#define MAX 10

/* can easily overflow */
void PrintNumbers(int n)
{
	int i;
	char buf[MAX] = {0};
	
	buf[0] = '1';
	for (i = 1; i <=n; i++)
		buf[i] = '0';

	for (i = 1; i < atoi(buf); i++) {
		printf("%d\t", i);
		if (i % 10 == 0)
			printf("\n");
	}
	printf("\n");
}

void PrintNumberWithString(int n)
{
	
}

int main(int argc, char* argv[])
{
	if (argc > 1)
		PrintNumbers(atoi(argv[1]));
	else
		PrintNumbers(2);

	getchar();
	return 0;
}
