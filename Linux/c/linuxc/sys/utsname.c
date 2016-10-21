#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>

int main()
{
	struct utsname info;

	if (uname(&info) == -1) {
		perror("uname error");
		return EXIT_FAILURE;
	}

	printf("OS Type:\t%s\n", info.sysname);
	printf("Network Name:\t%s\n", info.nodename);
	printf("Release Level:\t%s\n", info.release);
	printf("Version:\t%s\n", info.version);
	printf("Hardware Type:\t%s\n", info.machine);

	return EXIT_SUCCESS;
}

