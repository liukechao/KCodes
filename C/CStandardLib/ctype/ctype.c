#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

void check_type(int c)
{
	printf("Charactor %c:\n", c);

	printf("isalnum: %d\n", isalnum(c));
	printf("isalpha: %d\n", isalpha(c));
	printf("isascii: %d\n", isascii(c));
//	printf("isblank: %d\n", isblank(c));
	printf("iscntrl: %d\n", iscntrl(c));
	printf("isdigit: %d\n", isdigit(c));
	printf("isgraph: %d\n", isgraph(c));
	printf("islower: %d\n", islower(c));
	printf("isprint: %d\n", isprint(c));
	printf("ispunct: %d\n", ispunct(c));
	printf("isspace: %d\n", isspace(c));
	printf("isupper: %d\n", isupper(c));
	printf("isxdigit: %d\n", isxdigit(c));

	if(islower(c))
		printf("toupper: %c\n", toupper(c));
	if(isupper(c))
		printf("tolower: %c\n", tolower(c));
}

int main(int argc, char **argv)
{
	char c;
	
	printf("Input a charactor: ");
	scanf("%c", &c);

	check_type(c);

	getchar();
	return EXIT_SUCCESS;
}	
