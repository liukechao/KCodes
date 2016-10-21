#include "lkc_string.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc > 1) {
		char str[256];
		char *p;

		printf("length of \"%s\" is %d\n",
			argv[1], lkc_strlen(argv[1]));
		
		printf("copy of the input string: %s\n",
			lkc_strcpy(str, argv[1]));
		
		p = lkc_strdup(argv[1]);
		printf("duplication of the input string: %s\n",
			p);
		free(p);
		
		if (argc > 2) {
			printf("concatenate the two strings: %s\n", 
				lkc_strcat(str, argv[2]));

			printf("comparation of the two strings: %d\n", 
				lkc_strcmp(argv[1], argv[2]));

			if (lkc_strlen(argv[2]) == 1)
				p = lkc_strchr(str, argv[2][0]);
			else
				p = lkc_strstr(argv[1], argv[2]);
			
			if (p == NULL)
				printf("string \"%s\" doesn't contain \"%s\"\n", 
					argv[1], argv[2]);
			else
				printf("address of first \"%s\" in string "
					"\"%s\": %x, value is: %s\n",
					argv[2], argv[1], p, p);
			
		}
		
	}
	
	getchar();
	return EXIT_SUCCESS;
}
