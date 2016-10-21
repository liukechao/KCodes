#include <stdio.h>

int main()
{
	int x = 'Hello';
	char c[] = "Hello";
	int i = 0;
	
	while (c[i]) {
		printf("%x\t", c[i]);
		i++;
	}

	printf("\nx = %x\n", x);
	
	return 0;
}
