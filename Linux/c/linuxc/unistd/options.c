#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	int i, c;
	int aflag = 0;
	int bflag = 0;
	char *cvalue = NULL;

	opterr = 0;
	while ((c = getopt(argc, argv, "abc:")) != -1) {
		switch (c) {
			case 'a':
				aflag = 1;
				break;
			case 'b':
				bflag = 1;
			case 'c':
				cvalue = optarg;
				break;
			case '?':
				if (isprint(optopt))
					fprintf(stderr, "Unknown option '-%c'.\n", optopt);
				else
					fprintf(stderr, "Unknown option character '\\x%x'.\n", optopt);
				return EXIT_FAILURE;
			default:
				break;
		}
	}
	printf("aflag = %d, bflag = %d, cvalue = %s\n", aflag, bflag, cvalue);

	for (i = optind; i < argc; i++)
		printf("Non-option argument '%s'\n", argv[i]);

	return EXIT_SUCCESS;
}
