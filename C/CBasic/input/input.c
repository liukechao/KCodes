#include <stdio.h>
#include <stdlib.h>

int main()
{
	int c;
	int pre = 0;
	long count;

	for (count = 0; (c = getchar()) != '\n'; count++) {
		if (c == ' ') {
			if (pre != ' ') {
				putchar(c);
				pre = ' ';
			} 
		} else {
			if (c == '\t') {
				putchar('\\');
				putchar('t');
			} else {
				putchar(c);
			}

			pre = c;
		}
		
	}

	putchar('\n');

	system("pause");
	return EXIT_SUCCESS;
}
