#include <assert.h>
#include <errno.h>	/* errno */
#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* strerror, strerror_r */

#define SIZE 256

int main(int argc, char **argv)
{
	FILE *fp;
	char buf[SIZE];

	assert(argc > 1);

	errno = 0;

	fp = fopen(argv[1], "r");
	if (fp == NULL) {
		perror("couldn't open file");

		fprintf(stderr, "couldn't open file %s: %s\n", 
				argv[1], strerror(errno));

		//Not for VC
		//strerror_r(errno, buf, SIZE);
		//fprintf(stderr, "couldn't open file %s: %s\n", 
		//		argv[1], buf);

		getchar();
		exit(EXIT_FAILURE);
	}
	
	fclose(fp);
	
	getchar();
	return EXIT_SUCCESS;
}
