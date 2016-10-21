#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SIZE 256

int host_info()
{
	char info[SIZE];

	if (gethostname(info, SIZE) == -1) {
		perror("gethostname error");
		return EXIT_FAILURE;
	}

	printf("Host name:\t%s\n", info);
	printf("Host id:\t%ld\n", gethostid());
	
	return EXIT_SUCCESS;
}

int main()
{
	host_info();

	return EXIT_SUCCESS;
}
